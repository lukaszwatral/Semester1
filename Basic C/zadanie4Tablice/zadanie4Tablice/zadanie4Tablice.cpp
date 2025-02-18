#include <stdio.h>

int main()
{
#define N 10

	int tablica[N];
	int liczba;
	int n = 0;
	printf("Podaj 10 liczb:\n");
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &liczba);
		tablica[i] = liczba;
	}
	printf("Podaj szukana liczbe: ");
	scanf_s("%d", &liczba);
	for (int i = 0; i < N; i++)
	{
		if (liczba == tablica[i]) n++;
	}
	printf("Liczba %d wystapila %d razy", liczba, n);
}