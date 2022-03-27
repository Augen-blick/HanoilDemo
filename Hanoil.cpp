#include <iostream>
using namespace std;

void Hanoil(int n, char X, char Y, char Z);

int main()
{
	int n;
	char X = 'X', Y = 'Y', Z = 'Z';

	cout << "请输入汉诺塔的盘片数目：" << endl;
	cin >> n;

	Hanoil(n, X, Y, Z);
}

void Hanoil(int n, char X, char Y, char Z)
{
	if (n == 1)									//只有一个盘片时
		cout << "将第" << n << "个盘片从" << X << "移动到" << Z << endl;
	else										//有两个或多个盘片的情况
	{
		Hanoil(n - 1, X, Z, Y);
		cout << "将第" << n << "个盘片从" << X << "移动到" << Z << endl;
		Hanoil(n - 1, Y, X, Z);
	}
}