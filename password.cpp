#include<iostream>
using namespace std;
int main(){
	string val,val1;
	cout<<"Please Enter your password: "<<flush;
	cin>>val;
	cout<<"confirm Your password: "<<flush;
	cin>>val1;
	if(val==val1){
	
		cout<<"\t\t\t\t\tAccess Granted......"<<endl;
	}
	else{
		cout<<"\t\t\t\t\tAccess Cancenled...."<<endl;
	while(val!=val1)
	{
	cout<<"confirm Your password properly: "<<flush;
	cin>>val1;
	
	}cout<<"\t\t\t\t\tAccess Granted...."<<endl;}
	return 0;
}
