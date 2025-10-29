#include<iostream>
using namespace std;

int Mymax(int a , int b)
{
    if(a>b)
    return a;
return b;
}
int main()
{
    
    cout<<Mymax(10,20)<<" "<<Mymax(20,10);
    return 0;
}