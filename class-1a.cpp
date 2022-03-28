#include <iostream.h>
#include <iomanip.h>
#include <stdio.h>
struct ngaysinh
{
	int dd, mm, yyyy;
};
class KhachHang
{
	private:
	char ht[30];
	char cmt[10];
	char k[50];
	ngaysinh ns;
	public:
	KhachHang()
	{
		strcpy(this->ht,"Nguyen Van A");
		strcpy(this->cmt,"12345678");
		strcpy(this->k,"to 3");
		ns.dd=20;
		ns.mm=05;
		ns.yyyy=2001;
	}
	void xuat()
	{
		cout<<"\nHo ten: "<<this->ht;
		cout<<"\nChung minh thu: "<<this->cmt;
		cout<<"\nHo khau: "<<this->k;
		cout<<"\nNgay sinh: "<<this->ns.dd<<"/"<<this->ns.mm<<"/"<<this->ns.yyyy;
		
	}
	KhachHang(char *ht, char *cmt, char *k, int a, int b, int c)
	{
		strcpy(this->ht,ht);
		strcpy(this->cmt,"12345678");
		strcpy(this->k,"to 3");
		ns.dd=20;
		ns.mm=05;
		ns.yyyy=2001;
	}
};
int main()
{
	KhachHang kh;
	kh.xuat();
	return 0;
}