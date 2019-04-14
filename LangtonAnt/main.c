#include "mrowka.h"
#include "obsluga_png.h"

/** @brief Funkcja main pobierajaca dane oraz obslugujaca sumylacje mrowki */
int main(int argc, char ** argv) {

    int roz, xstart, ystart, liczbaruchow, sekwencja[100], sekwencja_size, orientacja;
    /*
     *  Wprowadzenie danych
     */
    printf("Prosze podac dlugosc boku kwardratu - pole(0 - domyslna wartosc):");
    scanf("%d", & roz);
    printf("Prosze podac pozycje startowa mrowki x:");
    scanf("%d", & xstart);
    printf("Prosze podac pozycje startowa mrowki y:");
    scanf("%d", & ystart);
    printf("Prosze podac orientacje mrowki(gora-1 prawo-2 dol-3 lewo-4 domyslne-0):");
    scanf("%d", & orientacja);
    printf("Prosze podac liczbe ruchow(0 - domyslna wartosc):");
    scanf("%d", & liczbaruchow);
    printf("Prosze podac sekwencje poruszania oddzielona spacja( Lewo-0 Prawo-1 Koniec-2):");
    sekwencja_size = 0;
    int czytaj;
    while (1) {
      scanf("%d", & czytaj);
      if (czytaj != 2) {
        sekwencja[sekwencja_size] = czytaj;
        sekwencja_size++;
      } else
        break;
    }

    if (roz == 0) roz = 1000;
    if (liczbaruchow == 0) liczbaruchow = RUCH_DEFAULT;

    int * * p = make_board(roz);

    step_ant(p, xstart, ystart, orientacja, liczbaruchow, sekwencja, sekwencja_size, roz);

    process_file(p, roz, sekwencja_size);
    write_png_file("out.png");

    return 0;
  }
