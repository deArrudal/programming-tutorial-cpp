#include <iostream>

using namespace std;

int main()
{
    cout << "Hello ";
    cout << "Giraffe academy" << endl;

    string phrase = "Giraffe academy";
    cout << phrase.length() << endl;
    cout << phrase[0] << endl;
    cout << phrase.find("academy", 0) << endl;
    cout << phrase.substr(8, 3);

    return 0;
}