// https://cses.fi/problemset/task/1068/

#include <iostream>
 
int main(){
    unsigned long n;
    std::cin >> n;
    while(n != 1){
        std::cout << n << " ";
        if(n %2 == 1)
            n = n * 3 + 1;
        else
            n = n / 2;
    }
     std::cout << n;
    return 0;
}