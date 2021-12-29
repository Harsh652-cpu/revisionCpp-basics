#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    int add_res=0,sub_res=0,mul_res=0,idiv_res=0,modiv_res=0;
    float fdiv_res=0.0;
    cout<<"\nEnter the two numbers:-";
    cin>>num1>>num2;
    add_res=num1+num2;
    sub_res=num1-num2;
    mul_res=num1*num2;
    idiv_res=num1/num2;
    modiv_res=num1%num2;
    fdiv_res=(float)(num1/num2);
    cout<<"\n"<<num1<<"+"<<num2<<"="<<add_res;
    cout<<"\n"<<num1<<"-"<<num2<<"="<<sub_res;
    cout<<"\n"<<num1<<"*"<<num2<<"="<<mul_res;
    cout<<"\n"<<num1<<"/"<<num2<<"="<<idiv_res;//Integer division
    cout<<"\n"<<num1<<"%"<<num2<<"="<<modiv_res;
    cout<<"\n"<<num1<<"/"<<num2<<"="<<fdiv_res;//Normal division
    return 0;
}