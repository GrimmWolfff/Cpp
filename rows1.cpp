#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
//ILIA SICHINAVA
int main(){
	system("COLOR 06");
	int q;
	cout<<"Enter rows quantity : \n";
	cin>>q;
	string a;
	system("cls");
	cout<<"Enter symbol\n";
	cin>>a;
	string b = a;
	system("cls");
	cout<<a<<endl;
	for(int i = 0; i <= q; i++){
	a += b;
	cout<<a<<endl;		
	}
	
	system("pause");
	return 0;
}
