#include<iostream>
using namespace std;


int power(int x,int n)
{
    cout << x << " " <<n<<endl;
    if(n==0) return 1;

    return x*power(x,n-1);

}

int powerOptimized(int x,int n)
{
    cout << x << " " <<n<<endl;
    // base case
    if(n==0) return 1;
    if(n==1) return x;

    int ans = powerOptimized(x,n/2);

    if(n%2==0) return ans*ans;
    else return x*ans*ans;
}

int main()
{
    // cout << powerOptimized(2,4);
    cout << power(2,4);
}