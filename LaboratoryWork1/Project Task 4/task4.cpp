#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b;

    std::cout << "Введите два значения: ";

    if (std::cin >> a >> b)
    {
        std::cout << "Оригинальные значения: a = " << a << ", b = " << b << std::endl;
        int tmp = a;
        a = b;
        b = tmp;
        std::cout << "После изменения с временной переменной: a = " << a << ", b = " << b << std::endl;
    }
    else
    {
        std::cout << "Ошибка!" << std::endl;
    }
}