#include <iostream>

using namespace std;

int main()
{
    int age = 19;
    double gpa = 2.7;
    string name = "Mike";

    /*
    cout << &age << endl;
    cout << &gpa << endl;
    cout << &name << endl;
    */

    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;

    cout << pAge << endl;
    cout << *pAge << endl; // dereferencing a pointer

    return 0;
}