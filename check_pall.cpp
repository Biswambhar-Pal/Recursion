#include<iostream>
using namespace std;

bool checkPallindrome(string str,int i)
{
    int e = str.size()-i-1;
    // base
    if(i>=e) return true;

    if(str[i]!=str[e]) return false;
    return checkPallindrome(str,++i);

    
}

int main()
{
    string str = "asa";
    cout << checkPallindrome(str,0);
}