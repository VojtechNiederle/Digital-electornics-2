/***********************************************************************
 * 
 * Alternately toggle two LEDs when a push button is pressed.
 * ATmega328P (Arduino Uno), 16 MHz, AVR 8-bit Toolchain 3.6.2
 *
 * Copyright (c) 2018-Present Tomas Fryza
 * Dept. of Radio Electronics, Brno University of Technology, Czechia
 * This work is licensed under the terms of the MIT license.
 * 
 **********************************************************************/

/* Defines -----------------------------------------------------------*/
#define LED_1   PB5
#define LED_2   PB4
#define LED_3   PB3
#define LED_4   PB2
#define LED_5   PB1
#define BUTTON  PD5
#define BLINK_DELAY 250
#ifndef F_CPU
# define F_CPU 16000000
#endif

#include <util/delay.h>
#include <avr/io.h>
#include <stdlib.h>

int main(void)
{
    DDRB = DDRB | (1<<LED_1);
	DDRB = DDRB | (1<<LED_2);
	DDRB = DDRB | (1<<LED_3);
	DDRB = DDRB | (1<<LED_4);
	DDRB = DDRB | (1<<LED_5);
	DDRD = DDRD & ~(1<<BUTTON);
	
	
    PORTB = PORTB & ~(1<<LED_1);
	PORTB = PORTB & ~(1<<LED_2);
	PORTB = PORTB & ~(1<<LED_3);
	PORTB = PORTB & ~(1<<LED_4);
	PORTB = PORTB & ~(1<<LED_5);
	PORTD = PORTD | (1<<BUTTON);

	int LED_on = 0;
	int Button_Relased = 1;
	void BUTTON_PRESSED ( )
	{
		if (Button_Relased == 1)
		{
			if (((PIND >> BUTTON) & 1) == 0)
			{
				LED_on = abs(LED_on - 1);
				Button_Relased = 0;
			}
		}
		else
		{
			if (((PIND >> BUTTON) & 1) != 0)
			{
				Button_Relased = 1;
			}
		}
	}

    while (1)
    {
		BUTTON_PRESSED ();
		if (LED_on == 1)
		{
		BUTTON_PRESSED ();
		PORTB = PORTB ^ (1<<LED_1);
		_delay_ms(BLINK_DELAY);
		BUTTON_PRESSED ();
		PORTB = PORTB ^ (1<<LED_1);
		PORTB = PORTB ^ (1<<LED_2);
		_delay_ms(BLINK_DELAY);
		BUTTON_PRESSED ();
		PORTB = PORTB ^ (1<<LED_2);
		PORTB = PORTB ^ (1<<LED_3);
		_delay_ms(BLINK_DELAY);
		BUTTON_PRESSED ();
		PORTB = PORTB ^ (1<<LED_3);
		PORTB = PORTB ^ (1<<LED_4);
		_delay_ms(BLINK_DELAY);
		BUTTON_PRESSED ();
		PORTB = PORTB ^ (1<<LED_4);
		PORTB = PORTB ^ (1<<LED_5);
		_delay_ms(BLINK_DELAY);
		BUTTON_PRESSED ();
		PORTB = PORTB ^ (1<<LED_5);
		PORTB = PORTB ^ (1<<LED_4);
		_delay_ms(BLINK_DELAY);
		BUTTON_PRESSED ();
		PORTB = PORTB ^ (1<<LED_4);
		PORTB = PORTB ^ (1<<LED_3);
		_delay_ms(BLINK_DELAY);
		BUTTON_PRESSED ();
		PORTB = PORTB ^ (1<<LED_3);
		PORTB = PORTB ^ (1<<LED_2);
		_delay_ms(BLINK_DELAY);
		BUTTON_PRESSED ();
		PORTB = PORTB ^ (1<<LED_2);
		}
    }
    return 0;
}
