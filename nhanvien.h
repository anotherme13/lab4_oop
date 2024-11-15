#include<bits/stdc++.h>
#define ll long long 
using namespace std;
class nhanvien
{
    protected:
        string Ma_nv,Ten; 
        ll Luongcoban;
    public:
        nhanvien(){};
        void xuat()
        {
            cout << "Ma nhan vien: " << Ma_nv << endl;
            cout << "Ten: " << Ten << endl;
            cout << "Luong co ban: " << Luongcoban << endl;
        }

        ll Tinh_thuong();

        void nhap()
        {
            cout << "Nhap ma nhan vien: ";
            cin >> Ma_nv;
            cout << "Nhap ten nhan vien: ";
            cin.ignore();
            getline(cin,Ten);
            cout << "Nhap luong co ban: ";
            cin >> Luongcoban;
        }
};
class Kysu : public nhanvien{
    ll Sogiolamthem;
    public:
        Kysu(){};
        void nhap()
        {
            nhanvien::nhap();
            cout << "Nhap so gio lam them: ";
            cin >> Sogiolamthem;
        }

        ll Tinh_thuong()
        {
            return  Sogiolamthem * 100000;
        }

        void xuat()
        {
            nhanvien::xuat();
            cout << "So gio lam them: " << Sogiolamthem << endl;
            cout << "Tien thuong: " << Tinh_thuong() << endl;
        }

};

class Quanly : public nhanvien{
    double Tylethuong;
    public:
        Quanly(){};
        void nhap()
        {
            nhanvien::nhap();
            cout << "Nhap ty le thuong: ";
            cin >> Tylethuong;
        }

        double Tinh_thuong()
        {
            return Luongcoban * Tylethuong;
        }

        void xuat()
        {
            nhanvien::xuat();
            cout << "Ti le thuong: " << Tylethuong << endl;
            cout << "Tien thuong tinh duoc: " << Tinh_thuong() << endl;
        }

       
};