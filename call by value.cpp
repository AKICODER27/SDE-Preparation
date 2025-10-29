//SWAP FUNCTION
#include<iostream>
using namespace std;

void swap(int x, int y)
{
    int temp = x;
    x=y;
    y= temp;
}
//call by value
int main()
{
    int x=4, y=6;
    cout<<"x is "<< x << "y is"<< y << endl;
    swap(x,y);
    cout<<"x is "<< x << "y is"<< y <<endl ;
    return 0;
}
