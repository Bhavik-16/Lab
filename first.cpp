#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;

    if (a>b) {
        cout<<a<<" is greater than "<<b<<endl;
    }
    else if (a<b) {
        cout<<a<<" is lesser than "<<b<<endl;
    }
    else {
        cout<<a<<" is equal to "<<b<<endl;
    }
    return 0;
}