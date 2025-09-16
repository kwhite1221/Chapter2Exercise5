
// This program calculates the average of five values.

#include <iostream>
using namespace std;

int main()
{
    double value1, value2, value3, value4, value5;
    double sum, average;

    // Get the five values.
    cout << "What is the first value?: ";
    cin >> value1;

    cout << "What is the second value?: ";
    cin >> value2;

    cout << "What is the third value?: ";
    cin >> value3;

    cout << "What is the fourth value?: ";
    cin >> value4;

    cout << "What is the fifth value?: ";
    cin >> value5;

    // Calculate the sum.
    sum = value1 + value2 + value3 + value4 + value5;

    // Calculate the average.
    average = sum / 5;

    //Display average.
    cout << "The average of the values is: " << average << endl;

    return 0;

}