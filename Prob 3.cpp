#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

int main()
{
	char array[50];	
	int size;
	
	cout << "Enter a charcter array: "; 
	cin>> array;
	size = 0;
	
	while(array[size] !='\0') size++;
	
	cout << "\nThe reverse order of the array is: ";
	for(int j=size-1;j>=0;j--)
	{
		cout << array[j];
	}

	cout<< "\n\nThe size of the array is: "<< size;
	
	_getch();
	return 0;
}