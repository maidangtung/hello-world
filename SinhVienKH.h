#include "SinhVien.h"

class SinhVienKH : public SinhVien{
	
	public:
		void Nhap(){
			SinhVien::Nhap();
			cout<<"Nhap diem 12 mon:";
			for(int i=1;i<=12;i++)
				cin>>Diem[i];
		}
		void DTB(){
			float t;
			for(int i=1;i<=12;i++)
  				for(int j=i+1;j<=12;j++)
   					if(Diem[i]<Diem[j])
   					{
      					t=Diem[i];
      					Diem[i]=Diem[j];
      					Diem[j]=t;
					}		
			Dtb=(Diem[6]+Diem[7])/2;
		}
		void Xuat(){
			SinhVien::Xuat();
			cout<<"\tDiem trung binh: "<<Dtb;
		}
		
};
