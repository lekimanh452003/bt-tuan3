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
	
	void xuat()
	{
		cout<<"\nHo ten: "<<this->ht;
		cout<<"\nTuoi: "<<this->t;
		cout<<"\nBang cap: "<<this->bc;
		cout<<"\nChuyen nganh: "<<this->cn;
		cout<<"\nBac luong: "<<this->bl;
		
	}
	
};
int main()
{
	GV gv;
	gv.xuat();
	return 0;
}