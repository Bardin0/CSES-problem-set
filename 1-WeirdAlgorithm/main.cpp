#include <iostream>
int main(){

    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    long n;
    std::cin >> n;

    while (n >= 1){

        std::cout << n << " ";
        if (n == 1){
            break;
        }
        n = n%2 == 0 ? n/2 : (n*3)+1;
    }

    std::cout << "\n";
    return 0;
}
