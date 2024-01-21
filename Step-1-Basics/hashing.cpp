#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> data = {1, 2, 2, 3, 1, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5};

    unordered_map<int, int> freqCount;

    for (int element : data)
    {
        freqCount[element]++;
    }

    int maxCount = INT_MIN, minCount = INT_MAX, maxElement = 0, minElement = 0;

    for (auto it : freqCount)
    {
        int element = it.first;
        int count = it.second;

        if (count > maxCount)
        {
            maxElement = element;
            maxCount = count;
        }

        if (count < minCount)
        {
            minElement = element;
            minCount = count;
        }

        cout << it.first << " : " << it.second << "\n";
    }

    cout << "Max count element is : " << maxElement << "\n";
    cout << "Min count element is : " << minElement << "\n";

    return 0;
}