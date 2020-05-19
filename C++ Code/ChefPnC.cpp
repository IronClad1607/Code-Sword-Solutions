#include <iostream>
using namespace std;
 
int yes(int i)
{
	int a[10],j = 0,l;
	
	while(i)
	{
		l = i%10;
		if(l == 0)
			return 0;
		a[j] = l;
		i = i/10;
		j++;
	}
	
	for(int i = 0; i < j; i++)
	{
		for(int k = 0; k < j; k++)
		{
			if(i == k)
				continue;
			if(a[i] == a[k])
				return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	cin>>n;
	
	for(int i = n+1; i <= 987654321; i++)
	{
		if(yes(i))
		{
			cout<<i<<endl;
			return 0;
		}
	}
	cout<<"0"<<endl;
    return 0;
}
