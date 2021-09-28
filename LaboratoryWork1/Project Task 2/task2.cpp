#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    long double a;
    cout << "Сторона A: ";
    cin >> a;
    long double b;
    cout << "Сторона B: ";
    cin >> b;
    long double c;
    cout << "Сторона С: ";
    cin >> c;
    long double r;
    long double p = (a + b + c) / 2;
    cout << "Полупериметр = " << p << endl;
    r = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Площадь по формуле Герона = " << r << endl;
    _getch();
    return 0;
}