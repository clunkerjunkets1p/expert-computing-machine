#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int num = rand() % 100 + 1, guess;
    cout << "Guess a number (1–100): ";
    do {
        cin >> guess;
        if (guess < num) cout << "Too low! Try again: ";
        else if (guess > num) cout << "Too high! Try again: ";
    } while (guess != num);
    cout << "🎉 Correct! It was " << num << ".\n";
}
