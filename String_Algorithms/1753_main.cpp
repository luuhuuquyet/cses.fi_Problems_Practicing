// // https://cses.fi/problemset/task/1753
// Using Knuth–Morris–Pratt algorithm https://cp-algorithms.com/string/prefix-function.html

#include <iostream>
#include <cstring>
#include <vector> 
int main(){
    std::string input;
    std::string pattern;
    std::cin >> input;
    std::cin >> pattern;
    std::string S =  pattern+ '#' + input ;
	int n = (int)S.size();
	std::vector<int> pi_s(n);
	for (int i = 1, j = 0; i < n; i++) {
		while (j > 0 && S[j] != S[i]) { j = pi_s[j - 1]; }
		if (S[i] == S[j]) { j++; }
		pi_s[i] = j;
	}
    int count = 0;
	for (int l : pi_s) {
		if (l == pattern.size()) { count++; }
	}
    std::cout << count;

    return 0;
}