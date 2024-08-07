// find the largest number among three numbers
#include <iostream>
using namespace std;

void findLargest(int a, int b, int c)
{
    if (a > b && b > c)
    {
        cout << a << " is largest.";
    }
    else if (b > a && b > c)
    {
        cout << b << " is largest.";
    }
    else
        cout << c << " is largest.";
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    findLargest(a, b, c);
    return 0;
}