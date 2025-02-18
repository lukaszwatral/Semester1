#include <stdio.h>
#include <stdlib.h>

int main()
{
	int rozmiartablicy;
	printf("Podaj rozmiar tablicy: ");
	scanf_s("%d", &rozmiartablicy);
	int* tablica = (int*)malloc(sizeof(int) * rozmiartablicy);
	//if (tablica == NULL) {
	//	printf("Brak pamieci");
	//}
	//else {
		for (int i = 0; i < rozmiartablicy; i++)
		{
			int liczba;
			printf("Podaj %d. liczbe: ", i + 1);
			scanf_s("%d", &liczba);
			*(tablica + i) = liczba;
			//printf("%p \n", tablica+i);
		}
		printf("Elementy tablicy:\n");
		for (int i = 0; i < rozmiartablicy; i++)
		{
			printf("%d \n", *(tablica + i));
		}
		printf("Adres pierwszego elementu tablicy: %p\n", tablica);
		printf("Adres ostatniego elementu tablicy: %p", (tablica + (rozmiartablicy - 1)));
		free(tablica);
//	}
}
