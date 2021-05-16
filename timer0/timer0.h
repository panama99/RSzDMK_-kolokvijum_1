/**
* @file timer0.h
* @brief Biblioteka koja sadrzi funkcije za precizno merenje vremena pomocu timer0
* @author Milica Panic
* @date 05-16-2021
* @version 1.0
*/
#ifndef TIMER0_H_
#define TIMER0_H_

#include <avr/io.h>
#include <avr/interrupt.h>

/**
 * timer0DelayMs - Funkcija koja implementira pauzu u broju milisekundi koji je prosledjen
 * kao parametar
 * @param delay_length - ulaz tipa unsigned long - Duzina pauze u milisekundama
 * @return Povratna vrednost je tipa unsigned long i ima vrednost broja milisekundi
 * proteklih od pocetka aplikacije do trenutka izlaska iz funkcije
 */
void timer0DelayMs(unsigned long delay_length);

/**
 * timer0InteruptInit - Funkcija koja inicijalizuje timer 0 tako da pravi prekide
 * svake milisekunde
 * @return Nema povratnu vrednost
 */
void timer0InteruptInit();

/**
 * timer0millis - Funkcija koja bezbedno vraca kao povratnu vrednost broj
milisekundi
 * proteklih od pocetka merenja vremena
 * @return Povratna vrednost je tipa uint32_t i ima vrednost broja
milisekundi
 * proteklih od pocetka merenja vremena
 */

uint32_t timer0millis();


#endif /* TIMER0_H_ */
