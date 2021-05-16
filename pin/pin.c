/**
 * @file pin.c
 * @brief Biblioteka za upravljanje pinovima
 * @author Milica Panic
 * @date 05-16-2021
 * @version 1.0
 */

#include "pin.h"
/******************************************************************************************/
void pinPulse(unsigned char port, unsigned char pin, unsigned long period)
{
    // Poluperioda u kojoj pin ima visoku vrednost
    pinSetValue(port, pin, HIGH);
    timer0DelayMs(period/2);

    // Poluperioda u kojoj pin ima nisku vrednost
    pinSetValue(port, pin, LOW);
    timer0DelayMs(period/2);
}

/******************************************************************************************/

void pinSetValue(unsigned char port, unsigned char pin, unsigned char value)
{
    // Postavljanje vrednosti pina
    switch(port)
    {
    case PORT_B:
        if (value == HIGH)
            PORTB |= 1 << pin;
        else
            PORTB &= ~(1 << pin);
        break;
    case PORT_C:
        if (value == HIGH)
            PORTC |= 1 << pin;
        else
            PORTC &= ~(1 << pin);
        break;
    case PORT_D:
        if (value == HIGH)
            PORTD |= 1 << pin;
        else
            PORTD &= ~(1 << pin);
        break;
    default:
        break;
    }
}

/******************************************************************************************/

void pinInit(unsigned char port, unsigned char pin, unsigned char direction)
{
    // Inicijalizacija smera pina
    switch(port)
    {
    case PORT_B:
        if (direction == OUTPUT)
            DDRB |= 1 << pin;
        else
            DDRB &= ~(1 << pin);
        break;
    case PORT_C:
        if (direction == OUTPUT)
            DDRC |= 1 << pin;
        else
            DDRC &= ~(1 << pin);
        break;
    case PORT_D:
        if (direction == OUTPUT)
            DDRD |= 1 << pin;
        else
            DDRD &= ~(1 << pin);
        break;
    default:
        break;
    }

}

/******************************************************************************************/

unsigned long timer0Delay_Ms(unsigned long delay_length)
{
    unsigned long t0; // Trenutak pocevsi od kog se racuna pauza

    // Implementacija pauze
    t0 = ms;
    while ((ms - t0) < delay_length)
    ;  // Pauza delay_length milisekundi

    return ms;
}

/******************************************************************************************/

void timer0InteruptInit()
{
    // Inicijalizacija tajmera 0 tako da perioda prekida bude 1ms
    TCCR0A = 0x02;
    TCCR0B = 0x03;
    OCR0A = 249;
    TIMSK0 = 0x02;

    // Podesavanje globalne dozvole prekida
    sei();
}

/******************************************************************************************/

/**
 * ISR - prekidna rutina tajmera 0 u modu CTC
 */
ISR(TIMER0_COMPA_vect)
{
    // Inkrementovanje broja milisekundi koje su prosle od pokretanja aplikacije
    ms++;
}

