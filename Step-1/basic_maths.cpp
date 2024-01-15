#include <bits/stdc++.h>

using namespace std;

int count_digits(int n)
{
    int count = 0;

    while (n != 0)
    {
        n = n / 10;
        count += 1;
    }

    return count;
}

int count_digits_2(int n)
{
    return floor(log10(n) + 1);
}

// input 123 output 321
int reverse(int n)
{
    int result = 0;

    while (n != 0)
    {
        result = result * 10 + (n % 10);
        n = n / 10;
    }

    return result;
}

int palindrome(int n)
{
    return n == reverse(n);
}

int gcd(int a, int b)
{

    if (b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}

void divisors(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if ((n % i) == 0)
        {
            cout << i << ", ";

            if (i != (n / i))
            {
                cout << n / i << ", ";
            }
        }
    }
}

int checkPrime(int n)
{
    int factors = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            factors++;
            if (n / i != i)
            {
                factors++;
            }
        }
    }

    return factors == 2;
}
int main()
{
    int n = 1;

    if (checkPrime(n))
    {
        cout << n << " is a prime number.";
    }
    else
    {
        cout << n << " is not a prime number.";
    }
    return 0;
}
