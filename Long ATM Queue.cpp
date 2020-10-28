
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int num,i;
	int c=1;
    cin >> num;	
	int arr[num];
	
	for(i=0;i<num;i++)
	{
        cin>>arr[i];
		if(arr[i]<arr[i-1])
		{
			c++;
		}
		
	}
	cout<<c;
    return 0;
}

