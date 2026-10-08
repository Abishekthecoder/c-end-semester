#include <iostream>
using namespace std;

class Book {
    string title, author;

public:
    Book(string t, string a) {
        title = t;
        author = a;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book b1("Harry Potter", "J.K. Rowling");
    Book b2("The Alchemist", "Paulo Coelho");

    b1.display();
    b2.display();

    return 0;
}
