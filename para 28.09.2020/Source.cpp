#include <iostream>
#include <iomanip>
#include <cmath>
#include <time.h>
using namespace std;
void main() 
{
	//int rows = 0, cols = 0;
	//cout << "Rows-> ";
	//cin >> rows;
	//cout << "Cols-> ";
	//cin >> cols;
	//int** arr = new int* [rows];
	//for (size_t i = 0; i < rows; i++)
	//{
	//	arr[i] = new int[cols];
	//}
	//for (size_t i = 0; i < rows; i++)
	//{
	//	for (size_t j = 0; j < cols; j++)
	//	{
	//		arr[i][j] = rand() % 100;
	//		cout << setw(5) << arr[i][j];
	//	}
	//	cout << endl;
	//}
	//for (size_t i = 0; i < rows; i++)
	//{
	//	delete[] arr[i];
	//}
	//delete[] arr;




	//char arr[255];
	//cin.getline(arr, 255);
	//cout << sizeof(arr) << endl; //розмір у байтах
	//cout << strlen(arr) << endl; //розмір у байтах для char масивів
	//cout << arr << endl;





	//char arr[255];
	//char arr2[] = "World";
	//cout << arr2 << endl;
	//strcpy_s(arr, arr2); // міняє 1 і 2 масиви, якщо у 1 більше ніж у 2
	//cout << endl;
	//cout << arr << endl;
	//cout << arr2 << endl;




	//char arr[255]="Hi";
	//char arr2[]="1234567890";
	//cout << arr << endl;
	//strcat_s(arr, arr2);//добавляє елементи з 1 масива у другий, 
	//					//якщо у 1 більше ніж у 2
	//cout << arr << endl;




	char arr[255] = "Hi";
	char arr2[] = "1234567890";
	cout << arr << endl;
	strncat_s(arr, arr2, 5);//добавляє елементи з 1 масива у другий, 
							//якщо у 1 більше ніж у 2 (arr,arr2, 5-число елементів які добавить)
	cout << arr << endl;























}