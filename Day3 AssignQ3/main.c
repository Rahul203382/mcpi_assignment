/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>

#include"led.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

//int main(void)
//{
//	led_init(LED_RED);
//
//	while(1)
//	{
//		led_on(LED_RED);
//		DelayMs(1000);
//		led_off(LED_RED);
//		DelayMs(1000);
//	}
//}


int main(void)
{
	int i;
	uint8_t leds[] = {LED_GREEN, LED_ORANGE, LED_RED, LED_BLUE};
	for(i = 0 ; i < 4 ; i++)
		led_init(leds[i]);



	while(1)
	{
		for(int i=0;i<4;i++)
			while(14 & BV(i))
			{
		led_on(leds[i]);
		DelayMs(500);
		break;
			}



		for(int i=0; i<4; i++)
			while(14 & BV(i))
			{
				led_off(leds[i]);
				//DelayMs(500);
				break;
			}
		DelayMs(500);
	}
}




