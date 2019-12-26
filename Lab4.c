#include <mega128.h>
#include <delay.h>
#include <stdio.h>
#include <T6963.h>
#include < T6963.c>
// The output of the line at an angle with the initial coordinate (100; 40)
void main (void)
{
    init_cpu ();
    timer0_init ();
    init_display ();
    clear_text ();
    clear_graphics ();
lcd_clear_full ();

DDRE=0b11110000;
PORTE=0b11111111;
DDRF=0b00000000;
PORTF=0b11100000;
while (1)
{
lcd_degree_line (100, 40, 360, 20, 50, 1);
delay_ms(1000);
lcd_degree_line (100, 40, 340, 20, 50, 1);
delay_ms(1000);
lcd_degree_line (100, 40, 320, 20, 50, 1);
delay_ms(1000);
lcd_degree_line (100, 40, 300, 20, 50, 1);
delay_ms(1000);
lcd_degree_line (100, 40, 280, 20, 50, 1);
delay_ms(1000);
lcd_degree_line (100, 40, 260, 20, 50, 1);
delay_ms(1000);
lcd_degree_line (100, 40, 240, 20, 50, 1);
delay_ms(1000);
lcd_degree_line (100, 40, 220, 20, 50, 1);
delay_ms(1000);
lcd_degree_line (100, 40, 200, 20, 50, 1);
delay_ms(1000);
lcd_degree_line (100, 40, 180, 20, 50, 1);
delay_ms(1000);
lcd_degree_line (100, 40, 160, 20, 50, 1);
delay_ms(1000);
lcd_degree_line (100, 40, 140, 20, 50, 1);
delay_ms(1000);
lcd_degree_line (100, 40, 120, 20, 50, 1);
delay_ms(1000);
lcd_degree_line (100, 40, 100, 20, 50, 1);
delay_ms(1000);
lcd_degree_line (100, 40, 80, 20, 50, 1);
delay_ms(1000);
lcd_degree_line (100, 40, 60, 20, 50, 1);
delay_ms(1000);
lcd_degree_line (100, 40, 40, 20, 50, 1);
delay_ms(1000);
lcd_degree_line (100, 40, 20, 20, 50, 1);
delay_ms(1000);
lcd_degree_line (100, 40, 0, 20, 50, 1);
delay_ms(1000);
}
}
