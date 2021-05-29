#include <iostream>
#include <string>
#include <deque>
#include <vector>

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


int main() {
    std::vector<int> vt{ 13, 27, 100500, 1, -3, 14, 25 };
    auto res = std::find_if(
        vt.begin(),
        vt.end(),
        [divRes = 0](int val) {
        return divRes == (val % 2);
    });

    if (res != vt.end()) {
        std::cout << *res;
    }
}

