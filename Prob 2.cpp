#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	const int prov = 3;
	const int week = 7;
	char z;
    int temperature[prov][week];

    cout << "Enter all temperature for a week of Province A, Province B, and then Province C.\n";

    for (int i = 0; i < prov; ++i)
    {
        for(int a = 0; a < week; ++a)
        {
			if (i == 0) z = 'A';
			else if (i == 1) z = 'B';
			else z = 'C';
            cout << "Province " << z << ", Day " << a + 1 << " : ";
            cin >> temperature[i][a];
        }
    }

    cout << "\nDisplaying Values:\n";

    for (int i = 0; i < prov; ++i)
    {
        for(int a = 0; a < week; ++a)
        {
			if (i == 0) z = 'A';
			else if (i == 1) z = 'B';
			else z = 'C';
            cout << "Province " << z << ", Day " << a + 1 << " = " << temperature[i][a] << endl;
        }
    }

	_getch();
    return 0;
}