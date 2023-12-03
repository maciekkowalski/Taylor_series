#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define liczba_iteracji 100

double szereg(double x){
    double wynik = 1;
    double suma = 0;
    int i;
    for ( i = 0; i <= liczba_iteracji; i ++){

        suma += wynik;

        wynik = (-wynik*(2*i+3)*x)/(2*i+2);
        // ustalamy zależność pomiędzy kolejnymi wyrazami szeregu

    }
    return suma;
}

int main()
{
    double a, b, krok, x;
    int przedzial, p=0;
    printf("Poczatek przedzialu: \n");
    scanf("%lf", &a);
    printf("Koniec przedzialu: \n");
    scanf("%lf", &b);


    if(a < -1 || b > 1) // ustalamy przedział
    {

        printf("Poza zakresem");
        return 0;
    }
    printf("Podaj ilosc podprzedzialow \n"); // ustalamy ilość podprzedziałów
    scanf("%d", &przedzial);
    krok = (b - a) / przedzial;
    printf("Krok to %lf \n", krok);
    for (x = a; x <= b; x += krok)
    {
        double funkcja = pow((1 + x), -3. / 2);
        printf("x=%.3lf f(x)=%.3lf szereg=%.3lf\n", x, funkcja, szereg(x));
        // wartości funkcji i szeregu nie są zgodne, niestety nie widzę z jakiego powodu

    }
}
