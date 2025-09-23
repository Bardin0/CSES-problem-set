#include <cstdlib>
#include <iostream>

int main (){

    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n;
    std::cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

    long diff = 0;
    long minMoves = 0;
    for (int i = 0; i < n - 1; i++){
        diff = abs(arr[i] - arr[i+1]);
        arr[i] > arr[i+1] ? arr[i+1] += diff : diff = 0;
        minMoves += diff;
    }

    std::cout << minMoves << "\n";
    return 0;

}
