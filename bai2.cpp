#include<bits/stdc++.h>
#include "phong.h"
using namespace std;
int main()
{
    Duluxe a,b;
    Business e;
    Premium c,d;
    ii ans;
    ans.fi = 0;
    cout << "Nhap thong tin phong Duluxe thu nhat\n";
    a.nhap();
    cout << endl;
    cout << "Nhap thong tin phong Duluxe thu hai\n";
    a.nhap();
    cout << endl;
    cout << "Nhap thong tin phong Premium thu nhat\n";
    c.nhap();
    cout << endl;
    cout << "Nhap thong tin phong Premium thu hai\n";
    d.nhap();
    cout << endl;
    cout << "Nhap thong tin cua phong Business\n";
    e.nhap();
    cout << endl;
    if (ans.fi < a.Doanhthu())  ans = ii(a.Doanhthu(),"Phong Duluxe thu nhat");
    if (ans.fi < b.Doanhthu())  ans = ii(b.Doanhthu(),"Phong Duluxe thu hai");
    if (ans.fi < c.Doanhthu())  ans = ii(c.Doanhthu(),"Phong Premium thu nhat");
    if (ans.fi < d.Doanhthu())  ans = ii(d.Doanhthu(),"Phong Premium thu hai");
    if (ans.fi < e.Doanhthu())  ans = ii(e.Doanhthu(),"Phong Business");

    cout << ans.se << " co doanh thu cao nhat\n";
    cout << "Doanh thu cua phong " << ans.se << " la: " << ans.fi;





    return 0;
}