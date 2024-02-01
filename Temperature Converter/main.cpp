#include <bits/stdc++.h>
using namespace std;

double toFahrenheit (double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

double toCelsius (double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    char temp;
    bool running = true;
    while (running) {
        cout << "What is the type you want to change to:\n  C- To Celsius      F- To Fahrenheit" << endl;
        cin >> temp;
        temp = tolower(temp);
        double degree;
        switch (temp) {
            case 'c': {
                cout << "Enter fahrenheit degree: ";
                cin >> degree;
                cout << "From " << degree << " F to " << setprecision(4) << toCelsius(degree) << " C";
                running = false;
                break;
            }
            case 'f': {
                cout << "Enter celsius degree: ";
                cin >> degree;
                cout << "From " << degree << " C to " << setprecision(4) << toFahrenheit(degree) << " F";
                running = false;
                break;
            }
            default: {
                cout << "Wrong input!" << endl;
                break;
            }
        }
    }
    return 0;
}
