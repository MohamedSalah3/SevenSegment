#include "sevenSeg.h"
#include "sevenSegConfig.h"
void sevenSegInit(En_SevenSegId_t a_segment_id)
{
switch(a_segment_id)
{
case SEG_0:
gpioPortDirection(GPIOB,HIGH);
break;
case SEG_1:
gpioPortDirection(GPIOB,HIGH);
break;

}
}

void sevenSegEnable(En_SevenSegId_t en_segment_id)
{
	switch(en_segment_id)
	{
case SEG_0:
gpioPinWrite(GPIOD,BIT0,HIGH);
break;
case SEG_1:
gpioPinWrite(GPIOD,BIT1,HIGH);
break;
}
}
void sevenSegDisable(En_SevenSegId_t en_segment_id)
{
switch(en_segment_id)
{
case SEG_0:
gpioPinWrite(GPIOD,BIT0,LOW);
break;
case SEG_1:
gpioPinWrite(GPIOD,BIT1,LOW);
break;
}
}
void sevenSegWrite(En_SevenSegId_t en_segment_id, uint8_t u8_number)
{
switch(en_segment_id)
{
case SEG_0:
gpioPortWrite(GPIOB,u8_number);
break;
case SEG_1:
gpioPortWrite(GPIOB,u8_number);
break;
}

}