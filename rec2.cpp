#include<iostream>
using namespace std;
// bool isSorted(int *arr,int n)
// {
//     if(n==0){
//         return true;
//     }

//     if(arr[0]>arr[1]) return false;
//     return isSorted(arr+1,n-1);
// }

int sum(int *arr,int n)
{
    if(n==0){
        return 0;
    }

    return arr[0]+sum(arr+1,n-1);

}


int main()
{
    int arr[]={5};
    // cout << isSorted(arr,4);
    cout << sum(arr,1);
    return 0;
}