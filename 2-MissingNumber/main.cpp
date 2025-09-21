#include <cstdlib>
#include <iostream>

int main(){
    
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    long amount;
    long n;

    std::cin >> amount;


    long * nums = (long *)calloc(amount, sizeof(long));

    for (int i = 0; i < amount - 1; i++){
        std::cin >> n;
        nums[n-1] = 1;
    }

    for (long i = 0; i < amount; i++){
        if (nums[i] == 0){
            std::cout << i+1 << "\n";

        }
    }
    
    return 0;
}
