#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    long double a;
    cout << "������� A: ";
    cin >> a;
    long double b;
    cout << "������� B: ";
    cin >> b;
    long double c;
    cout << "������� �: ";
    cin >> c;
    long double r;
    long double p = (a + b + c) / 2;
    cout << "������������ = " << p << endl;
    r = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "������� �� ������� ������ = " << r << endl;
    _getch();
    return 0;
}