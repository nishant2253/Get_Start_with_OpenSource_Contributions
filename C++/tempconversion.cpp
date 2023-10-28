#include <iostream>
using namespace std;

int main() {
    int choosemenu;
    double temperature, convertedTemperature;

    do {
        cout << "Temperature Conversion Menu:" << endl;
        cout << "1. Celsius to Fahrenheit" << endl;
        cout << "2. Fahrenheit to Celsius" << endl;
        cout << "3. Celsius to Kelvin" << endl;
        cout << "4. Kelvin to Celsius" << endl;
        cout << "5. Fahrenheit to Kelvin" << endl;
        cout << "6. Kelvin to Fahrenheit" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choosemenu;

        switch (choice) {
            case 1:
                cout << " Celsius: ";
                cin >> temperature;
                convertedTemperature = (temperature * 9 / 5) + 32;
                cout << "Temperature in Fahrenheit: " << convertedTemperature << endl;
                break;
            case 2:
                cout << "Fahrenheit: ";
                cin >> temperature;
                convertedTemperature = (temperature - 32) * 5 / 9;
                cout << "Temperature in Celsius: " << convertedTemperature << endl;
                break;
            case 3:
                cout << "Celsius: ";
                cin >> temperature;
                convertedTemperature = temperature + 273.15;
                cout << "Temperature in Kelvin: " << convertedTemperature << endl;
                break;
            case 4:
                cout << " Kelvin: ";
                cin >> temperature;
                convertedTemperature = temperature - 273.15;
                cout << "Temperature in Celsius: " << convertedTemperature << endl;
                break;
            case 5:
                cout << "Fahrenheit: ";
                cin >> temperature;
                convertedTemperature = (temperature - 32) * 5 / 9 + 273.15;
                cout << "Temperature in Kelvin: " << convertedTemperature << endl;
                break;
            case 6:
                cout << "Kelvin: ";
                cin >> temperature;
                convertedTemperature = (temperature - 273.15) * 9 / 5 + 32;
                cout << "Temperature in Fahrenheit: " << convertedTemperature << endl;
                break;
            case 7:
                cout << "Exiting the program" << endl;
                break;
            default:
                cout << "Please enter a valid option." << endl;
        }
    } while (choice != 7);

    return 0;
}
