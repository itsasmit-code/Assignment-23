//Write a c++ program to calculate the square of a number
#include<iostream>
using namespace std;

int main()
{
	int number, square;
	cout << " Enter Number the number : ";
	cin >> number;	
	square = number * number;
	cout << "\nThe Square of the Given " << number << " = " << square;
	return 0;
}