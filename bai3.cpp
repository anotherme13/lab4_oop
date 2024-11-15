#include<bits/stdc++.h>
#include "giasuc.h"
#define ll long long 
using namespace std;
int main()
{
    srand(time(NULL));
    int nbo,nde,ncuu;
    cout << "Nhap so luong gia suc bo: ";
    cin >> nbo;
    bo Giasucbo(nbo);
    cout << "Nhap so luong gia suc cuu: ";
    cin >> ncuu;
    cuu Giasuccuu(ncuu);
    cout << "Nhap so luong gia suc de: ";
    cin >> nde;
    de Giasucde(nde);
    string ans;
    if (nbo == 0)   ans += "Bo ";
    if (ncuu == 0)  ans += "Cuu ";
    if (nde == 0)   ans += "De";
    for (auto i : ans)
    {
        if (i == ' ')   i = ',';
    }
    if (ans == "")
    {
        cout << "Khong co tieng keu cua gia suc nao!\n";
    }
    else
    {
        cout << "Nhung tieng keu cua gia suc gom cac loai sau: " << ans << endl;
    }

    int res,Tongsua = 0;

    res = Giasucbo.Soluonggiasucsausinh();
    Tongsua += Giasucbo.getsua();

    cout << "So luong cua gia suc bo sau sinh la: " << res << endl;

    res = Giasucde.Soluonggiasucsausinh();
    Tongsua += Giasucde.getsua();

    cout << "So luong cua gia suc de sau sinh la: " << res << endl;

    
    res = Giasuccuu.Soluonggiasucsausinh();
    Tongsua += Giasuccuu.getsua();
    cout << "So luong cua gia suc cuu sau sinh la: " << res << endl;
    cout << "Tong so sua sau 1 luot cho sua la: " << Tongsua;


    






    return 0;
}