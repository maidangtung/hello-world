#include "SinhVien.h"
#include "SinhVienCQ.h"
#include "SinhVienNG.h"
#include "SinhVienKH.h"

int main()
{
	SinhVien *ds[50];
	int k=0,chon;
	while(1)
	{
		cout<<"*SVCQ/SVNG/SVKH/Pause(1,2,3,4):";
		cin>>chon; cin.get();
		if(chon==1) ds[k]= new SinhVienCQ();
		if(chon==2) ds[k]= new SinhVienNG();
		if(chon==3) ds[k]= new SinhVienKH();
		if(chon==4) break;
		ds[k]->Nhap(); k++;
	}
	cout<<"Ket Qua:\n";
	for(int i=0;i<k;i++)
	{
		ds[i]->DTB();
		ds[i]->Xuat();
		cout<<"\n";
	}
	getch();
	
}
