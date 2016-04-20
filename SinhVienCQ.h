#include "SinhVien.h"

class SinhVienCQ : public SinhVien{
	protected:
		int fault;
	public:
		void Nhap(){
			SinhVien::Nhap();
			cout<<"Nhap diem 12 mon:";
			for(int i=1;i<=12;i++)
				cin>>Diem[i];
			cout<<"So lan vi pham:";
			cin>>fault;
		}
		void DTB(){
			float sum=0;
			for(int i=1;i<=12;i++){
				sum+=Diem[i];
			}
			Dtb=sum/12;
			if(fault<2)
				Dtb=Dtb+1;
			else if(fault<5)
				Dtb= Dtb+0.5;
		}
		void Xuat(){
			SinhVien::Xuat();
			cout<<"\tDiem trung binh: "<<Dtb;
		}
		
};

