/**
* @file mrowka.h
* @brief Ten plik naglowkowy zawiera definicje stalych oraz funkcje umozliwiajace wykonanie symulacji przejscia mrowki
*
* @author Damian Charkiewicz oraz Jakub Glinka
*
* @date 04.04.2018r.
*/
#ifndef _MROWKA_H
#define _MROWKA_H

# define UP 1 /** Stala definiujaca zwrot mrowki w gore */
# define RIGHT 2 /** Stala definiujaca zwrot mrowki w prawo */
# define DOWN 3 /** Stala definiujaca zwrot mrowki w dol */
# define LEFT 4 /** Stala definiujaca zwrot mrowki w lewo */
# define RUCH_DEFAULT 100000 /** Stala definiujaca domyslna ilosc ruchow mrowki */
/** @brief Funkcja symulujaca przejscia mrowki
*
*   Funkcja na podstawie podanych danych wykonuje ruch do przodu,
*   nadpisuje kolor pola, na ktorym sie znajduje oraz
*   zmienia kierunek, w ktorym wykona nastepny krok
*
*   @param p Nazwa tworzonego pliku png
*   @param x Polozenie poczatkowe mrowki-x
*   @param y Polozenie poczatkowe mrowki-y
*   @param orient Kierunek, w ktorym mrowka wykona pierwszy ruch
*   @param ruch Liczba ruchow mrowki
*   @param sekwencja[] Tablica sekwensji przejsc
*   @param sekwencja_size Liczba przejsc do wyzerowania sekwencji przejsc
*   @param roz Rozmiar tablicy roz x roz
*/
void step_ant(int **p, int x, int y, int orient, int ruch, int sekwencja[], int sekwencja_size, int roz);

#endif
