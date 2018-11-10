#include <stdio.h>
#include <conio.h>
#include <iostream>

	using namespace std;

int main ()
{
	int i,n,HASIL,RERATA;
	
	cout<<"Masukkan Nilai N:";cin>>n;
	cout<<"Jumlah Bilangan Dari 1 Sampai Dengan N: "<<endl;
	i=1;
	
	do
{
	HASIL=i+n;
	cout<<HASIL<<endl;
}
	while (HASIL<=i);
	cout<<"Nilai Rata-Rata: "<<endl;
	do
{
	RERATA=HASIL/2;
	cout<<RERATA<<endl;
}
	while(RERATA<=i);
	return 0;
}

