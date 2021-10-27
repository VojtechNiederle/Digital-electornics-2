   | **Function name** | **Function parameters** | **Description** | **Example** |
   | :-- | :-- | :-- | :-- |
   | `lcd_init` | `LCD_DISP_OFF`<br>`LCD_DISP_ON`<br>`LCD_DISP_ON_CURSOR`<br>`LCD_DISP_ON_CURSOR_BLINK` | Display off&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<br>&nbsp;<br>&nbsp;<br>&nbsp; | `lcd_init(LCD_DISP_OFF);`<br>&nbsp;<br>&nbsp;<br>&nbsp; |
   | `lcd_clrscr` | non | Clear display and set cursor to home position. | `lcd_clrscr();` |
   | `lcd_gotoxy` | uint8_t 	x,uint8_t 	y | Set cursor to specified position | `lcd_gotoxy(0,0);` |
   | `lcd_putc` | char 	c | Display character at current cursor position. | `lcd_putc("a")` |
   | `lcd_puts` | const char * 	s | Display string without auto linefeed. | `lcd_puts("ok")` |
   | `lcd_command` | uint8_t 	cmd	 | Send LCD controller instruction command. | |
   | `lcd_data` | uint8_t 	data | Similar to lcd_putc(), but without interpreting LF | |
