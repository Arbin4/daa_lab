#include <iostream>

int gcd(int a, int b, int &steps) {
    steps = 0;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
        steps++;
    }
    return a;
}

int main() {
    int a, b, steps;
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;
    int result = gcd(a, b, steps);
    std::cout << "GCD of " << a << " and " << b << " is " << result << " and it took " << steps << " steps to compute." << std::endl;
    return 0;
}
