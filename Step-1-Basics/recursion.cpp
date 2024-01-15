#include <bits/stdc++.h>

using namespace std;

void printer(int count, int start = 1)
{
    if (count == 0)
    {
        return;
    }

    cout << start << "\n";
    printer(count - 1, start + 1);
}

int sumOfN(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sumOfN(n - 1);
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

void reverseArray(int arr[], int start, int end)
{
    if (start < end)
    {
        swap(arr[start], arr[end]);
        reverseArray(arr, start + 1, end - 1);
    }
}

int isStringPalindrome(string s, int start, int end)
{
    if (start > end)
    {
        return true;
    }

    if (s[start] != s[end])
    {
        return false;
    }

    return isStringPalindrome(s, start + 1, end - 1);
}

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    cout << fibonacci(6);
}