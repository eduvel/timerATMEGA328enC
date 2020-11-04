/*
 * TimerEnCmodoCTCinterrupt.c
 *
 * Created: 04/11/2020 11:48:04
 * Author : Velazquez Eduardo
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>

int main(void)
{
	DDRB=(1<<DDB5);
	TCCR1A=0;
	TCCR1B=(1<<WGM12)|(1<<CS12);
	TCCR1C=0;
	TIMSK1=(1<<OCIE1A);
	OCR1A=62500;
	sei();
	while (1)
	{
	}
}
ISR(TIMER1_COMPA_vect){
	PINB=(1<<PINB5);
}
