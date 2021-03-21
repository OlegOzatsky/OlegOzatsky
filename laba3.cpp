//OzatskyOleg lab3.9
#include <iostream>
#include <cmath>

using namespace std;

int getQuantity()
{
    while (true)
    {
        cout << "enter the number of values i: ";
        int i;
        cin >> i;
        if ((cin.fail()) || (i < 2))
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(11111, '\n');
                cout << "i is a number. \n";
            }
            else
            {
                cout << "i >= 2! \n";
            }
        }
        else
        {
            cin.ignore(11111, '\n');
            return i;
        }
    }
}

double getValue()
{
    while (true)
    {
        double i;
        cin >> i;
        if ((cin.fail()) || (i <= 0))
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(32767, '\n');
                cout << "E is a number. \n";
            }
            else
            {
                cout << "E > 0 \n";
            }
        }
        else
        {
            cin.ignore(11111, '\n');
            return i;
        }
    }
}

double getProbability()
{
    while (true)
    {
        double i;
        cin >> i;
        if ((cin.fail()) || ((i >= 1) || (i <= 0)))
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(11111, '\n');
                cout << "P is a number. \n";
            }
            else
            {
                cout << "0 < P < 1. \n";
            }
        }
        else
        {
            cin.ignore(1111, '\n');
            return i;
        }
    }
}

int getMoment()
{
    while (true)
    {
        cout << "enter the moment k: ";
        int i;
        cin >> i;
        if ((cin.fail()) || (i < 0))
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(11111, '\n');
                cout << "k is a number. \n";
            }
            else
            {
                cout << "k !< 0! \n";
            }
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
    int k = getMoment();
    int i = getQuantity();
    double* values = new double[i];

    for (int q = 0; q < i; q++)
    {
        cout << "Value " << q + 1 << ": ";
        values[q] = getValue();
    }

    double* probabilities = new double[i];
    double prob_sum = 0;

    do {
        for (int q = 0; q < i; q++)
        {
            cout << "Probability " << q + 1 << ": ";
            probabilities[q] = getProbability();
            prob_sum += probabilities[q];
        }

        if (prob_sum != 1)
        {
            cout << "the sum of the probabilities is equal to 1 \n";
            prob_sum = 0;
        }
    } while (prob_sum != 1);

    double result = 0;
    for (int q = 0; q < i; q++)
    {
        result += pow(values[q], k) * probabilities[q];
    }

    cout << "Moment of order is equals to : " << result;

    return 0;
}


