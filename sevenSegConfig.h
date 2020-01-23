/*
 * sevenSeg_BCD_CFG.h
 *
 *  Created on: Oct 26, 2019
 *      Author: Sprints
 */

#ifndef SEVENSEGCONFIG_H_
#define SEVENSEGCONFIG_H_

#include "gpio.h"
#include "sevenSeg.h"
#include "std_types.h"
#include "softwareDelay.h"

/*
 * USER CONFIGURATION
 *
 */

/*
 * Define the BCD pins (A, B, C and D) GPIO and BIT for each
 */
#define SEG_BCD_GPIO			(GPIOB)
#define SEG_BCD_BITS			(BIT0|BIT1|BIT2|BIT3)

/*
 * Define The BCD decimal point pin GPIO and BIT
 */
#define SEG_BCD_DP_GPIO			(GPIOD)
#define SEG_BCD_DP_BIT			(BIT4)

/*
 * Define The Seven Segment Enable pin GPIO
 */
#define SEG_EN1_GPIO		(GPIOD)
#define SEG_EN2_GPIO		(GPIOD)
#define SEG_EN3_GPIO		(GPIOD)
#define SEG_EN4_GPIO		(GPIOD)

/*
 * Define The Seven Segment Enable pin BIT
 */
#define SEG_EN1_BIT			(BIT2)
#define SEG_EN2_BIT			(BIT3)
#define SEG_EN3_BIT			(BIT6)
#define SEG_EN4_BIT			(BIT7)

#endif /* SEVENSEG_BCD_CFG_H_ */
