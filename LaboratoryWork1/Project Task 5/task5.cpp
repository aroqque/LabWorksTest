#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;

int main() {
    srand(time(0));
    int number;
    number = rand() % 100 + 1;
    int guess;
    do {
        cout << "Enter a number of your choice between 1-100: ";
        cin >> guess;
        if (guess < number)
            cout << "Sorry, try again, it's smaller than the secret number!" << endl;
        else if (guess > number)
            cout << "Sorry, try again, it's bigger than the secret number!" << endl;
        else
            cout << "The number is correct! Congratulations!" << endl;
    } while (guess != number);
    system("PAUSE");
    return 0;
}