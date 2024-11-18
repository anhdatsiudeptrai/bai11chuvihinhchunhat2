#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
int main()
{
	cout << "tinh dien tich chu vi hinh tron\n";
	double chuvi, dientich, bankinh;

	cout << "nhap bankinh "; cin >> bankinh;
	//SỬ DỤNG M_PI THAY VÌ SỬ DỤNG PI= 3.14

	chuvi = 2 * M_PI * bankinh;
	dientich = M_PI * bankinh * bankinh;

	cout << "chuvi :" << chuvi << endl;
	cout << "dientich :" << dientich << endl;
	return 0;


}