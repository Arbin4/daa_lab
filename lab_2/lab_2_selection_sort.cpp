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

void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
    {
        // Find the minimum element in unsorted array
        int min_idx = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first element
        swap(arr[min_idx], arr[i]);

        // Print the array after each selection sort step
        printArray(arr, i + 1);
    }
}

int main()
{
    vector<int> data = {64, 25, 12, 22, 11};
    cout << "Original array: ";
    for (const int &num : data)
    {
        cout << num << " ";
    }
    cout << endl;

    selectionSort(data);

    cout << "Sorted array: ";
    for (const int &num : data)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
