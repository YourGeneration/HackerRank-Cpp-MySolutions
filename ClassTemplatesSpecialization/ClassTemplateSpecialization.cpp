#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;

//My Solution
template<>
struct Traits<Fruit> {
    static std::string name(int index) {
        switch (Fruit(index)) {
        case Fruit::apple: return "apple"; break;;
        case Fruit::orange: return "orange"; break;
        case Fruit::pear: return "pear"; break;
        default: return "unknown";
        }
    }
};

template<>
struct Traits<Color> {
    static std::string name(int index) {
        switch (Color(index)) {
        case Color::green: return "green"; break;
        case Color::orange: return "orange"; break;
        case Color::red: return "red"; break;
        default: return "unknown";
        }
    }

};

//End

int main()
{
    int t = 0; std::cin >> t;

    for (int i = 0; i != t; ++i) {
        int index1; std::cin >> index1;
        int index2; std::cin >> index2;
        cout << Traits<Color>::name(index1) << " ";
        cout << Traits<Fruit>::name(index2) << "\n";
    }
}
