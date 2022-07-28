#include<iostream>
#include<cstring>
using namespace std;
void revString(string &str,int s,int e)
{
    //base
    if(s>=e) return;
    // swap
    // char temp = str[s];
    // str[s] = str[e];
    // str[e] = temp;
    swap(str[s],str[e]);
    revString(str,++s,--e);
}

int main()
{
    string str = "123456789";
    revString(str,0,str.size()-1);
    cout << str;
}