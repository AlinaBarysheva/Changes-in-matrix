#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, m;
	cout << "������� ����������� �������,������� ���-�� �����, � ����� ���-�� ��������  " << endl;
	cin >> n >> m;
	int **mas = new int*[n];
	for (int i = 0;i<n;i++)
		mas[i] = new int[m];

	for (int i = 0;i<n;i++)
		for (int j = 0;j<m;j++) {
			mas[i][j] = ((rand() % 25));
		}

	cout << "�������: " << endl;
	for (int i = 0;i<n;i++) {
		for (int j = 0;j<m;j++) {
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}

	int newmas;
	int u, v;
	cout << "������� ������ ��������,������� ������ �������� �������  " << endl;
	cin >> u >> v;
	u = u - 1;
	v = v - 1;
	for (int i = 0;i<n;i++) {

		newmas = mas[i][u];
		mas[i][u] = mas[i][v];
		mas[i][v] = newmas;
	}

	cout << "��� ���� ������� " << endl;
	for (int i = 0;i<n;i++) {
		for (int j = 0;j<m;j++) {
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;






	system("PAUSE");
	return 0;
}