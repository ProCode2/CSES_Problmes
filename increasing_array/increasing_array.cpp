#include <iostream>

using namespace std;

int main(){
	long long n;
	cin>>n;
	long long ar[n];
	for(int i=0; i<n ; i++)
	{
		cin>>ar[i];
	}
	long long turns = 0;
	for(int i = 1; i < n ; i++){
		if(ar[i] < ar[i-1]){
			turns += ar[i-1] - ar[i];
			ar[i] = ar[i-1];
		}
	}
	cout<<turns;
	return 0;
}
