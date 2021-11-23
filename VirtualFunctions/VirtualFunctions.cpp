#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//My Solution

class Person {
protected:
    std::string name;
    int age;
public:
    virtual void getdata() = 0;
    virtual void putdata() = 0;

};

class Professor :public Person {
    int publications;
    int cur_id;
    static int max_cur_id;
public:
    Professor() {
        max_cur_id++;
        cur_id = max_cur_id;
    }
    void getdata() {
        std::cin >> name;
        std::cin >> age;
        std::cin >> publications;

    }
    void putdata() {
        std::cout << name << " " << age << " " << publications << " " << cur_id << std::endl;
    }

};
int Professor::max_cur_id = 0;

class Student :public Person {
    int marks[6];
    int cur_id;
    static int max_cur_id;
public:
    Student() {
        max_cur_id++;
        cur_id = max_cur_id;
    }
    void getdata() {
        std::cin >> name;
        std::cin >> age;
        for (int i = 0; i < 6; i++) {
            std::cin >> marks[i];
        }
    }
    void putdata() {
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += marks[i];
        }
        std::cout << name << " " << age << " " << sum << " " << cur_id << endl;
    }

};
int Student::max_cur_id = 0;

//End

int main() {

    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person* per[n];

    for (int i = 0; i < n; i++) {

        cin >> val;
        if (val == 1) {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for (int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
