#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h> 
#include <ctime>
#include <windows.h>  
using namespace std;
//GrimmWolf
int main(){
	system("COLOR 02");
	char ans;
	int num,secret = rand() % 100 + 1;
	srand(time(NULL));
	string usname;
	int l;
	cout<<"Enter Language/Airchiet Ena\n\n";
	cout<<"Qartuli/Georgian - 1\n\n";
	cout<<"Inglisuri/English - 2\n\n";
	cin>>l;
	system("cls");
	if(l == 2){
	printf("Enter you Username : ");
	cin>>usname;
	system("cls");
	cout<<"Hello "<<usname<<" I'm Ilia\n";
	cout<<usname<<"! Would you like to play?\n";
	cout<<"If Yes type Y If not type N\n";
	cin>>ans;
	system("cls");
	if(ans == 'N' || ans == 'n'){
		cout<<"Then have a good day :)\n";
	}else if(ans == 'Y' || ans == 'y'){
		cout<<"Great! Let's start :) , I'll remember one number in my mind between 1 - 100\n";
		cout<<"Type : ";
			while(num != secret){
				cin>>num;
				system("cls");
				if(num > secret){
					cout<<"Lower- :V\n";
				}else if(num < secret){
					cout<<"Higher+ :D\n";
				}else if(num == secret){
					cout<<"Hooray! Here is the Winner :3\n";
				}
			}
	}
	//Kartuli
	   }else if(l == 1){
	   	printf("Sheiyvanet saxeli : ");
	cin>>usname;
	system("cls");
	cout<<"Gamarjoba "<<usname<<" Me Ilia var\n";
	cout<<usname<<" Ginda Tamashi?\n";
	cout<<"Tu ginda chawere - Y Tu arginda - N\n";
	cin>>ans;
	system("cls");
	if(ans == 'N' || ans == 'n'){
		cout<<"Xoda kargad iyavi :)\n";
	}else if(ans == 'Y' || ans == 'y'){
		cout<<"Magaria! Modi daviwyot :) , me chavifiqreb ert ricxvs 1-dan 100-mde\n";
		cout<<"Aba gamoicani :DD\n";
			while(num != secret){
				cin>>num;
				system("cls");
				if(num > secret){
					cout<<"Naklebia- :V\n";
				}else if(num < secret){
					cout<<"Metia+ :D\n";
				}else if(num == secret){
					cout<<"YochaaX! Shen gaimarjve :3\n";
				}
			}
	}
	   }
system("pause");
	return 0;
}
