#include <iostream>
using namespace std;

int main() {
	long long n,d,c;
	c=0;
	int skip=0;
	cin >> n;
	cin >> d;
	long long arr[n];
	for(int i=0;i<n;i++)
	{
	  
      cin>>arr[i];

	}
	for(int i=0;i<n;i++)
	{
		//taking this condition as it is told if there are more than 2 skips it will discontinue
		if(skip<=1){
	    if(arr[i]<=d){
		c++;
	}
	  
	  else
     skip+=1;
	 }
	 else
	 break;
        

	}
	cout<<c;
	
}

