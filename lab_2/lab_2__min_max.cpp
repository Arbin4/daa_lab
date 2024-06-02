#include <iostream>
#include <vector>
#include <limits>

using namespace std;

void findMinMax(const vector<int> &arr, int &minVal, int &maxVal)
{
    minVal = 20000;
    maxVal = 0;

    for (size_t i = 0; i < arr.size(); ++i)
    {
        cout << "Step " << i + 1 << ": Current element = " << arr[i] << endl;

        if (arr[i] < minVal)
        {
            minVal = arr[i];
            cout << "Updated minimum to " << minVal << endl;
        }
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
            cout << "Updated maximum to " << maxVal << endl;
        }
    }
}

int main()
{
    vector<int> data = {64, 25, 12, 22, 11};
    cout << "Array: ";
    for (const int &num : data)
    {
        cout << num << " ";
    }
    cout << endl;

    int minVal, maxVal;
    findMinMax(data, minVal, maxVal);

    cout << "Minimum value: " << minVal << endl;
    cout << "Maximum value: " << maxVal << endl;

    return 0;
}
