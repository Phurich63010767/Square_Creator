#include<iostream>
using namespace std;

int main()
{
	int x;
	int i = 0;
	int	a = 0;
	int t = 0;
	int e = 0;
	cout << "Enter Number: ";
	cin >> x;
	cout << endl;
	while (i < x)
	{
		cout << "*";
		i++;
	}
	cout << endl;
	while (a < (x - 2))
	{
		while (t < (x - 2))
		{
			a = 0;
			cout << "*";
			while (a < (x - 2))
			{
				cout << " ";
				a++;
			}
			cout << "*" << endl;
			t++;
		}
	}
	while (e < x)
	{
		if (x == 1)
		{
			goto END;
		}
		else
		{
			cout << "*";
			e++;
		}
	}
	END:
	cout << endl;
    system("pause");
	return 0;
}