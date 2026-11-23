#include <iostream>
using namespace std;
int main()
{
    int numerator, denominator;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try
    {
        if (denominator == 0)
        {
            throw denominator;
        }

        cout << "Result = "
             << numerator / denominator << endl;
    }
    catch (int error)
    {
        cout << "Exception caught: Division by zero is not allowed!"
             << endl;
    }

    cout << "Program executed successfully." << endl;

    return 0;
}