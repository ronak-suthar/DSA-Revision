#include <bits/stdc++.h>

using namespace std;

void explainPairs()
{
    pair<int, string> data = {1, "Ronak"};

    cout << "First item : " << data.first << "\n";

    cout << "Second item : " << data.second << "\n";
}

void explainVectors()
{
    vector<int> data;

    // vector<int> data(2); // [0,0]

    // vector<int> data(5,4); // [4,4,4,4,4]

    // vector<int> data(copyFromAnotherVector);

    data.push_back(1); // [1]
    data.push_back(2); // [1,2]
    data.push_back(3); // [1,2,3]

    cout << "Index based accessing : " << data[0] << "\n";

    // iterating over the elements
    for (vector<int>::iterator iterator = data.begin(); iterator != data.end(); iterator++)
    {
        cout << *(iterator) << "\n";
    }

    for (auto iterator = data.begin(); iterator != data.end(); iterator++)
    {
        cout << *(iterator) << "\n";
    }

    for (auto element : data)
    {
        cout << element << "\n";
    }

    // removing elements
    data.erase(data.begin()); // [1,2,3] ==> [2,3]

    data.erase(data.begin(), data.begin() + 2); // [1,2,3] ==> [3]

    // inserting the elements

    data.insert(data.begin(), 100);    // [3] ==> [100,3]
    data.insert(data.begin(), 100, 4); // [3] ==> [100,100,100,100,3]

    vector<int> copy(5, 4);                              // [4,4,4,4]
    data.insert(data.begin(), copy.begin(), copy.end()); // [3] ==> [4,4,4,4,3]

    // size of vector

    cout << data.size() << "\n";

    // pop from back

    data.pop_back();

    // swap whole container

    data.swap(copy);
}

void explainList()
{
    list<int> data;

    data.push_front(2); //[2]

    // other operations are same as vector

    // list is a linked list while vector is an array
}

void explainDequeue()
{
    deque<int> data;

    data.push_back(2);
    data.push_front(2);

    data.pop_back();
    data.pop_front();
}

void explainStack()
{
    stack<int> stk;

    stk.push(1);

    stk.pop();

    stk.top();

    stk.empty();
}

void explainQueue()
{
    queue<int> data;

    data.push(1);

    data.front();

    data.pop();

    data.back();
}

void explainPriorityQueue()
{
    priority_queue<int> pq;

    pq.push(2);
    pq.push(5);
    pq.push(1); //[5,2,1]

    pq.top(); // 5
    pq.pop(); // [2,1]

    priority_queue<int, vector<int>, greater<int>> pq2;

    pq.push(2);
    pq.push(5);
    pq.push(1); //[1,2,5]

    pq.top(); // 1
    pq.pop(); // [2,5]
}

void explainSet()
{
    set<int> data;

    data.insert(2);
    data.insert(4);
    data.insert(2); //[2,3]

    auto it = data.find(2);

    data.erase(2); //[2,3] --> [3]

    data.count(2); // 0 or 1

    //[1,2,3,4,5,6]

    data.erase(data.find(2), data.find(5)); //[1,5,6]
}

void explainUnorderedSet()
{
    unordered_set<int> data;

    data.insert(1);
    data.insert(2);
    data.insert(3);
    data.insert(4); //[3,1,4,2] order of not gaurenteed
}

void explainMap()
{
    map<int, int> mp;

    mp.insert({3, 2});
    mp.insert({2, 3});
    mp.insert({9, 26}); // [{2,3},{3,2},{9,26}]

    for (auto element : mp)
    {
        cout << "Key : " << element.first << " and Value : " << element.second << "\n";
    }

    auto it = mp.find(3);

    cout << "Key : " << it->first << " and Value : " << it->second << "\n";

    // unordered map is same as map just key's are stored in order
}

bool comp(int a, int b)
{
    return a > b;
}

void explainAlgos()
{
    vector<int> data = {3, 2, 1, 6, 4};

    sort(data.begin(), data.end()); //{1,2,3,4,6}

    sort(data.begin(), data.end(), comp); //{6,4,3,2,1}
}