#ifndef THONGTIN_H
#define THONGTIN_H
#include <iostream>
#include <string>
using namespace std;


class ThongTin
{
	private:
			string hovaten;
			int ns;
			string scmnd;
			float luongcoban;
			int songaycong;
			string donvict;
			
	public:
			ThongTin():hovaten(""),ns(0), scmnd(""), luongcoban(0.0), songaycong(0), donvict(""){}
			ThongTin(string a, int b, string c, float d, int e, string f ):hovaten(a), ns(b), scmnd(c), luongcoban(d) , songaycong(e), donvict(f){}
			
			void setHoVaTen(string a)
			{
				this->hovaten = a;
			}
			string getHoVaTen()
			{
				return this->hovaten;
			}
			void setNamSinh(int b)
			{
				this->ns = b;
			}
			int getNamSinh()
			{
				return this->ns;
			}
			void setSCMND(string c)
			{
				this->scmnd = c;
			}
			string getSCMND()
			{
				return this->scmnd;
			}
			void setLuongCoBan(float d)
			{
				this->luongcoban = d;
			}
			float getLuongCoBan()
			{
				return this->luongcoban;
			}
			void setSoNgayCong(int e)
			{
				this->songaycong = e;
			}
			int getSoNgayCong()
			{
				return this->songaycong;
			}
			void setDonViCT(string f)
			{
				this->donvict = f;
			}
			string getDonViCT()
			{
				return this->donvict;
			}
			float TinhLuong()
			{
				float kq;
				kq = luongcoban*songaycong;
				return kq;
			}
			void hienthi()
			{
				cout<<"HVT\t NamSinh\t Luong\t DonVi\t"<<endl;
				cout<<getHoVaTen()<<"\t ";
				cout<<getNamSinh()<<"\t ";
				cout<<TinhLuong()<<"\t ";
				cout<<getDonViCT()<<"\t ";
			}
			friend istream &operator >>(istream & in, thongtin &b)
			{
				cout<<"nhap thong tin nhan vien thu ;
				cout<<
			}
			
			
				
};
#endif
