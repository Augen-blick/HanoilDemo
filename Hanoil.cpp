#include <iostream>
using namespace std;

void Hanoil(int n, char X, char Y, char Z);

int main()
{
	int n;
	char X = 'X', Y = 'Y', Z = 'Z';

	cout << "�����뺺ŵ������Ƭ��Ŀ��" << endl;
	cin >> n;

	Hanoil(n, X, Y, Z);
}

void Hanoil(int n, char X, char Y, char Z)
{
	if (n == 1)									//ֻ��һ����Ƭʱ
		cout << "����" << n << "����Ƭ��" << X << "�ƶ���" << Z << endl;
	else										//������������Ƭ�����
	{
		Hanoil(n - 1, X, Z, Y);
		cout << "����" << n << "����Ƭ��" << X << "�ƶ���" << Z << endl;
		Hanoil(n - 1, Y, X, Z);
	}
}