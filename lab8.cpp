#include <iostream>
#include <math.h>

using namespace std;

class Myclass
{
public:
    double x;
    double y;

    void getCos()
    {
        cout << "cos z = " << cos(x) * (pow(exp(1), y) + pow(exp(1), -y) / 2) << " - i" << sin(y) * (pow(exp(1), y) - pow(exp(1), -y) / 2);
    }
};

double getValue(char n)
{
    while (true)
    {
        double value;
        cout << "Введите " << n << ": ";
        cin >> value;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << n << " - число. \n";
        }
        else
        {
            cin.ignore(32767, '\n');
            return value;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "RUS");
    Myclass m;
    m.x = getValue('x');
    m.y = getValue('y');
    m.getCos();
    return 0;
}