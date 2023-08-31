#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main() {
    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;

    char choice;
    cout << "Enter choice (1/2): ";
    cin >> choice;

    double temperature, result;
    char unit;

    if (choice == '1') {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        result = celsiusToFahrenheit(temperature);
        unit = 'F';
    } else if (choice == '2') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        result = fahrenheitToCelsius(temperature);
        unit = 'C';
    } else {
        cout << "Invalid choice" << endl;
        return 1;
    }

    cout << "Converted temperature: " << result << "°" << unit << endl;
    return 0;
}
emperature Converter 