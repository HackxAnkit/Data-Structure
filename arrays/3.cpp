#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr= {10,0,30,0,50};
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}