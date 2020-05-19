#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string moveX(string s){
	string ans;
	int n = s.length();
	int xCount = 0;
	for(int i=0;i<n;i++){
		if(s[i] == 'x'){
			xCount++;
		}
		else{
			ans.push_back(s[i]);
		}
	}
	
	for(int i=0;i<xCount;i++){
		ans.push_back('x');
	}
	
	return ans;
}

int main(){
	string s;
	cin>>s;
	cout<<moveX(s)<<endl;
	return 0;
}
