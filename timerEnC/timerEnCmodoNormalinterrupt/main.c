/*
 * timerEnCmodoNormalInterrupt.c
 *
 * Created: 04/11/2020 11:44:51
 * Author : Velazquez Eduardo
 */ 

#include <avr/io.h>
#include <avr/interrupt.h>
int main(void)
{
	DDRB=(1<<DDB5);
	TCCR1A=0;
	TCCR1B=(1<<CS12);
	TCCR1C=0;
	TIMSK1=(1<<TOIE1);
	TCNT1=3036;
	sei();
	while (1)
	{
	}
}

ISR(TIMER1_OVF_vect){
	PINB=(1<<PINB5);
	TCNT1=3036;
}



