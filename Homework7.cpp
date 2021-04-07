#include <iostream>
#include "mylib.h"
; using namespace std;


/*
1. Создайте проект из 2х cpp файлов и заголовочного(main.cpp, mylib.cpp, mylib.h) во втором модуле mylib объявить 3 функции: для инициализации
массива(типа float), печати его на экран и подсчета количества отрицательных и положительных элементов.
Вызывайте эти 3 - и функции из main для работы с массивом.
2. Описать макрокоманду(через директиву define), проверяющую, входит ли переданное ей число(введенное с клавиатуры)
в диапазон от нуля(включительно) до переданного ей второго аргумента(исключительно)
и возвращает true или false, вывести на экран «true» или «false».
3. Задайте массив типа int.Пусть его размер задается через директиву препроцессора #define.
Инициализируйте его через ввод с клавиатуры.Напишите для него свою функцию сортировки(например Пузырьком).
Реализуйте перестановку элементов как макрокоманду SwapINT(a, b).Вызывайте ее из цикла сортировки.
4. * Объявить структуру Сотрудник с различными полями.Сделайте для нее побайтовое выравнивание
с помощью директивы pragma pack.Выделите динамически переменную этого типа.Инициализируйте ее.
Выведите ее на экран и ее размер с помощью sizeof.Сохраните эту структуру в текстовый файл.
5. * Сделайте задание 1 добавив свой неймспейс во втором модуле(первое задание тогда можно не делать).
*/

int task1()
{
	cout << "Task 1" << endl;
	
	const int size = 15;

	float arr[size];

	MyLib:: pullarray(arr, size);
	MyLib:: printarray(arr, size);
	MyLib:: calcplusminus(arr, size);

	return 0;
};

int task2()
{

#define TEST(a,b) ((a>=0 && a<b) ? "true" : "false");

	cout << "Task 2" << endl;
	int num;
	int diap;
	cout << "enter number" << endl;
	cin >> num;
	cout << "enter number" << endl; 
	cin >> diap;
	cout << "in range - " << TEST(num, diap) cout << endl ;

	return 0;

}

int task3()
{
#define ARRSIZE 10
	cout << "Task 3" << endl;
	float arr[ARRSIZE];

	cout << "Enter " << ARRSIZE << " number" << endl;

	for (int i = 0; i < ARRSIZE; i++)
		cin >> arr[i];
#define SWAPINT(a,b) swap(a,b)

	MyLib::printarray(arr, ARRSIZE);

	for (int i = 1; i < ARRSIZE; i++)
		for (int j = 0; j < ARRSIZE - i; j++)
			if (arr[j] > arr[j + 1])
				SWAPINT(arr[j], arr[j + 1]);

	MyLib::printarray(arr, ARRSIZE);

		/*
		int x = 5;
		int y = 6;
		cout << x << y << endl;
		SWAP(x, y);
		cout << x << y << endl;
		*/
		return 0;
}

int main()
{
	task1();
	task2();
	task3();
	return 0;
}
