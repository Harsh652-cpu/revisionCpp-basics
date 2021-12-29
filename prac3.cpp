#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
float a,b,c,area,S;
cout<<"\nEnter the three sides of the triangle:-";
cin>>a>>b>>c;
S=(a+b+c)/2;
//sqrt is a mathematical function defined in math.h header file
area=sqrt(S*(S-a)*(S-b)*(S-c));
cout<<"\nArea="<<area;
return 0;
}