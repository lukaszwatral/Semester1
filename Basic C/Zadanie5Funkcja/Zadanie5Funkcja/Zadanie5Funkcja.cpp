#include <stdio.h>

int ktoraCwiartka(float x, float y)
{
    if (x == 0 || y == 0) return 0;
    else if (x > 0 && y > 0) return 1;
    else if (x < 0 && y> 0) return 2;
    else if (x < 0 && y < 0) return 3;
    else if (x > 0 && y < 0) return 4;
}
int main()
{
    float x, y;
    while(1) {
        printf("Podaj wspolrzedna x: ");
        scanf_s("%f", &x);
        printf("Podaj wspolrzedna y: ");
        scanf_s("%f", &y);
        if (ktoraCwiartka(x, y) == 0) printf("Punkt (%f, %f) lezy na osi wspolrzednych\n", x, y);
        else printf("Punkt (%f, %f) lezy w %d. cwiartce\n", x, y, ktoraCwiartka(x, y));
    }
}