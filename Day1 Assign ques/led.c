/*
 * led.c
 *
 *  Created on: Oct 2, 2023
 *      Author: admin
 */
#include"led.h"

void led_init(void)
{
	
	RCC->AHB1ENR |= BV(GPIOD_CLK_ENB);

	
	LED_GPIO->MODER |= BV(24) | BV(26) | BV(28) | BV(30);
	LED_GPIO->MODER &= ~(BV(25) | BV(27) | BV(29) | BV(31));

	LED_GPIO->OTYPER &= ~(BV(12) | BV(13) | BV(14) | BV(15));

	
	LED_GPIO->OSPEEDR &= ~(BV(24) | BV(26) | BV(28) | BV(30));
	LED_GPIO->OSPEEDR &= ~(BV(25) | BV(27) | BV(29) | BV(31));

	LED_GPIO->PUPDR &= ~(BV(24) | BV(26) | BV(28) | BV(30));
	LED_GPIO->PUPDR &= ~(BV(25) | BV(27) | BV(29) | BV(31));
}
void led_on(void)
{
	LED_GPIO->ODR |= BV(LED_GREEN) | BV(LED_ORANGE) | BV(LED_RED) | BV(LED_BLUE);
}
void led_off(void)
{
	
	LED_GPIO->ODR &= ~(BV(LED_GREEN) | BV(LED_ORANGE) | BV(LED_RED) | BV(LED_BLUE));
}
