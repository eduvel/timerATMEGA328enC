/*
 * TimerEnCmodoNormalPolling.c
 *
 * Created: 04/11/2020 11:45:39
 * Author : Velazquez Eduardo
 */ 

#include <avr/io.h>
int main(void)
{
	DDRB=(1<<DDB5);
	TCCR1A=0;
	TCCR1B=(1<<CS12);
	TCCR1C=0;
	TIMSK1=0;
	TCNT1=3036;
	while (1)
	{
		if(TIFR1&(1<<TOV1)){
			PINB=(1<<PINB5);
			TIFR1|=(1<<TOV1);
			TCNT1=3036;
		}
	}
}

