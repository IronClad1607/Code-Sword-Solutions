#include<iostream>
using namespace std;

int handShake(int n){
	return (n * (n-1))/2;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<handShake(n)<<endl;
	}
	return 0;
}
