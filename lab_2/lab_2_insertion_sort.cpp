// WAP to sort the data using insertion sort and also find the step
#include <iostream>
#include <vector>

using namespace std;

void printArray(const vector<int> &arr, int step)
{
    cout << "Step " << step << ": ";
    for (const int &num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; ++i)
    {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;

        // Print the array after each insertion
        printArray(arr, i);
    }
}

int main()
{
    vector<int> data = {12, 11, 13, 5, 6};
    cout << "Original array: ";
    for (const int &num : data)
    {
        cout << num << " ";
    }
    cout << endl;

    insertionSort(data);

    cout << "Sorted array: ";
    for (const int &num : data)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
