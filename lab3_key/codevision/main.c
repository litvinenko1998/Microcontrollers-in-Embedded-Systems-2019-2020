#include <mega128.h>
#include <io.h>
#include <delay.h>
#include <stdio.h>

void main ()
{
DDRD = 0xFF;
PORTD = 0b01010101; 
DDRE = 0b11110000;
PORTE.6 = 0;
//asm program 
#asm
ldi r19,0xFF
out $11,r19
ldi r20,0b00001111
ldi r16,0b01000000
ldi r18,0b00000000
;out $61,r18
lb1: 
in r17, $00
and r17,r16
cpi r17, 0
brne lb1
nop
out $12, r20
#endasm

//C Program 

 while (1){ 
 
  if (PINF.7 == 0){
   PORTD = 0b01111111;
   }
  if (PINF.6 == 0){
   PORTD = 0b10111111;
   }  
  if (PINF.5 == 0){
   PORTD = 0b11011111;
   } 
  if (PINF.7 == 0 & PINF.6 ==0) {
   PORTD = 0b00111111;
   } 
   
   if (PINE.0 == 0 & PINE.1 == 0){
   PORTD = 0b11111110; 
   }

}


}