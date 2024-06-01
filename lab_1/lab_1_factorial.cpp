#include <iostream>

int factorial(int n, int &steps) {
    steps = 0;
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
        steps++;
    }
    return result;
}

int main() {
    int n, steps;
    std::cout << "Enter a number: ";
    std::cin >> n;
    int result = factorial(n, steps);
    std::cout << "Factorial of " << n << " is " << result << " and it took " << steps << " steps to compute." << std::endl;
    return 0;
}
