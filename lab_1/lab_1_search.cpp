#include <iostream>
#include <vector>

int sequentialSearch(const std::vector<int>& arr, int key, int &steps) {
    steps = 0;
    for (size_t i = 0; i < arr.size(); ++i) {
        steps++;
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, key, steps;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;
    std::vector<int> arr(n);
    std::cout << "Enter the elements of the array: ";
    for (int &elem : arr) {
        std::cin >> elem;
    }
    std::cout << "Enter the key to search: ";
    std::cin >> key;
    int index = sequentialSearch(arr, key, steps);
    if (index != -1) {
        std::cout << "Key found at index " << index << " and it took " << steps << " steps to find." << std::endl;
    } else {
        std::cout << "Key not found and it took " << steps << " steps to search." << std::endl;
    }
    return 0;
}
