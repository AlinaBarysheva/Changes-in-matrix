//Условие: поменять любые два столбца в матрицы местами.(столбцы выбирает сам пользователь)


//Решение:
#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, m;
	cout << "Введите размерность матрицы.Сначала введите номер строки,затем номер столбца: " << endl;
	cin >> n >> m;
	int **mas = new int*[n];        //создаём  двумерный массив(матрицу)
	for (int i = 0;i<n;i++)
		mas[i] = new int[m];

	for (int i = 0;i<n;i++)         //заполняем матрицу элементами с помощью функции "Random"
		for (int j = 0;j<m;j++) {
			mas[i][j] = ((rand() % 25));
		}

	cout << "Вот Ваша матрица: " << endl;
	for (int i = 0;i<n;i++) {                    //выводим матрицу на экран
		for (int j = 0;j<m;j++) {
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}

	int newmas;
	int u, v;                                  //вводим новые переменные для идексации столбцов,которые надо поменять местами
	cout << "Введите номера столбцов,которые хотите поменять местами  " << endl;
	cin >> u >> v;
	u = u - 1;
	v = v - 1;
	for (int i = 0;i<n;i++) {

		newmas = mas[i][u];
		mas[i][u] = mas[i][v];              //заводим новый массив(матрицу) для хранения матрицы с помененными столбцами
		mas[i][v] = newmas;
	}

	cout << "Вот Ваша матрица с помененными столбцами " << endl;
	for (int i = 0;i<n;i++) {
		for (int j = 0;j<m;j++) {                      //выводим новую матрицу на экран
			cout << mas[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;






	system("PAUSE");
	return 0;
}
