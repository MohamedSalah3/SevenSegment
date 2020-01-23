/*Timer.c*/
#include "led.h"
#include "ledConfig.h"
#include "timers.h"
#include "registers.h"
#include "Interrupts.h"
void timer0Init(En_timer0Mode_t en_mode,En_timer0OC_t en_OC0,En_timer0perscaler_t en_prescal,uint8_t u8_initialValue, uint8_t u8_outputCompare,En_timer0Interrupt_t en_interruptMask)
{
if(en_prescal == T0_NO_CLOCK)
{/*
if there is no clock the timer will be disabled
*/
timer0Stop();
}
else
{
TCCR0 |= en_mode | en_OC0|en_prescal ;
Prescaler_Value=en_prescal;
TCNT0 = u8_initialValue;
OCR0  =u8_outputCompare;
switch(en_interruptMask){
case  T0_POLLING:
TIMSK &= T0_POLLING;
break;
case T0_INTERRUPT_NORMAL :
{
G_interrupt_Enable();
TIMSK |= T0_INTERRUPT_NORMAL;
break;
}
case T0_INTERRUPT_CMP:
{
G_interrupt_Enable();
TIMSK |=T0_INTERRUPT_CMP;
break;
}
}
	 
}

}
void timer0Set(uint8_t u8_value)
{
TCNT0 =	u8_value;	 
}
 
uint8_t timer0Read(void)
{
	 return TCNT0;	 
}
 
/*
REStart the clocck by  cs00 cs01 cs02
						0     0    0
						Then 
						cs00 cs01 cs02
Depending on prescaler	x     X    X
						
*/
void timer0Start(void)
{

	 TCCR0 &= (0xF8);		 
	 TCCR0 |= Prescaler_Value;
}
/*	choosing no clock source cs00 cs01 cs02
						      0     0    0
*/ 
void timer0Stop(void)
 {
	 
TCCR0 &= (0xF8);		 
	 
 }
 /*
 
 
 
 */
 void timer0DelayMs(uint16_t u16_delay_in_ms)
 {
	uint32_t u32_loop=0;
	u32_ovf_counter=0;
		timer0Set(48);
		while(u32_ovf_counter <= (8)*u16_delay_in_ms);
	
}
 /*
 
 
 
 */
 void timer0DelayUs(uint32_t u32_delay_in_us)
 {  uint32_t u32_loop=0;
	u32_ovf_counter=0;
	for (u32_loop=0;u32_loop<u32_delay_in_us;u32_loop++)
	{
	timer0Set(254);
	while(u32_ovf_counter <= 1);	
	//while(u32_ovf_counter <= (8*u32_delay_in_us/1000));
	}
	
}/*1*/
void timer0SwPWM(uint8_t u8_dutyCycle,uint8_t u8_frequency)
{
	 u32_ovf_counter=0;
	 timer0Set(155);
	 while(u32_ovf_counter <= 1);
	 
	 
} 


void timer1Init(En_timer1Mode_t en_mode,En_timer1OC_t en_OC,En_timer1perscaler_t en_prescal,
 uint16_t u16_initialValue, uint16_t u16_outputCompareA,
 uint16_t u16_outputCompareB,uint16_t u16_inputCapture, 
 En_timer1Interrupt_t en_interruptMask)
 {
	 
	 
	 
 }

/**
 * Description:
 * @param value
 */
void timer1Set(uint16_t u16_value)
{
	
}

/**
 * Description:
 * @return
 */
uint16_t timer1Read(void)
{
	
	
}

/**
 * Description:
 */
void timer1Start(void)
{


	
}

/**
 * Description:
 */
void timer1Stop(void)
{
	
	
	
}

/**
 * Description:
 * @param delay
 */
void timer1DelayMs(uint16_t u16_delay_in_ms)
{
	
	
}

/*
 * user defined
 */
void timer1DelayUs(uint32_t u32_delay_in_us)
{
	
	
}

/**
 * Description:
 * @param dutyCycle
 */
void timer1SwPWM(uint8_t u8_dutyCycle,uint8_t u8_frequency)
{
	
	
}


