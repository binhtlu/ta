#include <iostream>
#include <string>
using namespace std;


class NhanVien
{
	private:
		string hoten;
		string cmnd;
		float giolam;
		float t; // so tien lam 1 gio
	public:
		NhanVien():hoten(""),cmnd(""),giolam(0),t(0){}
		NhanVien(string a,string b,float c,float d):hoten(a),cmnd(b),giolam(c),t(d){}
		void setHoTen(string a)
		{
			this->hoten = a;
		}
		string getHoTen()
		{
			return this->hoten;
		}
		void setCMND(string b)
		{
			this->cmnd = b;
		}
		string getCMND()const
		{
			return this->cmnd;
		}
		void setGioLam(float c)
		{
			this->giolam = c;
		}
		float getGioLam()const
		{
			return this->giolam;
		}
		void setT(float d)
		{
			this->t = d;
		}
		float getT()const
		{
			return this->t;
		}
		float tinhluong()
		{
			
			return this->giolam*1500000+this->T;
		}


		
};

int main()
{
	NhanVien a;
	NhanVien b;
	NhanVien c;
	string u;
	cin>>u;
	NhanVien d;
	cout<<"nhap ho va ten: ";
	a.setHoTen(u);
	cout<<"nhap cmnd: ";
	cin>>b.cmnd();
	cout<<"nhap gio lam: ";
	cin>>c.giolam();
	cout<<"nhap so tien cong trong 1 gio: ";
	cin>>d.t();

cout<<"ten: "<<a.getHoTen()<<endl;
cout<<"CMND: "<<b.getCMND()<<endl;
cout<<"gio lam: "<<c.getGioLam()<<endl;
cout<<"so tien cong trong 1 gio: "<<d.getGioLam()<<endl;
//cout<<"tong tien cong lam duoc: "<<tinhluong(c,d)<<endl; 
}
