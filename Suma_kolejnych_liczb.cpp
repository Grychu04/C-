/******************************************************************************

Suma kolejnych liczb
Mając daną sumę dwóch kolejnych liczb naturalnych oblicz wartość większej liczby.
Wejście:
Na wejściu zostanie podana jedna liczba S będąca sumą kolejnych liczb naturalnych
(S<2000000000).
Wyjście:
Na wyjściu powinna być wypisana jedna liczba naturalna będąca większym ze składników
wchodzących w skład sumy, która została podanej na wejściu.
Przykład
Przykładowe wejście:
15
Przykładowe wyjście:
8
Data:04.12.2024

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float liczba;
    cin>>liczba;
    liczba=liczba/2;
    liczba=liczba+0.5;
    cout <<fixed<<setprecision(0) << liczba;

}