#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,ct=0;      //ct = count
    cin>>n;
    vector<long long>v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];            //putting elements in the vector same as array
    }
    sort(v.begin(),v.end());   //sorting the vector elements
    while(v[n-1]!=0)       //loop till max value i.e last value of the vector becomes 0
    {
    for(i=0;i<n;i++)       //see note below
    {
        if(v[i]%2!=0)   // checking if element is odd
        {
            v[i]--;     //updating element
            ct++;       //increasing count by 1
        }
    }
    for(i=0;i<n;i++)
    {
        v[i]/=2;
    }
    ct++;
    }
    cout<<ct-1;
}
