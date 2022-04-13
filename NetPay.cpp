//This program is designed to take input from a user and calculate the net pay from user input.
#include <iostream>
using namespace std;

int main()
{
	double Hourlywage = 0;
	int Hoursworked = 0;
	double Withholding = 0;
	double GrossPay = Hoursworked * Hourlywage;
	double NetPay = Withholding / 100 * GrossPay;
    cout << "Enter your hourly wage: \n"; 
	cin >> Hourlywage;
	cout << "Enter the amount of hours you worked: \n";
	cin >> Hoursworked;
	cout << "Enter a withholding percentage: \n";
	cin >> Withholding;
	cout << "Your net pay for the week is: \n" << (NetPay) << endl;

	return NetPay;
}

