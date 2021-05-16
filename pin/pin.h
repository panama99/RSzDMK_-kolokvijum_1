/**
 * @file pin.h
 * @brief Biblioteka za upravljanje pinovima
 * @author Milica Panic
 * @date 05-16-2021
 * @version 1.0
 */
#include <avr/io.h>
#include <avr/interrupt.h>

/// Makro za podesavanje visoke vrednosti signala na pinu
#define HIGH 1
/// Makro za podesavanje niske vrednosti signala na pinu
#define LOW 0
/// Makro za podesavanje izlaznog smera pina
#define OUTPUT 1
/// Makro za podesavanje ulaznog smera pina
#define INPUT 0
/// Makro za selektovanje porta B
#define PORT_B 0
/// Makro za selektovanje porta C
#define PORT_C 1
/// Makro za selektovanje porta D
#define PORT_D 2
/// Makro za selektovanje pina na koji je povezana dioda
#define DIODE_PIN 5
/// Promenljiva koja skladisti broj milisekundi proteklih od pokretanja aplikacije
volatile unsigned long ms = 0;

/**
 * pinPulse - Funkcija koja implementiran podizanje i spustanje vrednosti na pinu
 * odgovarajucom brzinom
 * @param port - ulaz tipa unsigned char - Port na kojem je potrebno implementirati funkcionalnost
 * @param pin - ulaz tipa unsigned char - Pin na kojem je potrebno implementirati funkcionalnost
 * @param period - ulaz tipa unsigned long - Perioda promene vrednosti na pinu
 * @return Nema povratnu vrednost
 */
void pinPulse(unsigned char port, unsigned char pin, unsigned long period);

/**
 * pinSetValue - Funkcija koja postavlja vrednost na pinu
 * @param port - ulaz tipa unsigned char - Port na kojem je pin ciju vrednost potrebno postaviti
 * @param pin - ulaz tipa unsigned char - Pin ciju je vrednost potrebno postaviti
 * @param value - ulaz tipa unsigned char - Vrednost koju je potrebno postaviti na pin
 * @return Nema povratnu vrednost
 */
void pinSetValue(unsigned char port, unsigned char pin, unsigned char value);

/**
 * pinInit - Funkcija koja implementiran inicijalizaciju pina
 * @param port - ulaz tipa unsigned char - Port na kojem je pin koji je potrebno inicijalizovati
 * @param pin - ulaz tipa unsigned char - Pin koji je potrebno inicijalizovati
 * @param direction - ulaz tipa unsigned char - Smer prema kojem je potrebno inicijalizovati pin
 * @return Nema povratnu vrednost
 */
void pinInit(unsigned char port, unsigned char pin, unsigned char direction);

/**
 * timer0DelayMs - Funkcija koja implementira pauzu u broju milisekundi koji je prosledjen
 * kao parametar
 * @param delay_length - ulaz tipa unsigned long - Duzina pauze u milisekundama
 * @return Povratna vrednost je tipa unsigned long i ima vrednost broja milisekundi
 * proteklih od pocetka aplikacije do trenutka izlaska iz funkcije
 */
unsigned long timer0Delay_Ms(unsigned long delay_length);

/**
 * timer0InteruptInit - Funkcija koja inicijalizuje timer 0 tako da pravi prekide
 * svake milisekunde
 * @return Nema povratnu vrednost
 */
void timer0InteruptInit();
