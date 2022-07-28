#include<iostream>
using namespace std;

bool LinearSearch(int *arr,int n,int key)
{
    if(n==0) return false;

    if (arr[0]==key)
    {
        return true;
    }
    return LinearSearch(arr+1,n-1,key);
}

int main()
{
    int arr[]={1,2,3,4,5};
    cout << LinearSearch(arr,5,8);
}