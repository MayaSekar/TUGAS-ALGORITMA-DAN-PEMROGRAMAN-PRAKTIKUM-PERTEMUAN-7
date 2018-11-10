#include <stdio.h>
#include <conio.h>
#include <iostream>

	using namespace std;

int main ()
{
	int N,i,JB;
	i=1;
		
		cout<<"Masukkan Nilai N : ";cin>>N;
		cout<<"Jumlah Bilangan 1 Sampai Dengan N :"<<endl;
	do
{
	JB=i+N;
		cout<<JB<<endl;
}
	while (JB<=1);
}
