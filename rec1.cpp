#include<iostream>
using namespace std;
// int fact(int n)
// {
//     cout << n;
//     if(n==0)
//     {
//         return 1;
//     }

//     return n*fact(n-1);
// }

// int power(int x,int n)
// {
//     // base
//     if(n==0)
//     {
//         return 1;
//     }

//     int smallproblem = power(x,n-1);
//     int bigproblem = x * smallproblem;
//     return bigproblem;
// }

// void count(int n)
// {
//     // base
//     if(n==0)
//     {
//         return;
//     }

//     count(n-1);
//     cout << n << " ";
// }

void say_digit(int n)
{
    string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n<=0){
        return;
    }
    int t = n%10;
    say_digit(n/10);
    cout << arr[t]<<" ";
}

int main()
{
    // cout << fact(-1);
    // cout << power(2,3);
    // count(10);
    say_digit(100);
}