#include <sstream>
#include <vector>
#include <iostream>

std::vector<int> parseInts(std::string str) {
    std::vector<int> integers;
    int a;
    char ch;

    std::stringstream ss(str);

    while (ss >> a) {
        integers.push_back(a);
        ss >> ch;
    }
    return integers;
}

int main() {
    std::string str;
    std::cin >> str;
    std::vector<int> integers = parseInts(str);
    for (int i = 0; i < (integers.size()); i++) {
        std::cout << integers[i] << "\n";
    }

    return 0;
}
