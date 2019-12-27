 #include <mega128.h>
 #include <io.h>
 #include <delay.h>
 #include <stdio.h>
 void main ()
 {                     
 int i;
 int b;
 int x;
 b=100;
 x=1;
 DDRB = 0xFF;
 DDRF = 0xFF; 
 delay_ms(1000);   
 PORTF = 0b00001001;
 
    while (1){   
    for (i=0; i<=b; i ++)       {
 // PORTF++;
 PORTB = 0b00011000;    //1
 PORTF = 0b00001000;   
 delay_ms(x);             
 PORTB = 0b00100100;
 PORTF = 0b00001010;       //2
 delay_ms(x);                
 PORTB = 0b00100100;          //3
 PORTF = 0b00011000;   
 delay_ms(x);                
 PORTB = 0b00100100;             //4
 PORTF = 0b00011010;    
 delay_ms(x);                
 PORTB = 0b00100100;                //5
 PORTF = 0b00001100;    
 delay_ms(x);                
 PORTB = 0b00100100;                   //6
 PORTF = 0b00001110;   
 delay_ms(x);                
 PORTB = 0b00100100;                      //7
 PORTF = 0b00011100;   
 delay_ms(x);                
 PORTB = 0b00011000;                      //8
 PORTF = 0b00011110;   
 delay_ms(x);        
              
               
      }             
            delay_ms(5); 
      for (i=0; i<=b; i ++)       {
 PORTB = 0b00011000;    //1
 PORTF = 0b00001000;    
 delay_ms(x);             
 PORTB = 0b00100100;
 PORTF = 0b00001010;         //2
 delay_ms(x);                
 PORTB = 0b00100100;          //3
 PORTF = 0b00011000;   
 delay_ms(x);                
 PORTB = 0b00100100;             //4
 PORTF = 0b00011010;   
 delay_ms(x);                
 PORTB = 0b01000010;                //5
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
           // delay_ms(5);    
   
      }
                 for (i=0; i<=b; i ++)       {
 PORTB = 0b01111100;    //1
 PORTF = 0b00001000;    
 delay_ms(x);             
 PORTB = 0b01100000;
 PORTF = 0b00001010;         //2
 delay_ms(x);                
 PORTB = 0b01100000;          //3
 PORTF = 0b00011000;   
 delay_ms(x);                
 PORTB = 0b01111100;             //4
 PORTF = 0b00011010;   
 delay_ms(x);                
 PORTB = 0b01111100;                //5
 PORTF = 0b00001100;   
 delay_ms(x);                
 PORTB = 0b01100000;                   //6
 PORTF = 0b00001110;   
 delay_ms(x);                
 PORTB = 0b01100000;                      //7
 PORTF = 0b00011100;   
 delay_ms(x);                
 PORTB = 0b01111100;                      //8
 PORTF = 0b00011110;   
 delay_ms(x);           
           // delay_ms(5);    
   
             
}          for (i=0; i<=b; i ++)       {
 PORTB = 0b01111000;    //1
 PORTF = 0b00001000;    
 delay_ms(x);             
 PORTB = 0b01111000;
 PORTF = 0b00001010;         //2
 delay_ms(x);                
 PORTB = 0b01100000;          //3
 PORTF = 0b00011000;   
 delay_ms(x);                
 PORTB = 0b01100000;             //4
 PORTF = 0b00011010;   
 delay_ms(x);                
 PORTB = 0b01100000;                //5
 PORTF = 0b00001100;   
 delay_ms(x);                
 PORTB = 0b01100000;                   //6
 PORTF = 0b00001110;   
 delay_ms(x);                
 PORTB = 0b01100000;                      //7
 PORTF = 0b00011100;   
 delay_ms(x);                
 PORTB = 0b01100000;                      //8
 PORTF = 0b00011110;   
 delay_ms(x);           
           // delay_ms(5);    
   
             
}     
}     
}      
  
