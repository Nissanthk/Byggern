/*
 * GccApplication2.c
 *
 * Created: 31.08.2023 15:51:52
 * Author : markuslf
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>
#include "uart.h"
#include <stdio.h>


#define IO_OUTPUT 1
#define BAUD 9600
#define UBRR 4915200UL / 16 / BAUD - 1 



// lage firkantsignal
int main(void)
{
	DDRA |= (IO_OUTPUT << PINA);
		
	//printf("geu");
	
	uart_init(UBRR);
	
	
	//exercise 1, sjekker testfunksjonen til del1
	while (true) {
		uart_tester();
	}
	

    /* EXERCISE 1, sjekker pinsene + signal
	while (true) 
    {
		
		PORTA |= (1 << PINA0);
		_delay_ms(100);
		PORTA &= (0 << PINA0);
		_delay_ms(100);
		
		
    }*/
	
}
