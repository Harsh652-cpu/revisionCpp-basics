#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2;
    float distance;
    cout<<"\nEnter the x and y coordinates of the first point:-";
    cin>>x1>>y1;
    cout<<"\nEnter the x and y coordinates of the second point:-";
    cin>>x2>>y2;
    //sqrt and pow are mathematical functions defined in math.h header file
    distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    cout.precision(2);
    cout<<"\nDistance="<<distance;
    return 0;
}
