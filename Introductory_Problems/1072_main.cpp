// https://cses.fi/problemset/task/1072

#include <iostream>

int main(){
    int n;
    std::cin >> n;
    for(auto i = 1; i <= n ; i++){
        long k1 = i*i; 
        long k2 = i*i -1;
        long ans = k1*k2/2;
        if(i > 2){
            ans = ans - 4 *(i - 1) * (i -2);
        }
        std::cout << ans << "\n";
    }
    return 0;
}