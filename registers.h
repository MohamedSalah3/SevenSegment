/*
 * registers.h
 *
 *  Created on: Oct 21, 2019
 *      Author: Sprints
 */
#ifndef REGISTERS_H_
#define REGISTERS_H_
#include "std_types.h"

/*
 * General Registers
 */
/*
#define MCUCR		
#define MCUCSR		
#define GICR		
#define GIFR		
*/
/*
 * PORTx registers
 */

#define PORTA_DATA 	*((reg_type8_t) (0x3B))
#define PORTA_DIR  	*((reg_type8_t) (0x3A))
#define PORTA_PIN	*((reg_type8_t) (0x39))

#define PORTB_DATA 	*((reg_type8_t) (0x38))
#define PORTB_DIR  	*((reg_type8_t) (0x37))
#define PORTB_PIN	*((reg_type8_t) (0x36))

#define PORTC_DATA 	*((reg_type8_t) (0x35))
#define PORTC_DIR  	*((reg_type8_t) (0x34))
#define PORTC_PIN	*((reg_type8_t) (0x33))


#define PORTD_DATA 	*((reg_type8_t) (0x32))
#define PORTD_DIR  	*((reg_type8_t)(0x31))
#define PORTD_PIN	*((reg_type8_t) (0x30))


/*
 * General Timer registers
 */
/*
#define TIMSK		
#define TIFR		
*/

/*
 * Timer 0 Registers
 */
/*
#define TCCR0		
#define TCNT0		
#define OCR0		
*/

/*
 * Timer 1 Registers
 */
/*
#define TCCR1A		
#define TCCR1B		
#define TCCR1		
#define TCNT1H		
#define TCNT1L		
#define TCNT1		
#define OCR1AH		
#define OCR1AL		
#define OCR1A		
#define OCR1BH		
#define OCR1BL		
#define OCR1B		
#define ICR1H		
#define ICR1L		
#define ICR1		
*/

/*
 * Timer 2 Registers
 */
/*
#define TCCR2		
#define TCNT2		
#define OCR2		
*/







#endif /* REGISTERS_H_ */
