#include <bits/stdc++.h>
using namespace std;

int rollDice() {
    return rand() % 6 + 1;
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    cout << "Rolling pair of dice:" << endl;
    cout << "Dice 1: " << rollDice() << endl;
    cout << "Dice 2: " << rollDice() << endl;

    return 0;
}
