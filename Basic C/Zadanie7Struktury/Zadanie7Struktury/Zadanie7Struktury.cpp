//Stwórz strukturę Towar zawierającą nazwę towaru i cenę.
//Utwórz tablicę przechowującą 10 obiektów typu Towar.Napisz program w którym użytkownik wprowadzi dane dla 10 towarów.
//Następnie znajdź wsród towarów ten z najwyższą ceną i wypisz jego nazwę oraz cenę.

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

int main()
{
    struct Towar {
        char nazwaTowaru[30];
        float cena;
    };
    Towar TablicaTowarow[10];
    for (int i = 0; i < 10; i++) {
        printf("Podaj nazwe %d. towaru: ", i + 1);
        scanf_s("%s", &TablicaTowarow[i].nazwaTowaru, 30);
        printf("Podaj cene: ");
        scanf_s("%f", &TablicaTowarow[i].cena);
    }
    float fmax = -2;
    char nazwamax[30];
    for (int i = 0; i < 10;i++) {
        if (TablicaTowarow[i].cena > fmax)
        {
            fmax = TablicaTowarow[i].cena;
            strcpy_s(nazwamax, TablicaTowarow[i].nazwaTowaru);

        }
    }
    printf("Nazwa najdrozszego towaru: %s\nCena: %.2f", nazwamax, fmax);
}
