 #include <mega128.h>
 #include <io.h>
 #include <delay.h>
 #include <stdio.h>
 // Conclusion of the name "Tanya" to the matrix indicator
 void main ()
 { 
 int x; 
 int i;
 x=20;
 DDRB = 0xFF;
 DDRF = 0xFF; 
 delay_ms(5000);     
 PORTF = 0b00001001;

 while (1){  
 // PORTF++;
 for (i=0; i<=5; i++){
  PORTB = 0b01111110;    //1
  PORTF = 0b00001000; 
  delay_ms(x);             
  PORTB = 0b01111110;       //2
  PORTF = 0b00001010;
  delay_ms(x);                   
  PORTB = 0b00011000;          //3
  PORTF = 0b00011000; 
  delay_ms(x);                 
  PORTB = 0b00011000;             //4
  PORTF = 0b00011010;
  delay_ms(x);                 
  PORTB = 0b00011000;                //5
  PORTF = 0b00001100; 
  delay_ms(x);                  
  PORTB = 0b00011000;                   //6
  PORTF = 0b00001110; 
  delay_ms(x);                  
  PORTB = 0b00011000;                      //7
  PORTF = 0b00011100; 
  delay_ms(x);                   
  PORTB = 0b00011000;                      //8
  PORTF = 0b00011110;  
  delay_ms(x); 
 }
 for (i=0; i<=10; i++){
  PORTB = 0b00011000;    //1
  PORTF = 0b00001000; 
  delay_ms(x);             
  PORTB = 0b00100100;       //2
  PORTF = 0b00001010;
  delay_ms(x);                   
  PORTB = 0b01000010;          //3
  PORTF = 0b00011000; 
  delay_ms(x);                 
  PORTB = 0b01000010;             //4
  PORTF = 0b00011010;
  delay_ms(x);                 
  PORTB = 0b01111110;                //5
  PORTF = 0b00001100; 
  delay_ms(x);                  
  PORTB = 0b01000010;                   //6
  PORTF = 0b00001110; 
  delay_ms(x);                  
  PORTB = 0b01000010;                      //7
  PORTF = 0b00011100; 
  delay_ms(x);                   
  PORTB = 0b01000010;                      //8
  PORTF = 0b00011110;  
  delay_ms(x); 
   }  
 for (i=0; i<=15; i++){
  PORTB = 0b01100110;    //1
  PORTF = 0b00001000; 
  delay_ms(x);              
  PORTB = 0b01100110;       //2
  PORTF = 0b00001010; 
  delay_ms(x);                 
  PORTB = 0b01100110;          //3
  PORTF = 0b00011000;
  delay_ms(x);                  
  PORTB = 0b01111110;             //4
  PORTF = 0b00011010; 
  delay_ms(x);                 
  PORTB = 0b01111110;                //5
  PORTF = 0b00001100; 
  delay_ms(x);                   
  PORTB = 0b01100110;                   //6
  PORTF = 0b00001110;
  delay_ms(x);                  
  PORTB = 0b01100110;                      //7
  PORTF = 0b00011100;  
  delay_ms(x);                  
  PORTB = 0b01100110;                      //8
  PORTF = 0b00011110;  
  delay_ms(x); 
   } 
 for (i=0; i<=20; i++){
  PORTB = 0b01111110;    //1
  PORTF = 0b00001000;  
  delay_ms(x);            
  PORTB = 0b01111110;       //2
  PORTF = 0b00001010;  
  delay_ms(x);                
  PORTB = 0b01100110;          //3
  PORTF = 0b00011000;  
  delay_ms(x);                 
  PORTB = 0b01111110;             //4
  PORTF = 0b00011010;  
  delay_ms(x);               
  PORTB = 0b00011110;                //5
  PORTF = 0b00001100; 
  delay_ms(x);                  
  PORTB = 0b00110110;                   //6
  PORTF = 0b00001110;  
  delay_ms(x);                
  PORTB = 0b01100110;                      //7
  PORTF = 0b00011100;
  delay_ms(x);                   
  PORTB = 0b11000110;                      //8
  PORTF = 0b00011110; 
  delay_ms(x); 
   }    
}       
}
