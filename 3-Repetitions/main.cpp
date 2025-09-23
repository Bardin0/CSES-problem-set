#include <ios>
#include <iostream>

int main(){

    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    char n = '\0';
    char prev = '\0';
    int max = 0;
    int curr = 0;
    
    while (std::cin >> n){

        // First iteration
        if (prev == '\0'){
            prev = n;
        }

        if (prev == n){
            curr++;
        }else{
            curr = 1;
        }
        
        if (curr > max){
            max = curr;
        }

        prev = n;

    }
    
    std::cout << max << "\n";
    return 0;
}

