#include<iostream>
#include<windows.h>
#include<fstream>
#include<string>
using namespace std;
bool check(int d, int m, int y)
{
	
	if (m == 1) //ÿíâàðü
	{
		if (d <= 0 || d > 31)
		{
			return false;
		}
	}
	else if (m == 2)
	{ //ôåâðàëü
		if (y % 4 == 0)
		{
			if (d <= 0 || d > 29)
			{
				return false;
			}
		}
		else
		{
			if (d <= 0 || d > 28)
			{
				return false;
			}
		}
	}
	else if (m == 3)
	{//ìàðò
		if (d <= 0 || d > 31)
		{
			return false;
		}
	}
	else if (m == 4)
	{//àïðåëü
		if (d <= 0 || d > 30)
		{
			return false;
		}
	}
	else if (m == 5)
	{//ìàé
		if (d <= 0 || d > 31)
		{
			return false;
		}
	}
	else if (m == 6)
	{//èþíü
		if (d <= 0 || d > 30)
		{
			return false;
		}
	}
	else if (m == 7)
	{//èþëü
		if (d <= 0 || d > 31)
		{
			return false;
		}
	}
	if (m == 8)
	{//àâãóñò
		if (d <= 0 || d > 31)
		{
			return false;
		}
	}
	if (m == 9)
	{//ñåíòÿáðü
		if (d <= 0 || d > 30)
		{
			return false;
		}
	}
	if (m == 10 )
	{//îêòÿáðü
		if (d <= 0 || d > 31)
		{
			return false;
		}
	}
	if (m == 11)
	{//íîÿáðü
		if (d <= 0 || d > 30)
		{
			return false;
		}
	}
	if (m == 12)
	{//äåêàáðü
		if (d <= 0 || d > 31)
		{
			return false;
		}
	}

	
	return true;
}
	

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ofstream put;
	put.open("file.cpp"); // îòêðûâàåì ôàéë // 

	if (put.is_open())
	{
		cout << "Approved";
	}

	string data1, data2;
	int y1 = 0, m1 = 0, d1 = 0, y2 = 0, m2 = 0, d2 = 0;
	int x = 0,n = 0;
	while (y1 < 0 || m1 <= 0 || d1 <= 0 || y2 < y1 || (y2 == y1 && m2 < m1) || (y2 == y1 && m2 == m1 && d2 < d1))
	{
		data1.clear();
		data2.clear();
		while (x <= 0 || x > 3)
		{
			cout << "\nÂâåä³òü ñïîñ³á óâåäåííÿ äàòè(1 - äåíü ì³ñÿöü ð³ê; 2 - ð³ê ì³ñÿöü äåíü; 3 - ì³ñÿöü äåíü ð³ê):	";
			cin >> x;
		}
		while (data1.size() != 8)
		{
			cout << "\nÂâåä³òü ïåðøó äàòó ";
			cin >> data1;
		}
	
		while (data2.size() != 8)
		{
			cout << "\nÂâåä³òü äðóãó äàòó ";
			cin >> data2;
		}
		if (x == 1)
		{
			d1 = stoi(data1.substr(0, 2));
			m1 = stoi(data1.substr(2, 2));
			y1 = stoi(data1.substr(4, 4));
			if (check(d1, m1, y1) == false) 
			{
				d1 = 0;
				m1 = 0;
				y1 = 0;
			}
			cout << d1 << ' ' << m1 << ' ' << y1 << endl;
			d2 = stoi(data2.substr(0, 2));
			m2 = stoi(data2.substr(2, 2));
			y2 = stoi(data2.substr(4, 4));
			if (check(d2, m2, y2) == false)
			{
				d2 = 0;
				m2 = 0;
				y2 = 0;
			}
			cout << d2 << ' ' << m2 << ' ' << y2 << endl;
			
		}
		else if (x == 2)
		{
			y1 = stoi(data1.substr(0, 4));
			m1 = stoi(data1.substr(4, 2));
			d1 = stoi(data1.substr(6, 2));
			if (check(d1, m1, y1) == false)
			{
				d1 = 0;
				m1 = 0;
				y1 = 0;
			}
			cout << d1 << ' ' << m1 << ' ' << y1 << endl;
			y2 = stoi(data2.substr(0, 4));
			m2 = stoi(data2.substr(4, 2));
			d2 = stoi(data2.substr(6, 2));
			if (check(d2, m2, y2) == false)
			{
				d2 = 0;
				m2 = 0;
				y2 = 0;
			};
			cout << d2 << ' ' << m2 << ' ' << y2 << endl;
		}
		else
		{
			m1 = stoi(data1.substr(0, 2));
			d1 = stoi(data1.substr(2, 2));
			y1 = stoi(data1.substr(4, 4));
			if (check(d1, m1, y1) == false)
			{
				d1 = 0;
				m1 = 0;
				y1 = 0;
			}
			cout << d1 << ' ' << m1 << ' ' << y1 << endl;
			m2 = stoi(data2.substr(0, 2));
			d2 = stoi(data2.substr(2, 2));
			y2 = stoi(data2.substr(4, 4));
			if (check(d2, m2, y2) == false)
			{
				d2 = 0;
				m2 = 0;
				y2 = 0;
			};
			cout << d2 << ' ' << m2 << ' ' << y2 << endl;
		}
	}
	put << d1 << m1 << y1 << "\n";
	while (!(y1 == y2 && m1 == m2 && d1 == d2))
	{
		d1++;
		n++;
		if (check(d1, m1, y1) == false)
		{
			d1 = 1;
			m1++;
			if (m1 > 12)
			{
				m1 = 1;
				y1++;
			}	
		}
		put << d1  << m1  << y1 << "\n";
		

	}
	put << "Ç ïåðøî¿ äàòè ïðîéøëî "<< n << " äí³â.";
	return 0;
}
