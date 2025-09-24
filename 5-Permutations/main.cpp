#include <bits/stdc++.h>
#include <string>

int main(){

    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int n;
    std::cin >> n;
    std::string evens;
    std::string odds;
  
    int lastEven = -1;
    int firstOdd = -1;

    for (int i = 1; i <= n; i++){
        if (i % 2 == 0){
            evens += std::to_string(i) + " ";
            lastEven = i;
        }else{
            odds += std::to_string(i) + " ";
            if (firstOdd < 0){
                firstOdd = i;
            }
        }
    }

    if (abs(lastEven - firstOdd) <=1){
        std::cout << "NO SOLUTION\n";
        return 0;
    }

    std::cout << evens << odds << "\n";
    return 0;
}

