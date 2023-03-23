#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
	while (true) {
		cout << "masukkan jumlah data pada array : ";
		cin >> n;

		if (n <= 20) {
			break;
		}
		else
		{
			cout << "\n array yang anda masukkan maksimal 20 elemen. \n";
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "masukan elemen array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "data ke-" << (i + 1) << ": ";
		cin >> arr[i];
	}
}
void inserttionsort() {
	int temp;
	int j;
}