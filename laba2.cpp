/*
Author: Ozatsky Oleg
Group: sbs-002-o-01 / 2
Task: 2.9
Description:Написать программу для вычисления произведения....Верхняя граница произведения вводится пользователем с клавиатуры.
*/
#include <iostream>
#include <cmath>

using namespace std;

double getValue()
{
	while (true)
	{
		double n;
		cout << "Enter the upper bound: ";
		cin >> n;
		if ((cin.fail()) || !(n > 0))
		{
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(1111, '\n');
				cout << "\nYou entered not a number" << endl;
			}
			else
			{
				cout << "n is greater than 0" << endl;
			}
		}
		else
		{
			cin.ignore(1111, '\n');
			return n;
		}
	}
}

int main()
{
	double n = getValue();
	double composition = 1;

	for (int k = 0; k < n; k++)
	{
		composition *= 1 + pow(0.5, 2 * n);
	}
	cout << "composition equals: " << composition;
	return 0;
}
