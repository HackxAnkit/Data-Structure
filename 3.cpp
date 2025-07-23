#include<iostream>
using namespace std;

int n=0;
void f()
{
    if(n == 5)return;
    cout<<"Ankit"<<endl;
    n++;
    f();
}
int main()
{
    f();
    return 0;
}