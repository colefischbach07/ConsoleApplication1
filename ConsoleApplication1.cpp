/*
filename: practice.cpp
programmer: cole fischbach
date:10/3/2025
purpose:
Write a program that asks the user to enter two numbers.
The program should use the conditional operator to determine which number is the smaller and which is the larger.
*/

#include <iostream>
using namespace std;

int main() {
	double num1, num2, smaller, larger;

	// Ask user to enter two numbers
	cout << "Enter the first number: ";
	cin >> num1;
	cout << " Enter the second number: " ;
	cin >> num2;


	// Use the conditional operator to determine the smaller and larger numbers
	smaller = (num1 < num2) ? num1 : num2;
	larger = (num1 > num2) ? num1 : num2 ;

	// Display results
	cout << "The smaller number is: " << smaller << endl;
	cout << "The larger number is: " << larger << endl;



	return 0;
}