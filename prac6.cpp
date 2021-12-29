#include<iostream>
using namespace std;
int main()
{
    float num1,num2;
    cout<<"\nEnter the two numbers:-";
    cin>>num1>>num2;
    cout.precision(2);
    cout<<"\n"<<num1<<"+"<<num2<<"="<<num1+num2;
    cout<<"\n"<<num1<<"-"<<num2<<"="<<num1-num2;
    cout<<"\n"<<num1<<"/"<<num2<<"="<<num1/num2;
    cout<<"\n"<<num1<<"*"<<num2<<"="<<num1*num2;
    return 0;
}