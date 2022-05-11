#include <iostream>
using namespace std;
int main(){
	int a,b,c;
cout<<"Sheiyvanet samkutxedis zomebi"<<endl;
cin>>a>>b>>c;
if(a == b && b == c && a == c ){
	cout<<"Es aris tolgverda (wesieri) samkutxedi"<<endl;
}
if(a == b && b != c|| a == c && a != b|| c == b && a!= c && a + b > c || a + c > b || b + c > a){
	cout<<"Es aris tolperda samkutxedi"<<endl;
}
if(a != b && b != c && a != c && a + b > c || a + c > b || b + c > a){
	cout<<"Es aris zogadi saxis samkutxedi"<<endl;
}
if(a + b <= c || a + c <= b || b + c <= a ){
	cout<<"Aseti samkutxedi ar arsebobs"<<endl;
}

system("pause");
return 0;
}
