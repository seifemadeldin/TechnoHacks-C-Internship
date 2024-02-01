#include <bits/stdc++.h>
using namespace std;

int toDecimal(int binary) {
    int decimal = 0, i = 0, remainder;
    while (binary != 0) {
        remainder = binary % 10;
        binary /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }

    return decimal;
}

long long toBinary(int decimal) {
    long long binary = 0;
    int remainder, i = 1;
    while (decimal != 0) {
        remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * i;
        i *= 10;
    }

    return binary;
}

int main() {
    char num;
    bool running = true;
    while (running) {
        cout << "Choose conversion type:\n  1. Binary to Decimal 2. Decimal to Binary" << endl;
        cout << "Enter 1 or 2: ";
        cin >> num;
        switch (num) {
            case '1': {
                int binary;
                cout << "Enter binary number: ";
                cin >> binary;
                cout << "Decimal = " << toDecimal(binary);
                running = false;
                break;
            }
            case '2': {
                int decimal;
                cout << "Enter decimal number: ";
                cin >> decimal;
                cout << "Binary = " << toBinary(decimal);
                running = false;
                break;
            }
            default: {
                cout << "Wrong input" << endl;
                break;
            }
        }
    }


    return 0;
}
