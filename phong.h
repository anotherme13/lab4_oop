#include<bits/stdc++.h>
#define ll long long 
#define fi first
#define se second
using namespace std;
typedef pair<ll,string> ii;
class phong
{
    protected:
       int Sodem;
       ll Phidichvu,Phiphucvu;
    public:
        phong()
        {
            Sodem = 0;
            Phidichvu = 0;
            Phiphucvu = 0;
        };
        void nhap()
        {
            cout << "Nhap so dem su dung phong nay: ";
            cin >> Sodem;
        }
       
};


class Duluxe : public phong
{
    public:
        ll Doanhthu()
        {
            return Sodem * 750000 + Phidichvu  + Phiphucvu;
        }
        void nhap()
        {
            phong::nhap();
            cout << "Nhap phi dich vu: ";
            cin >> Phidichvu;
            cout << "Nhap phi phuc vu: ";
            cin >> Phiphucvu;
        }
};

class Premium : public phong
{
    public:
        ll Doanhthu()
        {   
            return Sodem * 500000 + Phidichvu;
        }
        void nhap()
        {
            phong::nhap();
            cout << "Nhap phi dich vu: ";
            cin >> Phidichvu;
        }
};

class Business : public phong
{
    public:
        ll Doanhthu()
        {
            return Sodem * 300000;
        }
};