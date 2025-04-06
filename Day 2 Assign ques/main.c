//Rewrite all GPIO LED functions again. Pass LED pin to functions. (Functions should to initialization/on/off of only given pin).


#include <stdint.h>
#include <stdio.h>

#include"led.h"
#include"switch.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif


int main(void)
{
	led_init(LED_BLUE);
	switch_init();

	while(1)
	{
		while(switch_status() == 0)
			;
		led_toggle(LED_BLUE);
	}

}




