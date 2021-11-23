#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int Q;
    set<int>s;

    std::cin >> Q;

    for (int i = 0; i < Q; i++) {
        int x;
        int y;
        std::cin >> y >> x;

        if (y == 1) {
            s.insert(x);
        }
        else if (y == 2) {
            s.erase(x);
        }
        else {
        Ex: set<int>::iterator itr = s.find(x);
            if (itr == s.end()) {
                std::cout << "No\n";
            }
            else {
                std::cout << "Yes\n";
            }
        }

    }

    return 0;
}



