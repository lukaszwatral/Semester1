//Napisz program w którym będzie tablica na 10 liczb typu float.
//Wypełnij tę tablicę dowolnymi liczbami.Napisz funkcję, która jako parametry będzie przyjmowała adres tej tablicy oraz jej rozmiar.
//Deklaracja funkcji może wyglądać tak : 
//void zapiszTabliceDoPliku(float* tab, int rozmiar)
//Zadaniem tej funkcji jest utworzenie pliku binarnego do zapisu i zapisanie do niego wszystkich liczb z tablicy.
//Nazwa pliku to „dane.bin”.
//Napisz kolejną funkcję, której zadaniem będzie odczytanie pliku „dane.bin”.
//Odczytane dane wypisz na ekranie.Każda liczba musi być wypisana w nowej linii.
//W funkcji main wywołaj najpierw funkcję zapisującą dane do pliku a następnie funkcję odczytującą.
#pragma warning(disable : 4996)

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

const int rozmiar = 10;

void zapiszTabliceDoPliku(float* tablica, int rozmiar)
{
	FILE *fp;
	if ((fp = fopen("dane.bin", "wb")) == NULL)
	{
		printf("Blad: %s", strerror(errno));
	}
	else
	{
		fwrite(tablica, sizeof(float), rozmiar, fp);

		fclose(fp);
	}
}

void odczytajDaneZpliku(float* tablica, int rozmiar)
{
	FILE* fp;
	if ((fp = fopen("dane.bin", "rb")) == NULL)
	{
		printf("Blad: %s", strerror(errno));
	}
	else
	{
		fread(tablica, sizeof(float), rozmiar, fp);

		fclose(fp);
	}
}

int main()
{
	float tablica[rozmiar] = {1.4, 5.23, 3, 24.1, 20, 12.53, 50.43, 10, 9.69, 59};
	float tablica2[rozmiar];
	zapiszTabliceDoPliku(tablica, rozmiar);
	odczytajDaneZpliku(tablica2, rozmiar);
	for (int i = 0; i < 10; i++)
	{
		printf("%f \n", tablica2[i]);
	}


}