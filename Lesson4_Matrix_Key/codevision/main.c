#include <mega128.h>
#include <io.h>
#include <delay.h>
#include <stdio.h>

void main ()
{
DDRD = 0xFF;
PORTD = 0b01010101; 
//DDRE = 0b11110000;
//PORTE.6 = 0;
//PORTE.7 = 0;

////asm program 
#asm
; init
ldi r19, 0b11110000
ldi r20, 0b11100000
ldi r21, 0b11010000
ldi r22, 0b00001111
; set line E0-E3 to in and set E4-E7 to out  
out $02,r19
;start loop
lb1:
out $03,r20 ; set 0 to PORTE.7
nop
in r17,$01 ; read PINE and write value to r17 - save data from 
out $03,r21 ; set 0 to PORTE.6
nop
in r18, $01 ; read PINE and write value to r18  
and r17, r22
and r18,r22
cp r17, r22
brne lb2 
cp r18, r22
brne lb2	
jmp lb1
lb2:				; мітка виходу з процедури
out $12, r22
#endasm

//C Program 
delay_ms(2000);
PORTD = 0xF0;
delay_ms(2000);
PORTD = 0x0F;
delay_ms(2000); 

while (1){ 
    
   if (PINE.1 == 0){
   PORTD = 0b11111110; 
   }

}


}