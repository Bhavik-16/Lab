#include<iostream>
using namespace std;

int main() {
    float a, b; int c;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;

    int i =0;
        while (i==0) {    
        cout<<"Opertation:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n"<<endl;
        cout<<"Enter your choice: ";
        cin>>c;

        switch (c)
        {
        case 1:
            cout<<"Addition: "<<a+b<<"\n"<<endl;
            break;
        case 2:
            cout<<"Subtraction: "<<a-b<<"\n"<<endl;
            break;
        case 3:
            cout<<"Multiplication: "<<a*b<<"\n"<<endl;
            break;
        case 4:
            cout<<"Division: "<<float(a/b)<<"\n"<<endl;
            break;
        
        default:
            break;
        }}
    return 0;
}