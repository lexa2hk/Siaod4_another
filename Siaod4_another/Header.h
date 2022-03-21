#pragma once
#ifndef _HEADER
#define _HEADER

struct regRow {
	int id;
	int barcode;
	int quantity;
	double price;
	double discount;
	double total;
};

void printTable(regRow* arr,int n);
regRow fillRow(regRow row);




void addRowD(regRow* &arr,int &n);

#endif // !_HEADER
