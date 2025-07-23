#include<iostream>
using namespace std;

bool f(int i, string arr[], int n)
{
    if(i >= n/2) return true;
    if(arr[i] != arr[n-i-1]) return false;
    return f(i+1, arr, n);
}

int main()
{
    int n;
    cin >> n;
    string arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << f(0, arr, n);
    return 0;
}