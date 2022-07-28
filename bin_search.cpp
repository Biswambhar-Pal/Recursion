#include<iostream>
using namespace std;
bool binSearch(int *arr,int key,int left,int right)
{
    if(left>right) return   false;
    int mid = (left+right)/2; // 0+5/2=>2 // 1 2 3 4 5
    if(arr[mid] == key)
        return true;
    else if(arr[mid]>key)
        return binSearch(arr,key,left,mid-1);
    else
        return binSearch(arr,key,mid+1,right);
}


int main()
{
    int arr[]={1,2,3,4,5};
    cout << binSearch (arr,0,5,5);
}