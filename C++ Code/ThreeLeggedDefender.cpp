#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		int noOfSocks;
		cin>>noOfSocks;
		sum += (noOfSocks/3);
	}
	cout<<sum;
	return 0;
}
