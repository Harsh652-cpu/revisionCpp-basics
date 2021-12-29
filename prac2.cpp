#include<iostream>
using namespace std;
int main()
{
    int num;
    float amt;
    char code;
    double pi;
    long int population_of_India;
    char msg[10];
    cout<<"\nEnter the value of num:-";
    cin>>num;
    cout<<"\nEnter the value of amount:-";
    cin>>amt;
    cout<<"\nEnter the value of pi:-";
    cin>>pi;
    cout<<"\nEnter the population_of_India:-";
    cin>>population_of_India;
    cout<<"\nEnter the value of code:-";
    cin>>code;
    cout<<"\nEnter the message:-";
    cin>>msg;
    //print the values of variables
    cout<<"\nNum="<<num<<"\tAmt="<<amt<<"\tCode="<<code<<"\tPopulation of India="<<population_of_India<<"\tMessage="<<msg;
    return 0;
}