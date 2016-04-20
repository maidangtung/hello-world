#include "SinhVien.h"

class SinhVienNG : public SinhVien{
	protected:
		float DiemThi;
	public:
		void Nhap(){
			SinhVien::Nhap();
			cout<<"Nhap diem 12 mon:";
			for(int i=1;i<=12;i++)
				cin>>Diem[i];
			cout<<"Diem Thi:";
			cin>>DiemThi;
		}
		void DTB(){
			float sum=0;
			for(int i=1;i<=12;i++){
				sum+=Diem[i]*2;
			}
			Dtb=(sum+DiemThi*3)/27;
		}
		void Xuat(){
			SinhVien::Xuat();
			cout<<"\tDiem trung binh: "<<Dtb;
		}
		
};
