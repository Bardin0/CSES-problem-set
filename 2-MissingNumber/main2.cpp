#include <iostream>

// This is an alternate way to solve
// It uses a sum to solve as opposed to a truth array

int main(){

    std::cin.tie(0);
    std::ios::sync_with_stdio(0);

    long n;
    std::cin >> n;

    long sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }

    for (int i = 1; i <= n-1; i++){
        long x;
        std::cin >> x;
        sum -= x;
    }

    std::cout << sum << "\n";
    return 0;

}
