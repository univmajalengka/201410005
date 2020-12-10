//konversi jam menit detik ke total detik
//konversi total detik ke jam menit dan detik
//mencari perbedaan dari 2 buah jam (program billing telepon/warnet)
#include<iostream>
using namaspace std;
int main()
Bilangan Bulat j1,m1,d1,td1,j2,m2,d2,td,2,j3,m3,d3,,td3;
{
	cout<<"jam pertama :" ;
	cin>>j1 ;
	cout<<"menit pertama :" ;
	cin>>m1 ;
	cout<<"detik pertama :" ;
	cin>>d1 ;
	cout<<:"jam kedua :" ;
	cin>>j2 ;
	cout<<"menit kedua :" ;
	cin>>m2 ;
	cout<<"detik kedua :" ;
	cin>>d2 ;
	td=(j1 * 3600) + (m1 * 60)+ d1 ;
	td2=(j2 * 3600) + (m2 * 60)+ d2 ;
	td3=td2-td ;
	j3=td3/3600;
	sm=td3%3600;
	m3=sm/60;
	d3=sm%60;
	
	cout<<j3<<":"<<d3;
	return 0;
}
