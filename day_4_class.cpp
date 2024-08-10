#include <iostream>
using namespace std;

class Book
{
    string title;
    string author;
    int year;

public:
    Book(string title, string author, int year) : title(title), author(author), year(year) {}
    void display()
    {
        cout << "Book title : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Year : " << year;
    }
};
int main()
{
    string title, author;
    int year;
    getline(cin, title);

    cin >> author >> year;
    Book obj(title, author, year);
    obj.display();
}