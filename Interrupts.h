/*
 * Interrupts.h
 *
 * Created: 21/01/2020 01:18:31 م
 *  Author: mo
 */


#ifndef INTERRUPTS_H_
#define INTERRUPTS_H_

#include "registers.h"
#include "timers.h"
#define SET_BIT(REG,BIT) (REG|=(1<<BIT))
#define CLEAR_BIT(REG,BIT) (REG&=(~(1<<BIT)))
extern void G_interrupt_Enable(void);
extern void G_interrupt_Disable(void);
extern volatile uint32_t u32_ovf_counter;

#endif /* INTERRUPTS_H_ */
