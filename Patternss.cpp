#include<iostream>
#include<cmath>
using namespace std;
int main()
{

	//triangle
	cout << "123451234512345" << endl;
	int n = 5;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			if (i == n - 1 || j == 0 || j == 2 * i)
				cout << "*";
			else
				cout << " ";

		}
		cout << endl;
	}
	int n1 = 5;
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j <= n1 - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= i;j++)
		{
			cout << j + 1;
		}
		for (int j = i; j >= 1; j--)
		{
			cout << j;
		}
		cout << endl;
	}



	int h = 5;
	int w = 4;
	//triangle
	for (int i = 0; i < h; i++)
	{

		for (int j = 0; j < h - i - 1; j++)
		{

			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 1; i < h; i++)
	{

		for (int j = 0; j < i; j++)
		{

			cout << " ";
		}
		for (int j = 0; j < 2 * (h - i) - 1; j++)
		{
			if (i == 0 || j == 0 || j == 2 * (h - i) - 2)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}

	//int r = 10;
	//for (int i = 0; i <= r; i++)
	//{
	// for (int j = -10; j <= r; j++)
	// {
	// double d = sqrt(i * i + j * j);
	//
	// if (abs(d - r) < 0.5)
	// {
	// cout << "*";
	// }
	// else
	// {
	// cout << " ";
	// }
	//
	//
	// }
	// cout << endl;
	//}
	/*int p1,n;
	cout << "enter p1and p2";
	cin >> p1*/;
	//cout << endl;
	//cout << "Enter nth";
	//cin >> n;
	//if (n == 1)
	// cur = p1;
	//else if (n == 2)
	// cur = p2;
	//else
	//{
	//
	// for (count = 3; count <= n; count++)
	// {
	// cur = p1 + p2;
	// p1 = p2;
	// p2 = cur;
	// }
	//}
	//cout << cur;
	//int n = 8;
	//
	//int p1 = 0;
	//int p2 = 1;
	//for (int i = 0; i < n; i++)
	//{
	// cout << p1;
	// int s = p1 + p2;
	// p1 = p2;
	// p2 = s;
	/*int m = (p1 < p2) ? p1 : p2;
	for (int i = 1; i <= m; i++)
	{
	if (p1 % i == 0 && p2 % i == 0)
	hcf = i;
	}
	int l = 1;
	l=(p1 * p2)/hcf;
	cout << l << "              " << hcf;*/
	//bool f = true;
	//for (int i = 2; i < p1; i++)
	//{
	// if (p1 % i == 0)
	// f = false;
	//}
	//if (f == true)
	// cout << "PRIME";
	//else if (f == false)
	// cout << "Not prime";



	cout << endl;
	cout << endl;
	//11
	for (int i = 1; i <= 5; i++)
	{

		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}


	cout << endl;
	cout << endl;
	//222222
	for (int i = 5; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i;
		}
		cout << endl;
	}

	cout << endl;
	cout << endl;
	//33333333
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5 - i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{

			cout << i;

		}
		cout << endl;
	}


	cout << endl;
	cout << endl;
	//44444444444
	for (int i = 5; i >= 1; i--)
	{
		for (int j = 1; j <= 5 - i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= i; j++)
		{

			cout << i;

		}
		cout << endl;
	}


	cout << endl;
	cout << endl;
	//upper tri
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5 - i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= 2 * i - 1; j++)
		{
			cout << i;
		}
		cout << endl;
	}


	cout << endl;
	cout << endl;
	/*lower  reiii*/
	for (int i = 4; i >= 1; i--)
	{
		for (int j = 1; j <= 5 - i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= 2 * i; j++)
		{
			cout << i;
		}
		cout << endl;
	}


	cout << endl;
	cout << endl;
	//halllooww
	for (int i = 4; i >= 1; i--)
	{
		for (int j = 1; j <= 5 - i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= 2 * i; j++)
		{
			if (i == 4 || j == 1 || j == 2 * i - 1)
				cout << i;
			else
				cout << " ";
		}
		cout << endl;
	}
	cout << endl;
	//holllooww uppperrrrrrr
	int n2 = 5;
	for (int i = 0; i < n2; i++)
	{
		for (int j = 0; j <= n2 - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			if (i == n2 - 1 || j == 0 || j == 2 * i)
				cout << "*";
			else
				cout << " ";

		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	//hoolow star

	for (int i = 5; i >= 1; i--)
	{
		for (int j = 1; j <= 5 - i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j <= 2 * i; j++)
		{
			if (i == 5 || j == 1 || j == 2 * i - 1)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}

	cout << endl;
	cout << endl;
	//bad tri
	for (int i = 0; i < n2; i++)
	{
		for (int j = 0; j <= n2 - i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << j + 1;
		}
		for (int j = i; j >= 1; j--)
		{
			cout << j;
		}
		cout << endl;
	}
}