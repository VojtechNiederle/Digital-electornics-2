# Lab 1: YOUR_FIRSTNAME FAMILYNAME

Link to your `Digital-electronics-2` GitHub repository:

   [https://github.com/VojtechNiederle/Digital-electronics-2](https://github.com/VojtechNiederle/Digital-electronics-2)


### Blink example

1. What is the meaning of the following binary operators in C?
   * `|` OR
   * `&` AND
   * `^` XOR
   * `~` NOT
   * `<<` ditshift doleva
   * `>>` bitshift doprava

2. Complete truth table with operators: `|`, `&`, `^`, `~`

| **b** | **a** |**b or a** | **b and a** | **b xor a** | **not b** |
| :-: | :-: | :-: | :-: | :-: | :-: |
| 0 | 0 | 0 | 0 | 0 | 1 |
| 0 | 1 | 1 | 0 | 1 | 1 |
| 1 | 0 | 1 | 0 | 1 | 0 |
| 1 | 1 | 1 | 1 | 0 | 0 |


### Morse code

1. Listing of C code with syntax highlighting which repeats one "dot" and one "comma" (BTW, in Morse code it is letter `A`) on a LED:

```c
#define LED_GREEN   PB5 // AVR pin where green LED is connected
#define DOT_DELAY 250
#define DASH_DELAY 750
#define WORD_PAUSE_DELAY 1750 // Delay in milliseconds

#ifndef F_CPU           // Preprocessor directive allows for conditional
                        // compilation. The #ifndef means "if not defined".
# define F_CPU 16000000 // CPU frequency in Hz required for delay
#endif                  // The #ifndef directive must be closed by #endif

int main(void)
{
    // Set pin as output in Data Direction Register
    // DDRB = DDRB or 0010 0000
    DDRB = DDRB | (1<<LED_GREEN);

    // Set pin LOW in Data Register (LED off)
    // PORTB = PORTB and 1101 1111
    PORTB = PORTB & ~(1<<LED_GREEN);

    // Infinite loop
    while (1)
    {

        PORTB = PORTB ^ (1<<LED_GREEN); //Tečka
		_delay_ms(DOT_DELAY);
		PORTB = PORTB ^ (1<<LED_GREEN); //
		_delay_ms(DOT_DELAY);
		PORTB = PORTB ^ (1<<LED_GREEN); //Čárka
		_delay_ms(DASH_DELAY);
		PORTB = PORTB ^ (1<<LED_GREEN); //
		
		_delay_ms(WORD_PAUSE_DELAY);
		
    }

    // Will never reach this
    return 0;
}
```


2. Scheme of Morse code application, i.e. connection of AVR device, LED, resistor, and supply voltage. The image can be drawn on a computer or by hand. Always name all components and their values!

   ![your figure](https://github.com/VojtechNiederle/Digital-electronics-2/blob/main/labs/01-tools/Schema.jpg)

