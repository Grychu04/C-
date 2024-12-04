/******************************************************************************

Prostokąt
Napisz program, który wczyta ze standardowego strumienia wejściowego długości boków
prostokąta, a następnie wypisze jego pole powierzchni.
Wejście
Na wejściu pojawią się dwie liczby naturalne a, b (0 < 𝑎, 𝑏 ≤ 100).
Wyjście
Na wyjściu ma być wypisana jedna liczba będącej polem prostokąta o bokach podanych na wejściu.
Przykład
Przykładowe wejście
4 5
Przykładowe wyjście
20
Data:04.12.2024

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int bok_a,bok_b;
    cin>>bok_a>>bok_b;
    cout <<bok_a*bok_b ;
}