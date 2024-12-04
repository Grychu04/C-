/******************************************************************************

https://szkopul.edu.pl/problemset/problem/92jOoxYQmJYe2BsRCxnW1CFQ/site/?key=statement
Data:04.12.2024

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int godziny,minuty,sekundy;
    godziny=0;
    minuty=0;
    cin>>sekundy;
    minuty=sekundy/60;
    sekundy= sekundy%60;
    godziny=minuty/60;
    minuty=minuty%60;
    cout << godziny<<"g"<<minuty<<"m"<<sekundy<<"s";

}