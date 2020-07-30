/*
 *Knight Rider Lights.c  
 *
 * Created: 13/08/2019 12:57:12 PM
 * Author : Dean
 */ 


#define F_CPU 8000000UL // Clock SpeedThis is a macro that will be used by the compiler to calculate delay loops, and states it to be 8MHz, without this line the program defaults to some other value (1000000) and all the timing would be wrong. 
#include <util/delay.h> // included to use delay function 
#include <avr/io.h> // include the chip
#include "AUTiomacro.h"





int main(void)
{
    DDRC=0xFF; // Set as output // Connected to 7 seg display on ATBUS1286
    PORTC=0x00; // Starts of at 0
    DDRD=0xFF; //Set as input
	

   
   
    while (1) // always running 
	
	
    {
		// setting each bit in PortC high to turn on LED which are connect via source method 
		PORTC = 0b10000000; // turning on port c.0 1 
		_delay_ms(100);
		PORTC=  0b01000000;
		_delay_ms(100);
		PORTC = 0b00100000;
		_delay_ms(100);
		PORTC=  0b00010000;
		_delay_ms(100);
		PORTC = 0b00001000;
		_delay_ms(100);
		PORTC=  0b00000100;
		_delay_ms(100);
		PORTC = 0b00000010;
		_delay_ms(100);
		PORTC= 0b00000001;
		_delay_ms(100);
		
		 PORTC = 0b00000010;
			_delay_ms(100);
			PORTC=  0b00000100;
			_delay_ms(100);
			PORTC = 0b00001000;
			_delay_ms(100);
			PORTC=  0b00010000;
			_delay_ms(100);
			PORTC = 0b00100000;
			_delay_ms(100);
			PORTC=  0b01000000;
			_delay_ms(100);
			PORTC = 0b10000000;
			
		
	}
	
	
		

		
    
}

