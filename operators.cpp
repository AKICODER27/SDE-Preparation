//Arithmetic Operators
//Binary operators
#include<iostream>
using namespace std;

int main()

   
//Assignment operators

{

     int x=10 , y;
    y=x;
    cout<<y<<endl;
    x+=10;
    cout<<x<<endl;
    x-=10;
    cout<<x<<endl;
    x*=2;
    cout<<x<<endl;

    return 0;

}
{
    int x=20 , y=10;
    cout << (x+y)<<" \n";
    cout << (x-y)<<"\n";
    cout << (x*y)<<"\n ";
    cout << (x/y)<<" \n";

    return 0;
}

    
// Unary operators
{

    int x=10;
    int y=x++;
    int z=++x;
    cout<< x<<"\n";
    cout<< y<<"\n";
    cout<< z<<"\n";
    return 0;
}

