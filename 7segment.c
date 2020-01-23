/*
 * _7segment.c
 *
 * Created: 18/01/2020 11:27:39 م
 *  Author: mo
 */

#include "Interrupts.h"
#include "timers.h"
#include "registers.h"
#include "std_types.h"
#include "gpio.h"
#include "sevenSeg.h"
#include "sevenSegConfig.h"

volatile uint32_t u32_ovf_counter=0;

uint8_t Prescaler_Value=0;

int main(void)
{
	uint8_t flag=0,counter=0,counter10=0,Loop_counter=0;
	uint8_t *ptru8_counter=&counter;
	uint8_t *ptru8_counter10=&counter10;
timer0Init(T0_NORMAL_MODE,T0_OC0_DIS,T0_PRESCALER_8 ,0,0,T0_INTERRUPT_NORMAL);
sevenSegInit(SEG_0);
sevenSegInit(SEG_1);
//gpioPortDirection(GPIOD,HIGH);
    while(1)
    {
	sevenSegEnable(SEG_0);
	sevenSegEnable(SEG_1);
	//sevenSegWrite(SEG_0,0);
for (Loop_counter=0;Loop_counter<10;Loop_counter++)
{
	flag=0;
/*softwareDelayMs(50);*/

if (counter >= 9 || counter10 >=9)
{
	flag=1;
	counter=0;
	//break;
}else{
	counter++;
}
	if(flag == 1)
	{
	  	counter10++;
	}
for (Loop_counter=0;Loop_counter<10;Loop_counter++)
{
sevenSegDisable(SEG_0);
sevenSegEnable(SEG_1);
sevenSegWrite(SEG_1,*ptru8_counter);
timer0Start();
timer0DelayMs(10);
sevenSegDisable(SEG_1);
sevenSegEnable(SEG_0);
sevenSegWrite(SEG_0,*ptru8_counter10);
/*softwareDelayMs(50);*/
timer0Start();
timer0DelayMs(10);
sevenSegDisable(SEG_0);
}
}

timer0Start();
timer0DelayMs(500);//TODO:: Please write your application code

   }
}
void __vector_11(void) __attribute__((signal,__INTR_ATTRS));
void __vector_11(void)
{
u32_ovf_counter++;
}
