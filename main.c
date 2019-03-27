
#include <stdio.h>		//for random numbers
#include <time.h>		//for random
#include "screen.h"
#include <stdio.h>
int main(){
	int dec[COL], i;		//80-pieces of decibels
	for(i=0; i<COL; i++) dec[i]=rand()%170+30; 
	clearScreen();
	setColors(RED, bg(YELLOW));
	barChart(dec);

	resetColors();
	getchar();
}
