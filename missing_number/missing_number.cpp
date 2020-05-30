#include <iostream>

using namespace std;

int main(){
	long long n;
	cin>>n;
	long long ar[n];
	for(int i=0; i<n-1; i++){
		cin>>ar[i];
	}
	long long sum = (n*(n+1))/2;
	long long actual_sum=0;
	for(int i = 0; i<n-1; i++)
	{
		actual_sum += ar[i];
	}
	
	cout<<sum-actual_sum;
	return 0;
}
