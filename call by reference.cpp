#include<iostream>
using namespace std;
//Call by REFERENCE

void swapPointer(int*x, int*y)
{
    int temp = *x;
    *x=*y;
    *y= temp;
}
//call by value
int main()
{
    int x=4, y=6;
    cout<<"x is "<< x << "y is"<< y << endl;
    swapPointer(&x,&y);
    cout<<"x is "<< x << "y is"<< y <<endl ;
    return 0;
}

