#include <iostream>

//In the rare case where you want to fall through to the next case, you can and should say so:
int main () {
    constexpr bool checked = true;
    constexpr bool unchecked = false;
    bool check;
    int val;
    std::cin >> check >> val;
    
    switch (check) {
    case checked:
        if (val<0)
            val = 0;
        [[fallthrough]];
    case unchecked:
        // ... use val ...
        break;
    }
}

//The [[fallthrough]] is an attribute making our intent explicit.