#include <iostream>
#include <cmath>

int getCompleteRows(int n) {
    int completeRows = (sqrt(1 + 8 * n) - 1) / 2;
    return completeRows;
}

int main() {
    int n;
    std::cout << "Enter the number of coins: ";
    std::cin >> n;

    int completeRows = getCompleteRows(n);
    std::cout << "The number of complete rows in the staircase: " << completeRows << std::endl;

    return 0;
}
