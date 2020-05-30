#include <iostream>
#include <string>
using namespace std;

int main(){
	string st;
	cin>>st;
	int count=0;
    int max_count = 0;
	char ch = st[0];
	for(long long i = 0; i< st.size(); i++){
		if(ch == st[i]){
			count++;
		}else{
			count = 1;
			ch = st[i];
		}
		max_count = max(max_count, count);
	}
	cout<<max_count;
	return 0;
}
