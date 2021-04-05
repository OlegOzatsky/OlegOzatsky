#include <iostream>
using namespace std;

int getValue()
{
    while (true)
    {
        int i;
        cin >> i;
        if ((cin.fail()) || (i <= 0))
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(11111, '\n');
                cout << "This is a number. \n";
            }
            else
            {
                cout << "This number should be bigger than 0 \n";
            }
        }
        else
        {
            cin.ignore(11111, '\n');
            return i;
        }
    }
}

double getElement()
{
    while (true)
    {
        double i;
        cin >> i;
        if (cin.fail())
        {
                cin.clear();
                cin.ignore(11111, '\n');
                cout << "This is a number. \n";
        }
        else
        {
            cin.ignore(11111, '\n');
            return i;
        }
    }
}

int main()
{   
    cout << "Enter the number of rows" << endl;
    int i = getValue();
    cout << "Enter the number of columns" << endl;
    int j = getValue();
    cout << "Enter the matrix: " << endl;

    double** matrix = new double* [i];
    for (int n = 0; n < i; n++)
    {
        matrix[n] = new double[j];
    }

    for (int n = 0; n < i; n++)
    {
        for (int m = 0; m < j; m++)
        {
            matrix[n][m] = getElement();
            cout << " ";
        }
        cout << endl;
    }

    cout << "Enter the multiplier: ";
    double multiplier = getElement();
    cout << "Result is: " << endl;

    for (int n = 0; n < i; n++)
    {
        for (int m = 0; m < j; m++)
        {
            cout << matrix[n][m] * multiplier << " ";
        }
        cout << endl;
    }

    for (int n = 0; n < i; n++)
    {
        delete[] matrix[n];
    }
    delete[] matrix;
    return 0;
}

