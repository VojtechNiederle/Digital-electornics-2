   | **Function name** | **Function parameters** | **Description** | **Example** |
   | :-- | :-- | :-- | :-- |
   | `lcd_init` | `LCD_DISP_OFF`<br>`LCD_DISP_ON`<br>`LCD_DISP_ON_CURSOR`<br>`LCD_DISP_ON_CURSOR_BLINK` | Display off&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<br>&nbsp;<br>&nbsp;<br>&nbsp; | `lcd_init(LCD_DISP_OFF);`<br>&nbsp;<br>&nbsp;<br>&nbsp; |
   | `lcd_clrscr` | non | Clear display and set cursor to home position. | `lcd_clrscr();` |
   | `lcd_gotoxy` | uint8_t 	x,uint8_t 	y | Set cursor to specified position | `lcd_gotoxy(0,0);` |
   | `lcd_putc` | char 	c | Display character at current cursor position. | `lcd_putc("a")` |
   | `lcd_puts` | const char * 	s | Display string without auto linefeed. | `lcd_puts("ok")` |
   | `lcd_command` | uint8_t 	cmd	 | Send LCD controller instruction command. | |
   | `lcd_data` | uint8_t 	data | Similar to lcd_putc(), but without interpreting LF | |
   
   # Lab 6: YOUR_FIRSTNAME FAMILYNAME

Link to this file in your GitHub repository:

[https://github.com/VojtechNiederle/Digital-electronics-2/edit/main/labs/06-lcd/README.md](https://github.com/VojtechNiederle/Digital-electronics-2/edit/main/labs/06-lcd/README.md)


### LCD display module

1. In your words, describe what ASCII table is.
   * ASCII table: It is a code name for letters and characters. 

2. (Hand-drawn) picture of time signals between ATmega328P and LCD keypad shield (HD44780 driver) when transmitting three character data `De2`.

   ![your figure](Schema1.png)


### Stopwatch

1. Flowchart figure for `TIMER2_OVF_vect` interrupt service routine which overflows every 16&nbsp;ms but it updates the stopwatch LCD approximately every 100&nbsp;ms (6 x 16&nbsp;ms = 100&nbsp;ms). Display tenths of a second and seconds `00:seconds.tenths`. Let the stopwatch counts from `00:00.0` to `00:59.9` and then starts again. The image can be drawn on a computer or by hand. Use clear descriptions of the individual steps of the algorithms.

   ![your figure](Schema1.png)


### Custom characters

1. Code listing of two custom character definition. Always use syntax highlighting and meaningful comments:

```c
/* Variables ---------------------------------------------------------*/
// Custom character definition
uint8_t customChar[16] = {
    // WRITE YOUR CODE HERE

};
```


### Kitchen alarm

Consider a kitchen alarm with an LCD, one LED and three push buttons: start, +1 minute, -1 minute. Use the +1/-1 minute buttons to increment/decrement the timer value. After pressing the Start button, the countdown starts. The countdown value is shown on the display in the form of mm.ss (minutes.seconds). At the end of the countdown, the LED will start blinking.

1. Scheme of kitchen alarm; do not forget the supply voltage. The image can be drawn on a computer or by hand. Always name all components and their values.

   ![your figure]()

