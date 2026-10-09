#include <iostream>
using namespace std;

class Book
{
    int bookId;
    string title;
    float price;

public:
    // Parameterized constructor
    Book(int id, string t, float p)
    {
        bookId = id;
        title = t;
        price = p;
        cout << "Parameterized Constructor Called" << endl;
    }

    // Copy constructor
    Book(const Book &b)
    {
        bookId = b.bookId;
        title = b.title;
        price = b.price;
        cout << "Copy Constructor Called" << endl;
    }

    void display()
    {
        cout << "Book ID: " << bookId << endl;
        cout << "Book Title: " << title << endl;
        cout << "Book Price: " << price << endl;
    }

    // Destructor
    ~Book()
    {
        cout << "Destructor Called for " << title << endl;
    }
};

int main()
{
    Book b1(101, "C++ Programming", 450);

    cout << "\nOriginal Book Details:" << endl;
    b1.display();

    Book b2(b1);

    cout << "\nCopied Book Details:" << endl;
    b2.display();

    return 0;
}
