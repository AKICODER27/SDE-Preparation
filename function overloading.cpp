#include<iostream>
using namespace std;

void print(int i)
{
    cout<< i<<" ";

}
void print(string s)
{
    cout<<s<<" ";
}
int main()
{
    print(10);
    print("HELLO WORLD");
    return 0;
}