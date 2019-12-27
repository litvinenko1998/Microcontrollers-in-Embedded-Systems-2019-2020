/*---------------------------------Snake.c----------------------------------------------*/

#include <mega128.h>
#include <delay.h>
#include <stdio.h>
#include <stdlib.h>
#include <T6963c.h>
#include <t6963c.c>


/*--------------------------------------------------------------------------------------*/

void main(void)
{
init_cpu();
timer0_init();
init_display();
clear_text();
clear_graphics();
lcd_clear_full();


DDRE=0b11110000;
PORTE=0b11111111;
DDRF=0b00000000;
PORTF=0b11100000;



                while(1)
                {
 /*lcd_circle (119,63,40,1);  
delay_ms(1000);  */

lcd_degree_line(119,63,90,5,40,1);  
delay_ms(1000);  
   
lcd_degree_line(119,63,100,5,40,1);  
delay_ms(1000);

lcd_degree_line(119,63,110,5,40,1);  
delay_ms(1000);

lcd_degree_line(119,63,120,5,40,1);  
delay_ms(1000);

lcd_degree_line(119,63,130,5,40,1);  
delay_ms(1000);

lcd_degree_line(119,63,140,5,40,1);  
delay_ms(1000);

lcd_degree_line(119,63,150,5,40,1);  
delay_ms(1000);

lcd_degree_line(119,63,160,5,40,1);  
delay_ms(1000);

lcd_degree_line(119,63,170,5,40,1);  
delay_ms(1000);

lcd_degree_line(119,63,180,5,40,1);  
delay_ms(1000);

lcd_degree_line(119,63,190,5,40,1);  
delay_ms(1000);
                                 lcd_degree_line(119,63,200,5,40,1);  
delay_ms(1000);
                                 lcd_degree_line(119,63,210,5,40,1);  
delay_ms(1000);
                                 lcd_degree_line(119,63,220,5,40,1);  
delay_ms(1000);
                                 lcd_degree_line(119,63,230,5,40,1);  
delay_ms(1000);
                                 lcd_degree_line(119,63,240,5,40,1);  
delay_ms(1000);
                                 lcd_degree_line(119,63,250,5,40,1);  
delay_ms(1000);
                                 lcd_degree_line(119,63,260,5,40,1);  
delay_ms(1000);
                                 lcd_degree_line(119,63,270,5,40,1);  
delay_ms(1000);
                                 lcd_degree_line(119,63,280,5,40,1);  
delay_ms(1000);
                                 lcd_degree_line(119,63,290,5,40,1);  
delay_ms(1000);
                                 lcd_degree_line(119,63,300,5,40,1);  
delay_ms(1000);
                                 lcd_degree_line(119,63,310,5,40,1);  
delay_ms(1000);
                                 lcd_degree_line(119,63,320,5,40,1);  
delay_ms(1000);
                                 lcd_degree_line(119,63,330,5,40,1);  
delay_ms(1000);
                                 lcd_degree_line(119,63,340,5,40,1);  
delay_ms(1000);
                                 lcd_degree_line(119,63,350,5,40,1);  
delay_ms(1000);
                                 lcd_degree_line(119,63,360,5,40,1);  
delay_ms(1000);
                                 lcd_degree_line(119,63,10,5,40,1);  
delay_ms(1000);
                                 lcd_degree_line(119,63,20,5,40,1);  
delay_ms(1000);     
                                  lcd_degree_line(119,63,30,5,40,1);  
delay_ms(1000);
                                  lcd_degree_line(119,63,40,5,40,1);  
delay_ms(1000);
                                  lcd_degree_line(119,63,50,5,40,1);  
delay_ms(1000);
                                  lcd_degree_line(119,63,60,5,40,1);  
delay_ms(1000);
                                  lcd_degree_line(119,63,70,5,40,1);  
delay_ms(1000);
                                  lcd_degree_line(119,63,80,5,40,1);  
delay_ms(1000);
                
                }


}