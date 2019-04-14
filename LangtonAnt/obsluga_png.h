/**
* @file obsluga_png.h
* @brief Ten plik naglowkowy zawiera wszystkie definicje obslugujace posredniczenie w tworzeniu plikow png
*
* @author Damian Charkiewicz oraz Jakub Glinka
*
* @date 04.04.2018r.
*/
#ifndef _OBSLUGA_PNG_H
#define _OBSLUGA_PNG_H
/** @brief Funkcja tworzy tablice kwadratowa
*
*   @param roz Rozmiar tablicy roz x roz
*   @return Tablice kwadratowa
*/
int ** make_board(int roz);
/** @brief Funkcja tworzy plik png
*
*   @param file_name Nazwa tworzonego pliku png
*/
void write_png_file(char * file_name);
/** @brief Funkcja przygotowuje strukture do utworzenia pliku png
*
*   @param board Wskaznik na tablice kwadratowa przechowujaca informacje o barwach
*   @param roz Rozmiar tablicy roz x roz
*   @param sekwencja_size Liczba przejsc do wyzerowania sekwencji przejsc
*/
void process_file(int ** board, int roz, int sekwencja_size);

#endif
