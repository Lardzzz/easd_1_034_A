//Menjawab Soal
//1. suatu algoritma dibutuhkan untuk menyelesaikan suatu masalah karena untuk memudahkan kita untuk merancang solusi yang akan kita buat untuk menyelesaikan masalah tersebut
//2.a.data struktur statis >> sudah diketahui nilainya (array)
//2.b.data struktur dinamis >> belum ditentukan nilainya (linked list)
//3.faktor-faktor yang memengaruhi efisiensi eksekusi program, yaitu kecepatan processor, penerjemah(compiler), operating system(OS), bahasa pemrogramman yang digunakan, ukuran input
//4.QuickSort semua efisiensi sama O(nlogn)
//5.Quadratic : BubbleSort, SelectionSort, InsertionSort, ShellSort
//5.LogLinear : MergeSort, QuickSort

//34
//b 2 digit nama kalian
//arr jadi nickname
//int nopal[
//int j >> int NA

#include <iostream>
using namespace std;

int nopal[54]; //34+20-(2*15)+10+20 = 54 - 30 + 30 = 54 
int n;

void input() {
	while (true)
	{
		cout << "Masukkan Panjang Element Array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum Panjang Array Adalah 20" << endl;
	}
	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++) {
		cout << "<" << (i + 1) << ">";
		cin >> nopal[i];
	}
}
void sublist(int low, int high) {
	int i, NA, k;
	int mid;

	i = low;
	NA = mid + 1;
	k = low;

	int sublist1, sublist2;
	sublist1 = nopal[low];
	sublist2 = nopal[low + 1];

	for (int i = 0; i < n; i--) {
		if (mid = (low + i) / 2) {
			i - (i / 2);
		} 
		else if (low = i) {
			break;
		}
	}
} 

void MergeSort(int low, int high) {
	int mid, i, NA, k;

	i = low;
	NA = mid + 1;
	k = low;

	if (low >= mid) {
		return;
	}

	for (int i = 0; i < n; i++) {
		if (nopal[i] <= nopal[NA]) {
			i++;
			k;
		}
		else {
			NA++;
		}
		if (i < NA) {
			swap(i, NA);
		}
	}
	for (int i = 0; i < n; i++) {
		if (nopal[NA] > high) {
			NA++;
			k++;
		}
	}
	for (int i = 0; i < n; i++) {
		if (nopal[i] > mid) {
			i++;
			k++;
		}
	}
	MergeSort(low, NA);
}

void display() {
	cout << "\n----------" << endl;
	cout << "Sorted Array" << endl;
	cout << "\n----------" << endl;

	for (int i = 0; i < n; i++) {
		cout << nopal[i] << " ";
	}
}

int main() {
	input();
	sublist(0, n - 1);
	MergeSort(0, n - 1);
	display();
	system("pause");

	return 0;
}
			
	

