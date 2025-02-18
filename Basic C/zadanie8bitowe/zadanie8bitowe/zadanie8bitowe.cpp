//Napisz funkcję, która będzie przyjmowała jako parametr liczbę typu int i zwracała wskaźnik na tablice znaków(char*)
//Zadaniem funkcji jest konwersja liczby dziesiętnej na binarną.
//Poszczególne liczby powinny być zapisane w tablicy znaków jako znaki ’0’ lub ’1’.
//Tablica powinna mieć długość 32 znaków.
//Napisz program który będzie konwertował podaną przez użytkownika liczbędziesiętną na binarną z wykorzystaniem napisanej funkcji.
//Po wywołaniu funkcji należy wypisać 32 znaki zwrócone przez funkcję.

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#define N 32

char* decToBin(int liczba)
{
    char* binarna;
    binarna = (char*)malloc(sizeof(char) * N);
    if (binarna == NULL)
    {
        printf("Brak pamieci");
    }
    else
    {
        for (int i = N-1; i >= 0; i--)
        {
            if (liczba & 1)
            {
                binarna[i] = '1';
            }
            else
            {
                binarna[i] = '0';
            }
            liczba >>= 1;
        }
    }
    return binarna;
}

int main()
{
    int liczba;
    char* numerbin;
    printf("Podaj liczbe: ");
    scanf_s("%d", &liczba);
    numerbin = decToBin(liczba);
    printf("Liczba %d binarnie: ", liczba);
   for (int i = 0; i < N;i++)
   {
       printf("%c", numerbin[i]);
   }
    free(numerbin);
}