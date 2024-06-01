#include <iostream>
#include <vector>

std::vector<int> fibonacci(int n, int &steps) {
    std::vector<int> fib_sequence;
    int a = 0, b = 1;
    steps = 0;
    for (int i = 0; i < n; ++i) {
        fib_sequence.push_back(a);
        int temp = a;
        a = b;
        b = temp + b;
        steps++;
    }
    return fib_sequence;
}

int main() {
    int n, steps;
    std::cout << "Enter the number of Fibonacci terms: ";
    std::cin >> n;
    std::vector<int> fib_sequence = fibonacci(n, steps);
    std::cout << "Fibonacci series: ";
    for (int num : fib_sequence) {
        std::cout << num << " ";
    }
    std::cout << "\nIt took " << steps << " steps to compute." << std::endl;
    return 0;
}
