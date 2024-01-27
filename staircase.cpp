#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter No. of coins:";
	cin>>n;
	int complete=-1;//complete rows

	int lo=0;
	int hi=n-1;

	while(lo<=hi){
		int mid=(lo+(hi-lo)/2);
        int m=mid*(mid+1)/2;
		if(m==n) { 
			complete=mid;
			break;
		}
		else if(m>n) hi=mid-1;
		else lo=mid+1;
	}
	
	if(complete==-1) cout<<hi;
	else cout<<complete;
}