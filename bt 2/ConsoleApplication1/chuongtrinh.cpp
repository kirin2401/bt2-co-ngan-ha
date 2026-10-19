#include "Header.h"
using namespace std;

int main()
{
	DaySo x;
	nhapDaySo(x);
	cout << "Day so vua nhap la: " << endl;
	xuatDaySo(x);
	cout << "Tong cac phan tu cua day so la: ";
	cout << tongDS(x) << endl;
	cout << "Tich cac phan tu cua day so la: " << tichds(x) << endl;
	cout << "Tong cac so duong cua day so la: " << demsoduong(x) << endl;
	cout << "cac phan tu chan cua day so la: ";
	xuatPTchan(x);
	cout << "\nTong cac phan tu chia het cho 2 cua day so la: " << tongDSchan(x);
	cout << "Tich cac phan tu chia het cho 2 cua day so la: " << tichds(x) << endl;
	cout << "Tong cac so chia het cho 3 va 5 cua day so la: " << demsochiahet3va5(x) << endl;
	//Luu day so thanh file
	//*if (luuDaySo(x, "dayso.txt"))
	//	cout << "Day so da duoc luu" << endl;
	//else
	//	cout << "Luu khong thanh cong" << endl;*/
	//

}