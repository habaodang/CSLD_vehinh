#include <iostream>
using namespace std;




int main()
{
	int n;
	cout << "nhap so dinh: ";
	cin >> n;
	for (int i = n - 1; i >= 0; i--)
	{
		if (i == 0)
		{
			for (int k = 0; k < n; k++)
				cout << char(65 + k) << " ";
			break;
		}
		for (int j = 0; j < 2 * (n - 1); j++)
		{
			if (j == i || j == (2 * (n - 1) - i))
				cout << char(65+i);
			else
				cout << " ";
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			for (int k = 0; k < n; k++)
				cout << "*";
			break;
		}
		for (int j = 0; j < n; j++)
		{
			if (j == 0 || j == i)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}

	return 0;
}