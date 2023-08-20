#include "mbed.h"

DigitalIn button1(PC_13);  //P13
DigitalIn button2(PC_16);  //UNKNOWN
DigitalOut led1(p23);     //LED1
DigitalOut led2(p25);    //LED2


int main()
{
    printf("This is the bare metal blinky example running on Mbed OS %d.%d.%d. \r\n\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);

    while(1) {
        if (button1 == 0 && button2 == 1) { // Button1 is pressed, goes to 0 volts 
            led1 = 1;
            led2 = 0;
            wait_us(20000);
        }
        if (button1 == 1 && button2 == 0) { // Button2 is pressed, goes to 0 volts 
            led2 = 0;
            led2 = 1;
            wait_us(20000);
        }

        else{
            led1 = 0;
            led2 = 0;
        }
        
    }
}