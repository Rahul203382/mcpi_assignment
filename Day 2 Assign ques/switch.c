/*
 * switch.c
 *
 *  Created on: Mar 21, 2025
 *      Author: sunbeam
 */

#include"switch.h"

void switch_init(void)
{
	// clock enable
	RCC->AHB1ENR |= BV(GPIOA_CLK_EN);

	// mode - GPIO input
	SWITCH_GPIO->MODER &= ~(BV(SWITCH_PIN * 2) | BV(SWITCH_PIN * 2 + 1));

	// pull up/down - no
	SWITCH_GPIO->PUPDR &= ~(BV(SWITCH_PIN * 2) | BV(SWITCH_PIN * 2 + 1));
}
uint8_t switch_status(void)
{
	return SWITCH_GPIO->IDR & BV(SWITCH_PIN) ? 1 : 0;
}






