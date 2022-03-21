#include "Header.h"
#include <iostream>
#include <vector>
using namespace std;

void printTable(regRow* arr, int n) {
	cout << "ID | Barcode | Quantity | Price | Discount\n";
	for (auto i = 0; i < n; i++) {
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
	row.total = row.price * row.quantity * (1 + (row.discount / 100));
	return row;
}

void addRowD(regRow*& arr,int &n) {
	n++;
	regRow* arr1 = new regRow[n];
	arr1[0] = fillRow(arr1[0]);
	for (auto i = 1; i < n; i++) {
		arr1[i] = arr[i-1];
	}
}

void insert(regRow* &arr,int &n)
