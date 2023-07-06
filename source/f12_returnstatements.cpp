#include <iostream>

using namespace std;

double cubeNumber(double num);

int main()
{
    double num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Answer: " << cubeNumber(num);
    return 0;
}

double cubeNumber(double num)
{
    /*
    double result = num * num * num;
    return result;
    */

    return num * num * num;
}