#include<iostream>
#include "math.h"
#include "Header.h"

using namespace std;

Complex y(Complex& z)
{
	Complex i(0, 1);
	Complex res = i * 3 * exp(-z) + 2;
	return res;
}

int main() 
{
	setlocale(LC_ALL, "RUS");
	Complex a, res; 
	cout << "������� �������������� � ������ ����� ������������ �����" << endl;
	cin >> a;
	res = y(a);
	cout << res;
}

