#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);  //is used for faster inout outout tchniques
    cin.tie(0);// static member functions of std::iosbase
    long long i,n,s=0;
    cin>>n;
    long long a[n];
    for(int i=0;i<n-1;i++)
    {
        cin>>a[i];
        s+=a[i];            //s will store the sum of array elements
    }
    cout<<(n*n)-s;       //the original sum of with difference of the total sum of odd integrs will give the missing odd number.sum of AP for odd number is n*n.
}
