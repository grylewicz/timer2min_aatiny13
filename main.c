/*
 * main.c
 *
 *  Created on: 5 lut 2020
 *      Author: wojtek
 */

#include <avr/io.h>
#include <util/delay.h>


#define RLY (1<<PB0)
#define RLY_ON PORTB |= RLY
#define RLY_TOG PORTB ^= RLY

int main ( void ) {

	DDRB |= RLY;
	RLY_ON;

	while(1) {

			for ( uint8_t i=0; i<233; i++ ) {

				_delay_ms (500);

			}

			RLY_TOG;

	}


}
