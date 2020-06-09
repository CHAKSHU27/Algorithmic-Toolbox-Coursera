#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int  main()
{
long long int n;
	cin>>n;
long long int arr[n];
	for(long long int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<arr[n-1]*arr[n-2]<<endl;
	
}
