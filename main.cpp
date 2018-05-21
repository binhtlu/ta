#include <iostream>
using namespace std;

class Date
{
    private:
            int ngay;
            int thang;
            int nam;
    public:
            Date():ngay(0),thang(0),nam(0){}
            Date(int a,int b,int c):ngay(a),thang(b),nam(c){}
            
            void setNgay(int a)
            {
                this->ngay = a;
            }
            int getNgay()
            {
                return this->ngay;
            }
            void setThang(int b)
            {
                this->thang = b;
            }
            int getThang()
            {
                return this->thang;
            }
               void setNam(int c)
            {
                this->nam = c;
            }
            int getNam()
            {
                return this->nam;
            }
};
class Maytinh
{
    private:
            char hsx;
            int sanxuat;
    public:
            Maytinh():hsx(0),sanxuat(0){}
            Date(int a,int b,int c,char e):sanxuat(a,b,c),hsx(e){}
           void setHSX(char e)
           {
                this->hsx = e;
           }
           char getHSX()
           {
                return this->hsx;
           }
           char xuatHSX()
           {
              cout<<hsx.getHSX;
           }
           void setSanXuat(int a,int b,int c)
           {
                this->sanxuat = Date(a,b,c);
           }
           Date getSanXuat()
           {
                return this->sanxuat;
           }
           
};

int main()
{
    Maytinh a(8,9,2018);
    cout<<a.getSanXuat<<endl;
}

