#include<iostream>
#include<iomanip.h>
struct NS
{
	int ngay, thang, nam;
};
class KH
{
	private:
		char ht[30];
		char cmt[10];
		char k[50];
		NS ns;
	public:
		KH()
		{
		strcpy(this->ht,"Nguyen Van A");
		strcpy(this->cmt,"12345678");
		strcpy(this->k,"to 3");
		ns.ngay=20;
		ns.thang=05;
		ns.nam=2001;
		}
		KH(char *ht, char *cmt, char *k, int a, int b, int c)
		{
		strcpy(this->ht,ht);
		strcpy(this->cmt,"12345678");
		strcpy(this->k,"to 3");
		ns.ngay=20;
		ns.thang=05;
		ns.nam=2001;
		}

		~KH(){}
		friend istream& operator >>(istream& is, KH& kh)
		{
			cin.ignore();
			cout<<"\nNhap ho ten khach hang: ";
			is.getline(kh.ht,30);
			cout<<"\nNhap chung minh thu: ";
			is.getline(kh.cmt,10);
			cout<<"\nNhap ho khau : ";
			is.getline(kh.k,50);
			cout<<"\nNhap ngay sinh: ";
			is>>kh.ns.ngay;
			cout<<"\nNhap thang sinh: ";
			is>>kh.ns.thang;
			cout<<"\nNhap nam sinh: ";
			is>>kh.ns.nam;
			return is;
		}
		friend ostream& operator <<(ostream& os, KH kh)
		{
			os<<left<<setw(20)<<kh.ht
					<<setw(20)<<kh.cmt
					<<setw(20)<<kh.k
			 <<right<<setw(5)<<kh.ns.ngay
				 	<<"/"<<kh.ns.thang
				 	<<"/"<<kh.ns.nam<<endl;
		 	return os;
		}
		bool hanoi( )
		{
			if(strstr(k,"ha noi"))
			{
				return true;
			}
			else
				return false;
		}
		bool operator >(const KH &kh)
		{
			return(this->ns.nam > kh.ns.nam);
				
		}
};
void tieude()
{
	cout<<setw(20)<<left<<"Ho ten";
	cout<<setw(20)<<left<<"Chung minh thu";
	cout<<setw(20)<<left<<"Ho khau";
	cout<<setw(20)<<right<<"Ngay/thang/nam sinh"<<endl;
}

int main()
{
	KH *kh;
	int n;
	cout<<"\nNhap so luong khach hang: ";
	cin>>n;
	kh = new KH[n];
	for(int i=0; i<n; i++)
	{
		cout<<"\nThong tin khach hang thu "<< i+1<<endl;
		cin>>kh[i];
	}
	tieude();
	for(int i = 0; i < n; i++)
	{
		cout<<kh[i];
	}
	
	
	cout<<"\nDanh sach khach hang co ho khau ha noi la: "<<endl;;
	tieude();
	for(int i=0; i<n; i++)
	if(kh[i].hanoi()==true)
	{
		cout<<kh[i];
	}
	return 0;
}