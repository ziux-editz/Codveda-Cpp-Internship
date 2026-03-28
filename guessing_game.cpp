#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number, guess;

    srand(time(0));
    number = rand() % 100 + 1;

    do {
        cout << "Guess a number (1-100): ";
        cin >> guess;

        if(guess > number)
            cout << "Too high!\n";
        else if(guess < number)
            cout << "Too low!\n";
        else
            cout << "Correct! You guessed it 🎉\n";

    } while(guess != number);

    return 0;
}