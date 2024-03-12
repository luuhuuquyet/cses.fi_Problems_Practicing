// https://cses.fi/problemset/task/1069

#include <iostream>
 
int main(){
    std::string in_put;
    std::cin >> in_put;
    int max = 1;
    int count = 1;
    for(int i = 0; i < in_put.length(); i++){
        if(in_put[i] == in_put[i+1]){
            count++;
        } else {
            if (max < count){
                max = count;
            }
            count = 1;
        }
    }
    std::cout << max;
    return 0;
}