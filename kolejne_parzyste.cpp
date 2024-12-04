/******************************************************************************

Kolejne parzyste
Mając dana sumę dwóch kolejnych liczb parzystych oblicz wartość mniejszej liczby.
Wejście
Na wejściu zostanie podana liczba naturalna S (0 < S < 2000000000).
Wyjście:
Na wyjściu powinna być wypisana jedna parzysta liczba naturalna będąca mniejszą ze
składników.
Przykład
Wejście
14
Wyjście
6
Data:04.12.2024

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int liczba;
    cin>>liczba;
    liczba=liczba/2;
    liczba=liczba-1;
    cout << liczba;

}