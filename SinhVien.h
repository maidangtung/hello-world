#ifndef SinhVien_h
#define SinhVien_h
#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

class SinhVien{
	protected:
		int MSSV,NamSinh;
		char HoTen[50];
		float Diem [12],Dtb;
	public:
		//SinhVien();
		//~SinhVien();
		virtual void Nhap()
		{
			cout<<"MSSV: ";
			cin>>MSSV;
			cout<<"Ho ten: ";
			cin.ignore();
			cin.getline(HoTen,50);
			cout<<"Nam Sinh: ";
			cin>>NamSinh;
		}
		virtual void DTB () =0;
		virtual void Xuat()
		{
			cout<<"MSSV: "<<MSSV<<"\tHo Ten: "<<HoTen<<"\tNam Sinh: "<<NamSinh;
			
		}
		
		
};
#endif
