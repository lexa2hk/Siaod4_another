/*
Касса магазина. Структура записи операции по кассе: номер кассы, код товара, количество товара, цена товара, процентная скидка на товар, сумма за товар с учетом скидки.
Операции
!Заполнение записи по одной операции с клавиатуры.
!Вставить записи по отдельной операции, проведенной кассой, в таблицу, располагая ее в начале списка других операций, проведенных этой кассой.
!Вывести список операций, проведенных заданной кассой, с указанием стоимости покупки по каждой операции.
Удалить записи по операциям, проведенным определенной кассой.

*/
#include <iostream>
#include "Header.h"
#include <Windows.h>

using namespace std;
const int N = 100;

int main()
{
    setlocale(LC_ALL, "RUS");

    //TASK 1
    regRow reg[N];
    int n = 0;
    /*addRow(reg, n);
    addRow(reg, n);
    printTable(reg, n);
    insert(reg, n);
    printTable(reg, n);
    deleteID(reg, n);
    printTable(reg, n);
    printTableID(reg, n);*/


    //TASK 2
    n = 0;
    regRow* regD = new regRow[n];
    addRowD(regD, n);
    addRowD(regD, n);
    printTable(regD, n);
    insertD(regD, n);
    printTable(regD, n);
    deleteIDD(regD, n);
    printTable(regD, n);

    //TASK 3
    return 0;
}
