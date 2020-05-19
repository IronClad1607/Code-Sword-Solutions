#include<iostream>
using namespace std;

int handShake(int n){
	return (n * (n-1))/2;
}

int main(){
	int n;
	cin>>n;
	cout<<handShake(n);
	return 0;
}
