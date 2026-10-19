#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std; 

const int KTM = 50;
struct DaySo {
	int arr[KTM];
	int n;
};
bool docDaySo(DaySo& ds,const char* tenFile);
bool luuDaySo(DaySo ds,const char* tenFile);
void nhapDaySo(DaySo& ds);
void xuatDaySo(DaySo ds);
int tongDS(DaySo ds);
int tichds(DaySo& ds);
int demsoduong(DaySo& ds);
void xuatPTchan(DaySo& ds);
int tongDSchan(DaySo ds);
int tichDSchan(DaySo ds);
int demsochiahet3va5(DaySo& ds);
bool SNT(int n);
int tongngto(DaySo& ds);