// Q.2
#include<iostream>
using namespace std;

int generateFibonacci(int n) {
    int fib[n];
    for (int i = 1; i <= n; i++)
    {
        if ((i==1) || (i==2)) {
            fib[i-1] = 1;
        }
        fib[i-1] = generateFibonacci(i-1) + generateFibonacci(i-2);
    }
    for (int j = 0; j < n; j++)
    {
        cout<<fib[j]<<" ";
    }
    cout<<endl;
    if ((n==1) || (n==2)) {
        return 1;
    }
    return generateFibonacci(n-1)+generateFibonacci(n-2);
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    generateFibonacci(n);
    return 0;
}