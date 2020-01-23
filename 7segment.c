/*
 * _7segment.c
 *
 * Created: 18/01/2020 11:27:39 م
 *  Author: mo
 */ 


#include "sevenSeg.h"
#include "sevenSegConfig.h"

int main(void)
{	
	uint8_t flag=0,counter=0,counter10=0,Loop_counter=0;
sevenSegInit(SEG_0);
sevenSegInit(SEG_1);
//gpioPortDirection(GPIOD,HIGH);
    while(1)
    {
	
	sevenSegEnable(SEG_0);
	sevenSegEnable(SEG_1);
	//sevenSegWrite(SEG_0,0);
for (Loop_counter=0;Loop_counter<10;Loop_counter++)
{	flag=0;
	sevenSegDisable(SEG_0);
	sevenSegWrite(SEG_1,counter);
			softwareDelayMs(50);

counter++;
if (counter >= 10)
{
	flag=1;
	counter=0;
	//break;
}
	if(flag == 1)
	{
		
		counter10++;
			flag=0;
			sevenSegDisable(SEG_1);
			sevenSegEnable(SEG_0);
			sevenSegWrite(SEG_0,counter10);
			softwareDelayMs(50);
	
	}
}	
	
        //TODO:: Please write your application code 
    }
}