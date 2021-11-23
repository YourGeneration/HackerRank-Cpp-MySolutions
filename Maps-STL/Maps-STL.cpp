#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>


int main() {
    std::map <std::string, int> m;
    int Q;
    std::cin >> Q;

    for (int i = 0; i < Q; i++) {
        int type;
        std::string X;
        int Y;
        std::cin >> type;
        if (type == 1) {
            std::cin >> X >> Y;
        Ex: std::map<std::string, int>::iterator itr = m.find(X);
            if (itr == m.end()) {
                m.insert(std::make_pair(X, Y));
            }
            else {
                m[X] += Y;
            }
        }
        else {
            std::cin >> X;
            if (type == 2) {
                m.erase(X);
            }
            else {
                std::cout << m[X] << std::endl;
            }
        }
    }
    return 0;
}