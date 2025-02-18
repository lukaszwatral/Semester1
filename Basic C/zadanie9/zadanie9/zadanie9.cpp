//1. Napisz funkcję, która na wejściu przyjmie wskaźnik na tablicęliczb typu int oraz rozmiar tej tablicy
//Funkcja ma znaleźć największą liczbę w tablicy i ją zwrócić.
//2.W funkcji main pytamy użytkownika o rozmiar tablicy.
//3.Rezerwujemy pamięć na tablicę int'ów o podanym rozmiarze
//4. Prosimy użytkownika o podanie liczb, które zapisujemy do tablicy
//5. Wywołujemy funkcję stworzoną w kroku pierwszym
//6. Wypisujemy liczbę, którą zwróciła funkcja.

#include <iostream>
#include <stdlib.h>

int maxWartoscTablicy(int *Tablica, int rozmiarTablicy)
{
	int maxWartosc = -2147483648;
	for (int i = 0; i < rozmiarTablicy; i++)
	{
		if (*(Tablica + i)>=maxWartosc)
		{
			maxWartosc = *(Tablica + i);
		}
	}
	return maxWartosc;
}

int main()
{
	int rozmiarTablicy;
	int liczba;
	printf("Podaj rozmiar tablicy: ");
	scanf_s("%d", &rozmiarTablicy);
	int *Tablica = (int*)malloc(sizeof(int) * rozmiarTablicy);
	if (Tablica == NULL)
	{
		printf("Brak pamieci");
	}
	else
	{
		for (int i = 0; i < rozmiarTablicy; i++)
		{
			printf("Podaj %d. liczbe: ", i + 1);
			scanf_s("%d", &liczba);
			*(Tablica + i) = liczba;
		}
		printf("Najwieksza podana liczba: %d", maxWartoscTablicy(Tablica, rozmiarTablicy));
		free(Tablica);
	}
}
