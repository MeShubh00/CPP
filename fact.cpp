#include<iostream>
using namespace std;
int fun(int a )
{
    int fact = 1;
    for (int i = 1;i<=a;i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    cout<< fun(5)<<endl;
    return 0;
    
}