#include<bits/stdc++.h>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

string randomLicencePlate(){
	srand(time(0));
	string s;
	int len;
	len=6+rand()%(8-6); //generates length 6 or 7 randomly 
	cout<<len<<endl; 
	//older licence plate
	if(len==6){ 
		for(int i=0;i<=2;i++){
			s[i]='A' +rand()%('z'-'A');
			cout<<s[i];
		}
		for(int i=3;i<=5;i++) cout<<rand()%10;	
	}
	//new licence plate
	if(len==7){
		for(int i=0;i<=3;i++) cout<<rand()%10;
		for(int i=4;i<=6;i++){
			s[i]='A' +rand()%('z'-'A');
			cout<<s[i];
		}
	}				
}
int main(){
	cout<<randomLicencePlate();
}
