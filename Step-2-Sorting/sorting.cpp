#include <bits/stdc++.h>

using namespace std;

void arrayPrinter(vector<int> array)
{
    for (int i = 0; i < array.size(); i++)
    {
        cout << array[i] << ", ";
    }
    cout << "\n";
}

/**
 * Time complexity : O(n*n)
 * Space complexity : O(1)
 */
vector<int> selectionSort(vector<int> data)
{
    if (data.size() <= 1)
    {
        return data;
    }

    for (int i = 0; i < data.size() - 1; i++)
    {
        int minElementIndex = i;
        for (int j = i + 1; j < data.size(); j++)
        {
            if (data[minElementIndex] > data[j])
            {
                minElementIndex = j;
            }
        }

        if (minElementIndex != i)
        {
            swap(data[i], data[minElementIndex]);
        }
    }

    return data;
}

/**
 * Time complexity
 * Worst case : O(n*n)
 * Best case : O(n) , when array is already sorted
 * Space complexity : O(1)
 */
vector<int> bubbleSort(vector<int> data)
{
    for (int i = 0; i < data.size() - 1; i++)
    {
        bool swaps = false;

        for (int j = 0; j < data.size() - i - 1; j++)
        {
            if (data[j] > data[j + 1])
            {
                swaps = true;
                swap(data[j], data[j + 1]);
            }
        }

        if (!swaps)
        {
            /**
             * Above iteration made no swaps meaning it's arleady sorted
             */
            break;
        }
    }
    return data;
}

/**
 * Time complexity
 * Worst case : O(n*n)
 * Best case : O(n) , when array is already sorted
 * Space complexity : O(1)
 */
vector<int> insertsionSort(vector<int> data)
{
    for (int i = 1; i < data.size(); i++)
    {
        int j = i;

        while (j > 0 && data[j] < data[j - 1])
        {
            swap(data[j], data[j - 1]);
            j--;
        }
    }

    return data;
}

/**
 * Time complexity
 * Worst case : O(log(n)*n)
 * Space complexity : O(n)
 */
void mergeSort(vector<int> &data, int low, int high)
{
    if (low == high)
    {
        return;
    }

    int mid = (low + high) / 2;

    mergeSort(data, low, mid);
    mergeSort(data, mid + 1, high);

    vector<int> temp;

    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (data[left] <= data[right])
        {
            temp.push_back(data[left]);
            left++;
        }
        else
        {
            temp.push_back(data[right]);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(data[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(data[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        data[i] = temp[i - low];
    }

    cout << "State : " << low << " ," << mid << ", " << high << "\n";

    cout << "Array State : ";
    arrayPrinter(data);
}

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

/**
 * Time complexity
 * Worst case : O(log(n)*n)
 * Space complexity : O(1)
 */
void quickSort(vector<int> &data, int low, int high)
{
    if (low < high)
    {
        int pIndex = partition(data, low, high);
        quickSort(data, low, pIndex - 1);
        quickSort(data, pIndex + 1, high);
    }
}

int main()
{
    // vector<int> arr = {21, 21, 20, 12, 35, 37, 21, 34, 45, 1};
    vector<int> arr;

    int length = 0;

    cout << "Input length : ";
    cin >> length;

    while (length--)
    {
        int element = 0;

        cin >> element;

        arr.push_back(element);
    }

    arrayPrinter(arr);

    quickSort(arr, 0, arr.size() - 1);

    arrayPrinter(arr);

    return 0;
}