// https://cses.fi/problemset/task/1071

#include <iostream>

int main(){
    long t;
    std::cin >> t;
    while(t--){
        long y, x;
        std::cin >> y >> x;
        if (x == 1 && y == 1){
            std::cout << "1\n";
        } else {
            if (x >= y)
            {
                if (x & 1)
                    std::cout << (x * x) - y + 1 << "\n";
                else
                    std::cout << ((x - 1) * ( x - 1)) + y << "\n";
            } else {
                if(y & 1)
                    std::cout << ((y - 1) * ( y - 1)) + x << "\n";
                else
                    std::cout << (y * y) - x + 1 << "\n";
            }
                
        }
    }

    return 0;
}