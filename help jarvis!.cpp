#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;// number of test cases
	int i,temp;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		vector<char>v(s.length());//declaring a vector of the same size as string
		for(i=0;i<s.length();i++)
		{
			v[i]=s[i]; // putting the elments of string in vector
			
		}
		sort(v.begin(),v.end()); //sorting
		temp=v[0]-'0'; //storing the value of temp in 0th position
	    for(i=0;i<s.length();i++)
		{
			if(v[i]-'0'!=temp)
			{
				cout<<"NO"<<endl;
				break;
			}
			else
			{
				if(i==s.length()-1)
				{
					cout<<"YES"<<endl;
				}
				
			}
			temp++;// icrreasing it naturally so that we can see agin if the number is increasing naturally
		 } 
	}
}
