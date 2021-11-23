#include<iostream>

using namespace std;

class Complex
{
public:
    int a, b;
    void input(string s)
    {
        int v1 = 0;
        int i = 0;
        while (s[i] != '+')
        {
            v1 = v1 * 10 + s[i] - '0';
            i++;
        }
        while (s[i] == ' ' || s[i] == '+' || s[i] == 'i')
        {
            i++;
        }
        int v2 = 0;
        while (i < s.length())
        {
            v2 = v2 * 10 + s[i] - '0';
            i++;
        }
        a = v1;
        b = v2;
    }
};

//My Solution

//Overload operators + for the class complex
Complex operator+ (Complex x, Complex y) {
    //add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
    Complex Z;
    Z.a = (x.a + y.a);
    Z.b = (x.b + y.b);
    return Z;
}
//Overload operators << for the class complex

ostream& operator<<(ostream& out, Complex& C) {
    return out << C.a << "+i" << C.b << endl;     //<< should print a complex number in the format "a+ib"
}

//End

int main()
{
    Complex x, y;
    string s1, s2;
    cin >> s1;
    cin >> s2;
    x.input(s1);
    y.input(s2);
    Complex z = x + y;
    cout << z << endl;
}
