// C++ - Easy

// Hello developers , copy the below function to convert a tempreture form Celsius to fahrenheit 

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}


// below is the complete program for the same conversion

#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    // Prompt the user for input
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Display the result
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

    return 0;
}


//happy hacki



// TODO:  Create a Basic C++ Program to Convert Temperature from Celsius to Fahrenheit
