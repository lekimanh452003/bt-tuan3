#include <iostream.h>
#include <iomanip.h>
#include <stdio.h>
class GV
{
	private:
	char ht[30];
	int t;
	char bc[15];
	char cn[20];
	float bl;
	public:
	GV()
	{
		strcpy(this->ht,"Nguyen Van A");
		strcpy(this->bc,"Tien si");
		strcpy(this->cn,"Sinh hoc");
		t=30;
		bl=1.2;
	}
	GV(char *ht,int a, char *bc, char *cn,  int b)
	{
		strcpy(this->ht,ht);
		t=a;
		strcpy(this->bc,"Tien si");
		strcpy(this->cn,"Sinh hoc");	
		bl=b;
	}
	void nhap()
	{
		cin.ignore();
		cout<<"\nHo ten: ";cin.getline(this->ht,30);
		cout<<"\nTuoi: ";cin>>this->t;
		cin.ignore();
		cout<<"\nBang cap: "; cin.getline(this->bc,15);
		cout<<"\nChuyen nganh: ";cin.getline(this->cn,20);
		cout<<"\nBac luong: ";cin>>this->bl;
	}
	void xuat()
	{
		cout<<setw(20)<<left<<this->ht;
		cout<<setw(20)<<left<<this->t;
		cout<<setw(20)<<left<<this->bc;
		cout<<setw(20)<<left<<this->cn;
		cout<<setw(5)<<left<<this->bl<<endl;
	}
	float lcb()
	{
		return bl*610;
	}
	bool sx(GV gv)
	{
		if(strcmpi(this->cn,gv.cn)>0)
		return true;
	}
};
void tieude()
{
	cout<<setw(20)<<left<<"Ho ten";
	cout<<setw(20)<<left<<"Tuoi";
	cout<<setw(20)<<left<<"Bang cap";
	cout<<setw(20)<<left<<"Chuyen nganh";
	cout<<setw(20)<<left<<"Bac luong"<<endl;
}
int main()
{
	GV *gv;
	int n;
	cout<<"\nNhap so luong giao vien: ";
	cin>>n;
	gv = new GV[n];
	for(int i=0; i<n; i++)
	{
		cout<<"\nThong tin giao vien thu "<< i+1<<endl;
		gv[i].nhap();
	}
	
	cout<<"\nThong tin giao vien vua nhap la: "<<endl;
	tieude();
	for(int i=0; i<n; i++)
	{
		gv[i].xuat();
	}
	
	cout<<"\nDanh sach luong giao vien < 2000 la: "<<endl;
	tieude();
	for(int i=0; i<n; i++)
	if(gv[i].lcb()<2000)
	{
		gv[i].xuat();
	}
	
	cout<<"\nDanh sach giao vien sap xep ten theo thu tu tang dan la: "<<endl;
	tieude();
	for(int i=0; i<n; i++)
	for(int j=i+1; j<n-1;j++)
	if(gv[i].sx(gv[j]))
	{
		GV temp=gv[i];
		gv[i]=gv[j];
		gv[j]=temp;
	}
	for(int i=0; i<n; i++)
	{
		gv[i].xuat();
	}
}