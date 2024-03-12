// https://cses.fi/problemset/task/1094

#include <iostream>

int main(){
    unsigned long n;
    unsigned long sum = 0;
    unsigned long input = 0;
    unsigned long keep;
    // size of array
    std::cin >> n;
    // first element
    std::cin >> keep;
    for (long i = 0; i < n - 1; i++){
        std::cin >> input;
        if(input <= keep){
            sum+= (keep - input);
        } else {
            keep = input;
        }
    }
    std::cout << sum;
    return 0;
}