#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    if(str[8]=='P'){
        if(str[0]=='0' && (str[1]>=49 && str[1]<=55)){
            str[0]='1';
            str[1]+=2;
        }
        else if(str[0]=='0' && (str[1]=='8' || str[1]=='9')){
            str[0]='2';
            str[1]-=8;
        }
        else if(str[0]=='1' && (str[1]=='0' || str[1]=='1')){
            str[0]='2';
            str[1]+=2;
        }
    }
    else{
        if(str[0]=='1' && str[1]=='2'){
            str[0]='0';
            str[1]='0';
        }
    }
    for(int i=0;i<8;i++)
    cout<<str[i];
    return 0;
}

