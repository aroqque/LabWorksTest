#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b;

    std::cout << "������� ��� ��������: ";

    if (std::cin >> a >> b)
    {
        std::cout << "������������ ��������: a = " << a << ", b = " << b << std::endl;
        int tmp = a;
        a = b;
        b = tmp;
        std::cout << "����� ��������� � ��������� ����������: a = " << a << ", b = " << b << std::endl;
    }
    else
    {
        std::cout << "������!" << std::endl;
    }
}