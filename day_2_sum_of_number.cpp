// Assignment 3 -> Create a function that will return the sum of 3 numbers
#include <iostream>
using namespace std;
int getSum(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << getSum(a, b, c);
    return 0;
}