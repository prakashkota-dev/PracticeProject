/*
 * BlinkLED.c
 *
 * Created: 7/4/2020 5:45:30 PM
 *  Author: Mohan
 */ 


#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHz clock speed
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRC = 0xFF; //Make PORTC as output
	while(1)
	{
		PORTC = 0xFF; //Turn ON all the leds connected to PORTC
		_delay_ms(3000); //create 3 second delay
		PORTC = 0x00;
		_delay_ms(2000); //create 2 seconds dely
	}
}