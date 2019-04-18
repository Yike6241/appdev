# This is application development ver 1.1 ------ by kailai Du

This application offers a posaibility to turn a Raspberry Pi as a sound
device. The application comes with 2 functions : a sound collector and
a test tone generator.

List of Cotent
    1. Configuration Instructions
    2. Installation Instructions
    3. Operating Instructions
    4. List of Files
    5. Copyright / Copyleft
    6. Contact Info.
    7. Credits and Acknowledgements

1. Configuration instructions
    a. 1 Computer with Win/Linux system
    b. 1 keyboard
    c. 1 mouse
    d. 1 monitor
    e. 1 RJ45 cable longer than 15cm
    f. 1 HDMI cable
    g. 1 sound card with USB typcA cable and support 2.5/3.5mm interface
    h. 1  Micro SD card with more than 1Gb free memory
    i. 1 Raspberry Pi 3b+
    j. 1 microUSB to USB typeA power supply cable
    k. 1 microphone support 2.5/3.5mm cable
    l. 1 earphone or headphone with 2.5/3.5mm cable

2. Installation Instructions

    a.setting the Raspberry Pi
    ( https://www.raspberrypi.org/downloads/noobs/)
        1). By default Raspberry Pi boots into X-server (graphic) mode. This increases booting time, but in most cases we don’t use a display with RPi,
            so the first thing is to disable it. To do so, you need to connect RPi to a display via HDMI-DIV cable.
        2). You also need a USB keyboard for this step. Connect it to your RPi.
        3). Once booted, open a “terminal” window (Ctrl+ESC, and choose from the “Accessories”).
        4). Run “sudo raspi-config” command.
        5). Select from “boot options”: “Text console, auto-login”.
        6). The newer version of Raspbian disables SSH by default, therefore you have to enable it.
            Navigate to “Interfacing Options” and select “SSH”, Choose “Yes”, Select “Ok”
        7). You can also change the keyboard to be “Generic 105 key/Finnish” in “4. Internationalization Options”.
        8). Reboot “sudo reboot”

    b.Get the files(or tar)
    ( https://github.com/Yike6241/appdev)

3. Operating Instructions
    --login with your own account
    --use "make" start to build the project
    --use "./sound.out" compil the project
    --you can chick the "testcurl.txt" to accesing your recorded results
    --don't forgot type "make clean" to delete excution file

4. List of Files
    README : User guide
    comm.c : Got the function defintion for sendDATA
    comm.h : Constant definitions
    main.c : The center of this project
    makefile : Automate compilation to increase efficiency
    screen.c : This file used to display sound levels on a PUTTY screen as a bar chart
    screen.h : Set the display style
    sound.c : Statistical data collection
    sound.h : Constants definitions
    testcurl.c : The way to got right IP address

5. Copyright / Copyleft
    Greated by Kailai Du

6. Contact Info
    Name: Kailai Du
    Tel: +358 0465473963
    Mail: kailaidu6241@gmail.com

7.Credits and acknowledgments
    Thanks to VAMK's free place and software development related hardware devices


