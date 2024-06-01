#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr, int &steps) {
    steps = 0;
    bool swapped;
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        swapped = false;
        for (size_t j = 0; j < arr.size() - i - 1; ++j) {
            steps++;
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

int main() {
    int n, steps;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;
    std::vector<int> arr(n);
    std::cout << "Enter the elements of the array: ";
    for (int &elem : arr) {
        std::cin >> elem;
    }
    bubbleSort(arr, steps);
    std::cout << "Sorted array: ";
    for (int elem : arr) {
        std::cout << elem << " ";
    }
    std::cout << "\nIt took " << steps << " steps to sort the array." << std::endl;
    return 0;
}
