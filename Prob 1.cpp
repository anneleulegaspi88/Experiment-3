#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    double numArr[10];
	double smallest = 0; 
	double largest = 0; 
	double sum = 0;

	cout << "Enter 10 integers only!\n\n\n";
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter integer " << i + 1 << ": ";
		cin >> numArr[i];

		smallest = numArr[0];
		largest = numArr[0];	

		if (smallest > numArr[i])
			smallest = numArr[i];

		if (largest < numArr[i])
			largest = numArr[i];

		sum = sum + numArr[i];
	}

	cout << "\nThe SMALLEST value is: " << smallest << endl;
	cout << "The LARGEST value is: " << largest << endl;
	cout << "The TOTAL is: " << sum << endl;
	cout << "The AVERAGE is: " << sum/10 << endl;
	

	_getch();
    return 0;
}