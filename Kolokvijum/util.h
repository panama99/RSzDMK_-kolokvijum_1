/**
 * @file	util.h
 * @brief	H fajl koji sadrzi deklaracije funkcija util biblioteke
 * @author	Milica Panic
 * @date	05-16-2021
 * @version 1.0
 */
//Standardna arduino biblioteka
#include <avr/io.h>
//Biblioteka koja omgucava koriscenje funkcije _delay_ms()
#include <util/delay.h>
//Bibliteka koja omogucava pristup podacima u flash memoriji
#include <avr/pgmspace.h>
//Standardna C biblioteka
#include <stdio.h>
//Pristup statickoj usart biblioteci
#include "../usart/usart.h"
//Biblioteka koja sadrži definicije standardnih oznacenih i neoznacenih tipova podataka
#include <stdint.h>

//Makro za definisanje sortiranja od najveceg do najmanjeg elementa
#define UP 1
///Makro za definisanje sortiranja od najmanjeg do najveceg
#define DOWN 0
///Makro za definisanje vrednosti 1
#define TRUE 1
///Makro za definisanje vrednosti 0
#define FALSE 0

#ifndef UTIL_H_
#define UTIL_H_

/**
 * Sort - Funkcija koja implementira sortiranje niza array na nacin odabran parametrom mode.
 * @param array - ulaz tipa int16_t - pokazivac na niz
 * @param array_length - ulaz tipa int16_t - duzina niza
 * @param mode - ulaz tipa int8_t - nacin sortiranja
 * @return - Nema povratne vrednosti
 */
void Sort(int16_t *array, int16_t array_length, int8_t mode);
/**
 * Check - Funkcija koja implementira proveru da li je uneti niz geometrijski
 * @param array - ulaz tipa int16_t - pokazivac na niz
 * @return Povratna vrednost je tipa int8_t
 */
int8_t Check(int16_t *array);


#endif /* UTIL_H_ */
