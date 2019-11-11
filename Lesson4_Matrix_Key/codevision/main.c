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
PORTE.7 = 0;
//asm program 
#asm
;ldi r19,0xFF
;out $11,r19
ldi r19,0b11010000
ldi r26,0b11110000
ldi r27,0b11111111
ldi r17,0b00001111
ldi r20,0b00001111
ldi r16,0b00001111
ldi r18,0b00000000
////////////
ldi r21, 0b1111110
ldi r22, 0b1111101
ldi r23, 0b1111011
ldi r24, 0b1110111
ldi r25, 0b1101111
////////////
out $11,r27
;out $61,r18
out $12, r21
nop
;out $02, r26
;out $03, r19
nop
nop
lb1:
out $12, r22 
in r16, $00
cp r16, r17
nop
cp r16, r17
breq lb1
nop
out $12, r20
#endasm

//C Program 

 while (1){ 
    
   if (PINE.1 == 0){
   PORTD = 0b11111110; 
   }

}


}