#include<iostream>
using namespace std;
int c=0;
int n=1;
void f()
{
    if(c>=10)return;
    cout<< n <<endl;
    n++;
    c++;
    f();
}
int main()
{
    f();
    return 0;
}