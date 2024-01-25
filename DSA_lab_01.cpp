// Q.2
#include<iostream>
using namespace std;

int generateFibonacci(int n) {
    if ((n==1) || (n==2)) {
        return 1;
    }
    return generateFibonacci(n-1)+generateFibonacci(n-2);
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<generateFibonacci(n)<<endl;
    return 0;
}