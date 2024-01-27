#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"enter the number:";
	cin>>a;
	int res=-1;

	int lo=0,hi=a;
	while(lo<=hi){
		int mid=(lo+(hi-lo)/2);
		if((mid*mid)==a){
			res=1;
		    break;
			}
		else if((mid*mid)<a){ 
			 lo=mid+1;
	    }
		else if((mid*mid)>a){
			hi=mid-1;
		}
		else{
			res=-1;
		}
	}

	(res==1)?cout<<"Yes":cout<<"No";
}