// Sửa bài toán cái túi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<math.h>
#include<string>

using namespace std;

class dv
{
public:
	string ten;
	float gt, kl, tp;
};

int _tmain(int argc, _TCHAR* argv[])
{

	/*dv a[100], dc;
	FILE*f;
	f = fopen("dulieu.inp", "r");*/

	dv a[100];
	dv tam;
	int i, j, m;   // m la so luong do vat
	float n, kt = 0, g = 0; //n la can nang toi da
	cout << "Nhap So Luong Do Vat:";
	cin >> m;
	for (i = 0; i < m; i++)
	{
		cout << endl << "Do Vat:" << i+1 << endl << "Ten:";
		cin.ignore();
		getline(cin, a[i].ten);
		cout << "Gia Tri:";
		cin >> a[i].gt;
		cout << "Khoi Luong:";
		cin >> a[i].kl;
		a[i].tp = a[i].gt / a[i].kl;
	}
	cout << endl << "Can nang toi da cua tui:";
	cin >> n;
	for (i = 0; i < m; i++)
	{
		if (a[i].tp < 0 || n <= 0)
		{
			kt++;
			printf("du lieu sai");
			break;
		}
	}
	if (kt == 0)
	{
		for (i = 0; i < m-1 ; i++)//sap xep do vat theo ti so
		{
			for (j = 1; j < m; j++)
			if (a[i].tp < a[j].tp)
			{
				tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
	}
	cout << endl << "Do Vat sau khi sap xep:";
	for (i = 0; i < m; i++) //chon do vat cho vao tui theo thuat toan
		cout << a[i].ten << " -> ";
	cout << endl << "Do cho vao tui la: ";
	for (i = 0; i < m; i++)
	{
		if ((kt + a[i].kl) <= n)
		{
			kt += a[i].kl; //khoi luong mã cho vao tui
			g += a[i].gt;  //gia tri lon nhat thu dc
			cout << a[i].ten << "  ";
		}
		else break;
	}
	cout << endl << "Khoi luong lon nhat mang di la:" << kt << endl;
	cout << "Gia tri lon nhat la:" << g << endl;
	system("pause");
	return 0;
}
	
