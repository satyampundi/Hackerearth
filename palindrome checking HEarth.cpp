#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s1,s2;
    cin>>s1;
    s2=s1;
    int n=s1.length();
    for(int i=0;i<n/2;i++)
    {
        swap(s1[i],s1[n-i-1]);
    }
    if(s1==s2)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
