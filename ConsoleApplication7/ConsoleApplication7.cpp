// ConsoleApplication7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

#pragma region MyRegion

double func(double a, double b) {
	return a + b;
}

double sub(double a, double b) {
	return a - b;
}

double mult(double a, double b) {
	return a * b;
}

double dew(double a, double b) {
	return a / b;
}

#pragma endregion

#pragma region 13.

double Sqrt(double a) {
	return sqrt(a);
}
double Pow(double a) {
	return pow(a, 3);
}
double Sin(double a) {
	return sin(a);
}

#pragma endregion

double fpow(double x) {
	return pow(x, 2);
}

double fy(double x) {
	return x * 2 + 4;
}

void dip(double a, double b) {

	double(*f[2])(double) = { fy, fpow };
	int choice;
	float x;
	float z = abs((a - b)) / 10;

	cout << "(0. y = x*2+4;\t 1. y = x^2) = ";
	cin >> choice;
	for (double i = a; i < b; i += z)
	{
		x = i;
		cout << "x = " << x << "\ty = " << f[choice](x) << endl;
	}	
}

void main() {

	double a = 2, b = 10;
	cin >> a >> b;
	dip(a, b);

	
#pragma region 13.

	/*double(*f[3])(double) = { Sqrt, Pow, Sin };

	int choice;
	cin >> choice;

	cout << f[choice](36) << endl;*/

#pragma endregion

	

	//	double(*f[4])(double, double) = { sub, func, mult, dew };
	
	/*for (int i = 0; i < 4; i++)
	{
		cout << f[i](4, 5) << endl;
	}*/

	/*int choice;

	while (true)
	{
		cin >> choice;

		if (choice < 0 || choice > 3) break; else cout << f[choice](4, 5) << endl;
	}*/


	

}


#pragma region HT

/*void memorie(int *&a, int size) {
	a = new int[size];
}

void init(int *arr, int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}
}

void print(int *arr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

void del(int *&arr) {
	delete[] arr;
}

void endE(int *&a, int &size, int value) {
	
	int *tmp = new int[size + 1];

	for (int i = 0; i < size; i++)
	{
		tmp[i] = a[i];
	}
	tmp[size] = value;

	size += 1;
	del(a);

	a = tmp;
}


void main() {
	int *a;
	int n = 5;
	memorie(a, 5);
	init(a, 5);
	print(a, 5);
	endE(a, n, 10);
	cout << endl;
	print(a, n);
	del(a);
}*/

#pragma endregion


