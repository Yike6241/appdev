
#include <stdlib.h>		// for random numbers
#include <time.h>		// for randomization (using system time)
#include "screen.h"
#include <stdio.h>
#include "sound.h"



int main(){
	FILE *f;
	short sd[80000];
	for(;;){
		system("arecord -r16000 -c1 -f S16_LE -d5 test.wav");
		f = fopen("test.wav", "r");
		if(f == NULL){
			printf("Cannot open the file\n");
			return 1;
		}

		clearScreen();
		setColors(RED, bg(YELLOW));
		struct WAVHDR hdr;
		fread(&hdr, sizeof(hdr), 1, f);		// read WAV header
		fread(&sd, sizeof(sd), 1, f);		// read WAV data
		fclose(f);
		displayWAVHDR(hdr);
		// displayWAVDATA();
	}
	resetColors();
	getchar();
}
