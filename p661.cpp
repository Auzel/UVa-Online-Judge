#include<iostream>
using namespace std;

struct Device {
	int power;
	bool on;
};

int main(){
	
	int totalPow;
	
	int n,m,c;
	
	int pow;
	
	
	int count=0;
	
	cin>>n>>m>>c;
	while(!(n==0 && m==0 && c==0)){
		
		Device device[n];
	
		for(int i=0;i<n;i++){
			cin>>pow;
			device[i].power=pow;
			device[i].on=false;
		}
	
		int val;
		int totalPow=0;
		int maxPow=-1;
		for(int i=0;i<m;i++){
			cin>>val;
			if(device[val-1].on){
				device[val-1].on=false;
				totalPow-=device[val-1].power;
			}				
			else{
				device[val-1].on=true;
				totalPow+=device[val-1].power;
			}
			if(totalPow>maxPow)
				maxPow=totalPow;				
		}
								
		count++;
		
		cout<<"Sequence "<<count<<endl;
		if(totalPow>c)
			cout<<"Fuse was blown."<<endl<<endl;
		else{
			cout<<"Fuse was not blown."<<endl;
			cout<<"Maximal power consumption was "<<maxPow<<" amperes."<<endl<<endl;
		}
				
		
		cin>>n>>m>>c;	
	}
	
	
	
	return 0;
}
