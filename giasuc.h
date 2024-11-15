#include<bits/stdc++.h>
#define ll long long 
using namespace std;

class giasuc{
    protected: 
        int Soluong,Soluongsinh,Soluongsua;
    public:
        giasuc()
        {
        }   

        void nhap()
        {
            cout << "Nhap so luong gia suc loai nay ban dau:\n";
            cin >> Soluong;
        }

        int Soluonggiasucsausinh()
        {
            return Soluongsinh + Soluong;
        }   

        int getsua()
        {
            return Soluongsua;
        }
};

class bo : public giasuc
{
    public:
    bo(int x)
    {
        Soluong = x;
        Soluongsua = rand() % 21; 
        Soluongsinh = rand() % Soluong + 1;
    }
};

class cuu : public giasuc
{
    public:
    cuu(int x)
    {
        Soluong = x;
        Soluongsua = rand() % 6; 
        Soluongsinh = rand() % Soluong + 1;
    }
};
class de : public giasuc
{
    public:
    de(int x)
    {
        Soluong = x;
        Soluongsua = rand() % 11; 
        Soluongsinh = rand() % Soluong + 1;
    }
};