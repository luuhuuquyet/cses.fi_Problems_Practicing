// https://cses.fi/problemset/task/1083
 
#include <iostream>
 
int main(){
    unsigned long  n;
    std::cin >> n;
    unsigned long  val;
    unsigned long long sum = n * (n + 1)/2;
 
    for(unsigned long i = 0; i < n - 1; i++){
        val = 0;
        std::cin >> val;
        sum -= val;
    }
    std::cout << sum;
    return 0;
}
