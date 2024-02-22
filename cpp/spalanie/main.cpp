#include <iostream>
using namespace std;
int odl = 10;//odległość
int os = 2;//osoby
int sp = 5;//średnie spalanie
int cp = 5;//cena paliwa
int pos = 0;//ilość postojów

int main(){
	cout<<"Ilość osób\n";
cin>>os;
	cout<<"Odległość\n";
cin>>odl;
	cout<<"Średnie spalanie\n";
cin>>sp;
	cout<<"Cena paliwa\n";
cin>>cp;
	cout<<endl<<"Cena za osobe "<<((odl/(sp*4))*cp)/os<<"zl"<<endl;
	cout<<"Ile paliwa spaliło "<<(odl/(sp*4))<<"L"<<endl;
	cout<<"Ile kosztowało paliwo "<<(odl/20)*cp<<"zl"<<endl;
if(odl>(50/sp)*100)
{
pos +=1;
}
	cout<<"Ilość postojów "<<pos<<endl;
return 0;
}
