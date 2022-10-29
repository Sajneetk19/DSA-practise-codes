#include<iostream>
using namespace std;
int main()
{
    add(2,3);
    add(2,3,4);
    add(2,3,4,5);
    return 0;
}
void sum(int a, int b)
{
    cout<<a+b;
}
void sum1(int a, int b, int c)
{
    cout<<a+b+c;
}
void sum2(int a, int b, int c,int d)
{
    cout<<a+b+c+d;
}