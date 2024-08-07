#include <iostream>
using namespace std;
string check(char c)
{
    string str = "aeiou";
    for (int i = 0; i < str.length(); i++)
    {
        if (c == str[i])
        {
            return "vovel";
        }
    }
    return "consonant";
}
int main()
{
    char ch;
    cin >> ch;
    cout << check(ch);
}