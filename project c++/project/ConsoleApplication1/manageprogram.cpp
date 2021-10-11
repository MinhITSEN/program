#include<iostream>
using namespace std;
struct phanSo {
	int tuSo;
	int mauSo;
};
typedef phanSo PHANSO;
void nhapPhanSo(PHANSO* x) {
	cout << "Nhap tu so: ";
	cin >> x->tuSo;
	do {
		cout << "\nNhap mau so: ";
		cin >> x->mauSo;
		if (x->mauSo == 0) {
			cout << "\n So ban nhap khong hop le xin kiem tra lai.";

		}


	} while (x->mauSo == 0);
}
void xuatPhanSo(PHANSO* x) {
	cout << "\n Phan so: " << x->tuSo << "/" << x->mauSo;
}
int main() {
	PHANSO* x = new PHANSO;
	nhapPhanSo(x);
	xuatPhanSo(x);
	return 0;

}