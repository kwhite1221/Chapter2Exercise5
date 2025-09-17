/*
Project Name: Chapter 2 Exercise 5 Average of Values
File Name: Chapter2Exercise5.cpp
Programmer: Kristen White
Date: 9/17/25
Requirements:
Get the average of a series of five different values.
*/
// This program calculates the average of five values.

#include <iostream> // we will always need this library for writing
// to the console and reading from the keyboard.
using namespace std; // We use this so we can simplify commands

int main()
{
    double value1, value2, value3, value4, value5; // The values we average
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

    return 0; //It is best to have a return statement if the module is defined as returning a value.

}