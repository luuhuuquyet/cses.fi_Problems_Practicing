// https://cses.fi/problemset/task/1070

#include <iostream>

int main(){
    unsigned long n;
    std::cin >> n;
    if(n <= 3 && n > 1){
        std::cout << "NO SOLUTION";
    } else {
        for(long i = 2; i <= n; i+=2){
            std::cout << i << " ";
        }
        for(long i = 1; i <= n; i+=2){
            std::cout << i << " ";
        }
    }
    return 0;
}