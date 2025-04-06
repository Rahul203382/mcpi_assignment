/*
 * switch.h
 *
 *  Created on: Mar 21, 2025
 *      Author: admin
 */

#ifndef SWITCH_H_
#define SWITCH_H_

#include<stm32f407xx.h>

#ifndef BV
#define BV(n)	(1 << (n))
#endif

#define SWITCH_GPIO		GPIOA

#define SWITCH_PIN		0

#define GPIOA_CLK_EN	0

void switch_init(void);
uint8_t switch_status(void);

#endif /* SWITCH_H_ */
