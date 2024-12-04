/******************************************************************************

Celsjusz na Fahrenheit
Napisz funkcję, która zamienia temperaturę w podaną w stopniach Celsjusz na stopnie Fahrenheita.
Napisz program, który wczyta temperaturę podaną w stopniach Celsjusza wywoła funkcję zamiany
i wypisze na ekranie temperaturę w stopniach Fahrenheita z dokładnością do jednego miejsca po
przecinku.
Wejście
Na wejściu podana jest jedna liczba rzeczywista 𝐶 (−100 ≤ 𝐶 ≤ 100) oznaczająca temperatura
w stopniach Celsjusza.
Wyjście
Podana na wejściu temperatura zamieniona na stopnie Fahrenheita
Przykład
Przykładowe wejście
7
Przykładowe wyjście
44.6
Dara:04.12.2024

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std; 
int main()
{
    float stopnie_celsjusza, stopnie_farenchajta;
    cin >> stopnie_celsjusza;
    stopnie_farenchajta = stopnie_celsjusza * 9 / 5 + 32;
    cout<<fixed<<setprecision(1) << stopnie_farenchajta;
    
}