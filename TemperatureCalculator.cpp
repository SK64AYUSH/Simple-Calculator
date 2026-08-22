#include <iostream>
using namespace std;

int main() {
    char unit, unit2;
    double temp;

    cout << "******** Temperature Converter ********\n";
    cout << "Enter the Current Unit of Temperature (C/F/K/R): \n";
    cin >> unit2;

    switch (unit2) {
        case 'C':
        case 'c': {
            cout << "Enter the Temperature: \n";
            cin >> temp;
            cout << "Enter the Unit You want to convert to (F/K/R): ";
            cin >> unit;

            switch (unit) {
                case 'F':
                case 'f':
                    temp = (temp * 1.8) + 32;
                    cout << "Temperature in Fahrenheit: " << temp << "\n";
                    break;
                case 'K':
                case 'k':
                    temp = temp + 273.15;
                    cout << "Temperature in Kelvin: " << temp << "\n";
                    break;
                case 'R':
                case 'r':
                    temp = (temp + 273.15) * 1.8;
                    cout << "Temperature in Rankine: " << temp << "\n";
                    break;
                default:
                    cout << "Invalid Input\n";
                    break;
            }
            break;
        }

        case 'F':
        case 'f': {
            cout << "Enter the Temperature: \n";
            cin >> temp;
            cout << "Enter the Unit You want to convert to (C/K/R): ";
            cin >> unit;

            switch (unit) {
                case 'C':
                case 'c':
                    temp = (temp - 32) / 1.8;
                    cout << "Temperature in Celsius: " << temp << "\n";
                    break;
                case 'K':
                case 'k':
                    temp = ((temp - 32) / 1.8) + 273.15;
                    cout << "Temperature in Kelvin: " << temp << "\n";
                    break;
                case 'R':
                case 'r':
                    temp = temp + 459.67; // Fixed formula
                    cout << "Temperature in Rankine: " << temp << "\n";
                    break;
                default:
                    cout << "Invalid Input\n";
                    break;
            }
            break;
        }

        case 'K':
        case 'k': {
            cout << "Enter the Temperature: \n";
            cin >> temp;
            cout << "Enter the Unit You want to convert to (C/F/R): ";
            cin >> unit;

            switch (unit) {
                case 'C':
                case 'c':
                    temp = temp - 273.15;
                    cout << "Temperature in Celsius: " << temp << "\n";
                    break;
                case 'F':
                case 'f':
                    temp = ((temp - 273.15) * 1.8) + 32;
                    cout << "Temperature in Fahrenheit: " << temp << "\n";
                    break;
                case 'R':
                case 'r':
                    temp = temp * 1.8;
                    cout << "Temperature in Rankine: " << temp << "\n";
                    break;
                default:
                    cout << "Invalid Input\n";
                    break;
            }
            break;
        }

        case 'R':
        case 'r': {
            cout << "Enter the Temperature: \n";
            cin >> temp;
            cout << "Enter the Unit You want to convert to (C/F/K): ";
            cin >> unit;

            switch (unit) {
                case 'C':
                case 'c':
                    temp = (temp / 1.8) - 273.15;
                    cout << "Temperature in Celsius: " << temp << "\n";
                    break;
                case 'F':
                case 'f':
                    temp = temp - 459.67; // Fixed formula
                    cout << "Temperature in Fahrenheit: " << temp << "\n";
                    break;
                case 'K':
                case 'k':
                    temp = temp / 1.8;
                    cout << "Temperature in Kelvin: " << temp << "\n";
                    break;
                default:
                    cout << "Invalid Input\n";
                    break;
            }
            break;
        }

        default:
            cout << "Invalid Input\n";
            break;
    }

    return 0;
}