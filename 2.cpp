#include<iostream>
using namespace std;
int main(){
    int arr[5] = {50, 20, 10, 30, 40};

    //bubble sort
    for(int i = 0 ; i<5; i++)
    {
        for(int j = 0; j<5-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i =0 ;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}