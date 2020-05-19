#include<bits/stdc++.h>
using namespace std;

int equal(int arr[],int n){
	sort(arr,arr+n);
	
	int sum = INT_MAX;
	
	for(int base = 0;base<3;base++){
		int currentSum = 0;
		for(int i=0;i<n;i++){
			int d = arr[i] - arr[0] + base;
			currentSum += d/5+ d% 5/2 + d%5%2 /1;
		}
		sum = min(currentSum,sum);
	}
	return sum;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cout<<equal(arr,n);
	}
}
