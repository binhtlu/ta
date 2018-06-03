#include <iostream>
#include "thongtin.h"
#include <string>
using namespace std;

int main()
{
	ThongTin xuat;
	string a;
	int b;
	string c;
	float d;
	int e;
	string f;
	
	cout<<"nhap hovaten: ";
	cin>>a;
	cout<<"ct: ";
	cin>>f;
	cout<<"ngayconh: ";
	cin>>e;
	xuat.setHoVaTen(a);
	cout<<"nhap nam sinh: ";
	cin>>b;
	xuat.setNamSinh(b);
	cout<<"nhap scm: ";
	cin>>c;
	xuat.setSCMND(c);
	cout<<"nhap luong co ban: ";
	cin>>d;
	xuat.setLuongCoBan(d);
	cout<<"ngayconh: ";
	cin>>e;
	xuat.setSoNgayCong(e);
	cout<<"ct: ";
	cin>>f;
	xuat.setDonViCT(f);
	
	
	xuat.hienthi();
	
	 
}
