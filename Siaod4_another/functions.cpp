#include "Header.h"
#include <iostream>
#include <vector>
using namespace std;
const int N = 100;


void printTable(regRow* arr, int n) {
	cout << "ID | Barcode | Quantity | Price | Discount\n";
	for (auto i = 0; i < n; i++) {
		cout << arr[i].id << " " << arr[i].barcode << " " << arr[i].quantity << " " << arr[i].price << " " << arr[i].discount << " " << arr[i].total << endl;
	}
}

void printTableID(regRow* arr, int n) {
	cout << "¬ведите ID кассы дл€ вывода: \n";
	int id;
	cin >> id;

	cout << "ID | Barcode | Quantity | Price | Discount\n";
	for (auto i = 0; i < n; i++) {
		if(arr[i].id = id) 
			cout << arr[i].id << " " << arr[i].barcode << " " << arr[i].quantity << " " << arr[i].price << " " << arr[i].discount << " " << arr[i].total << endl;
	}
}


regRow fillRow(regRow row) {
	cout << "¬ведите id кассы, код товара, количество, цену и скидку" << endl;
	cin >> row.id;
	cin >> row.barcode;
	cin >> row.quantity;
	cin >> row.price;
	cin >> row.discount;
	row.total = row.price * row.quantity * (1 - (row.discount / 100));
	return row;
}

//==================================STATIC=======================================

void addRow(regRow* arr, int& n) {
	n++;
	if (n == N) {
		return;
	}
	arr[n-1] = fillRow(arr[n-1]);
}

void insert(regRow* arr, int& n) {
	int id;
	cout << "¬ведите ID кассы дл€ вставки: \n";
	cin >> id;
	regRow temp{};
	temp = fillRow(temp);

	for (auto i = 0; i < n; i++) {
		if (arr[i].id == id) {
			n++;
			for (auto j = i; j < n; j++) {
				swap(arr[j], temp);
			}
			return;
		}
	}
}

void deleteID(regRow* arr, int& n) {
	cout<<"¬ведите ID кассы дл€ удалени€: \n";
	int id;
	cin >> id;
	for (auto i = 0; i < n; i++) {
		if (arr[i].id == id) {
			n--;
			for (int j = i; j < n + 1; j++) {
				swap(arr[j], arr[j + 1]);
			}
			i--;
		}
	}
}

//==================================DYNAMIC=======================================

void addRowD(regRow*& arr,int &n) {
	n++;
	regRow* arr1 = new regRow[n];
	arr1[0] = fillRow(arr1[0]);
	for (auto i = 1; i < n; i++) {
		arr1[i] = arr[i-1];
	}
}


