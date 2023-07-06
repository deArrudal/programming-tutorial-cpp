#include <iostream>

using namespace std;

int main()
{
    string characterName = "Tom";
    int characterAge = 65;

    cout << "There once was a man named " << characterName << endl;
    cout << "He was " << characterAge << " year old" << endl;

    characterName = "Michael";
    characterAge = 25;

    cout << "He liked the name " << characterName << endl;
    cout << "But did not like being " << characterAge << endl;

    return 0;
}