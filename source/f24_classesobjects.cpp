#include <iostream>

using namespace std;

// A class is the template of a data type.
class Book
{
public:
    string title;
    string author;
    int pages;
};

int main()
{
    // An object is an instance of a class, the actual data.
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;

    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Tolkien";
    book2.pages = 720;

    cout << book1.title << endl;
    cout << book2.title << endl;
    
    book2.title = "Hunger Games";
    cout << book2.title << endl;

    return 0;
}