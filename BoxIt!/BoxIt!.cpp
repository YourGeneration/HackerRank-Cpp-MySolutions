#include <iostream>

using namespace std;

//My Solution

class Box {          //Implement the class Box  
private:
    int l;          //l,b,h are integers representing the dimensions of the box
    int b;
    int h;

public:

    // Constructors:
    Box() {
        l = 0;
        b = 0;
        h = 0;
    }
    Box(int length, int breadth, int height) {
        l = length;
        b = breadth;
        h = height;
    }
    Box(Box& B) {
        l = B.getLength();
        h = B.getHeight();
        b = B.getBreadth();
    }

    int getLength(); // Return box's length
    int getBreadth(); // Return box's breadth
    int getHeight();  //Return box's height
    long long CalculateVolume(); // Return the volume of the box
    bool operator<(Box& B);  //Overload operator < as specified
    friend ostream& operator<<(ostream& out, Box& B);


};

bool Box::operator<(Box& B) {
    if (l < B.l) {
        return true;
    }
    else if (b < B.b && l == B.l) {
        return true;
    }
    else if (h < B.h && b == B.b && l == B.l) {
        return true;
    }
    else {
        return false;
    }
}

int Box::getLength() {
    return l;
}
int Box::getBreadth() {
    return b;
}
int Box::getHeight() {
    return h;
}
long long Box::CalculateVolume() {
    return (long long)l * b * h;
}

//Overload operator << as specified
ostream& operator<<(ostream& out, Box& B) {
    return out << B.l << " " << B.b << " " << B.h;
}

//End


void check2()
{
	int n;
	cin >> n;
	Box temp;
	for (int i = 0; i < n; i++)
	{
		int type;
		cin >> type;
		if (type == 1)
		{
			cout << temp << endl;
		}
		if (type == 2)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			temp = NewBox;
			cout << temp << endl;
		}
		if (type == 3)
		{
			int l, b, h;
			cin >> l >> b >> h;
			Box NewBox(l, b, h);
			if (NewBox < temp)
			{
				cout << "Lesser\n";
			}
			else
			{
				cout << "Greater\n";
			}
		}
		if (type == 4)
		{
			cout << temp.CalculateVolume() << endl;
		}
		if (type == 5)
		{
			Box NewBox(temp);
			cout << NewBox << endl;
		}

	}
}

int main()
{
	check2();
}