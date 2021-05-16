/**
 * @file	main.c
 * @brief   Fajl koji implementuje glavnu operaciju
 * @author	Milica Panic
 * @date	05-16-2021
 * @version 1.0
 */

#include "../usart/usart.h"
#include "../pin/pin.h"
#include "../timer0/timer0.h"
#include "util.h"

/**
	* Funkcija koja implementuje glavnu operaciju
	* @param - Nema parametara
	* @return Nema povratnu vrednost
	*/
int main()
{

	//inicijalizacija
	usartInit(9600);
	uint16_t *array, array_lenght, mode;

	//glavna petlja
	while(1)
	{
	usartPutString_P(PSTR("Unesite duzinu niza: \r\n"));
	while(!usartAvailable());

    _delay_ms(50);//kasnjenje

	}



	return 0;
}
