#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		float sum =0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum += arr[i];
		}
		printf("%.2f\n",sum/2.00);
	}
}
