/*
 * Button_LED.c
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
	DDRC |= (1<<PINC0); //Make PINC0 as output
	DDRB &= ~(1<<PINB0); //Make PINB0 as input
	PORTB |= (1<<PINB0); //Make PINB0 high
	
	while(1)
	{
		if((PINB & (1<<PB0)) == 0 )
		{
			_delay_ms(50); // create a 50ms debouncing time
			PORTC ^= (1<<PINC0); //toggle LED on button press
		}	
	}
}