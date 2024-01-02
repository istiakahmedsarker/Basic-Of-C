#include <bits/stdc++.h>
using namespace std;

int main()
{
    // long x =15;
    // long long x =20000000000000;

    // float x = 5.6;
    // float y = 5;

    // string s = "Hey bro";
    // string str;
    // char ch = 'g;
    // getline(cin,str);

    int age;
    cin >> age;

    if (age >= 18)
    {
        cout << "You are an adult";
        if(age <= 15){
            cout << "You can't  drive";
        }
    }
    else
    {
        cout << "You are not an adult";
    }
}