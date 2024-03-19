// https://cses.fi/problemset/task/2205

#include <iostream>

int main(){
    int n;
    std::cin >> n;
    int size = (1 << n);
    for(long i = 0; i < size; i++ ){
        int num = i ^ (i >> 1);
        int j = n;
        for(int j = n - 1; j >=0; j--)
            std::cout << ((num & (1<<j))>>j);
        std::cout << "\n";
    }
    return 0;
}