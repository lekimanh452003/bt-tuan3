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
	friend istream& operator >>(istream& is, GV& gv )
	{
		cin.ignore();
		cout<<"\nNhap ho ten giao vien: ";
		is.getline(gv.ht,30);
		cout<<"\nNhap bang cap: ";
		is.getline(gv.bc,15);
		cout<<"\nNhap chuyen nganh : ";
		is.getline(gv.cn,20);
		cout<<"\nNhap tuoi: ";
		is>>gv.t;
		cout<<"\nNhap bac luong: ";
		is>>gv.bl;
		return is;
	}
	friend ostream& operator <<(ostream& os, GV gv)
		{
			os<<left<<setw(20)<<gv.ht
					<<setw(20)<<gv.bc
					<<setw(20)<<gv.cn
			 <<left<<setw(20)<<gv.t
				 	<<setw(20)<<gv.bl<<endl;
		 	return os;
		}
	float lcb()
	{
		return bl*610;
	}
	bool operator ==(const GV &gv)
		{
			return(this->bc == gv.bc);
		}
};
void tieude()
{
	cout<<setw(20)<<left<<"Ho ten";
	cout<<setw(20)<<left<<"Bang cap";
	cout<<setw(20)<<left<<"Chuyen nganh";
	cout<<setw(20)<<left<<"Tuoi";
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
		cin>>gv[i];
	}
	
	cout<<"\nThong tin giao vien vua nhap la: "<<endl;
	tieude();
	for(int i=0; i<n; i++)
	{
		cout<<gv[i];
	}
}