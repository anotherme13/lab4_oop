#include<bits/stdc++.h>
#include "nhanvien.h"

int main()
{
    Kysu a;
    Quanly b;
    cout << "Nhap thong tin cua nhan vien ky su\n";
    a.nhap();
    cout << endl;
    cout << "Nhap thong tin cua nhan vien quan ly\n";
    b.nhap();
    cout << endl;

    cout << "Thong tin cua nhan vien ky su\n";
    a.xuat();
    cout << endl;
    cout << "Thong tin cua nhan vien quan ly\n";
    b.xuat();

    return 0;
}