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




	//char arr[255] = "Hi";
	//char arr2[] = "1234567890";
	//cout << arr << endl;
	//strncat_s(arr, arr2, 5);//добавляє елементи з 1 масива у другий, 
	//						//якщо у 1 більше ніж у 2 (arr,arr2, 5-число елементів які добавить)
	//cout << arr << endl;
	//cout << arr << endl;




	/*char arr[255];
	cin.getline(arr,255);
	int spaces = 0;
	int A=0;
	int a=0;
	int punct = 0;
	for (int i = 0; i < 255; i++)
	{
		if (arr[i]==32)
		{
			spaces++;
		}
		if (arr[i]>=65 && arr[i]<=90)
		{
			A++;
		}
		if (arr[i]>=97 && arr[i]<=122)
		{
			a++;
		}
		if (arr[i]>=33 && arr[i]<=47 || arr[i]>=58 && arr[i]<=64)
		{
			punct++;
		}
	}
	cout << "Spaces -> "<<spaces << endl;
	cout << "A,B,C... -> " << A << endl;
	cout << "a,b,c... -> " << a << endl;
	cout << "?!., -> " << punct << endl;*/

                                              // АБО

	/*char arr[255];
	cin.getline(arr, 255);
	int spaces = 0;
	int A = 0;
	int a = 0;
	int digit = 0;
	for (int i = 0; i < strlen(arr); i++)
	{
		if (isspace(arr[i]))
		{
			spaces++;
		}
		if (isupper(arr[i]))
		{
			A++;
		}
		if (islower(arr[i]))
		{
			a++;
		}
		if (isdigit(arr[i]))
		{
			digit++;
		}
	}
	cout << "Spaces -> " << spaces << endl;
	cout << "A,B,C... -> " << A << endl;
	cout << "a,b,c... -> " << a << endl;
	cout << "1,2,3... -> " << digit << endl;*/






	char arr[255];
	cin.getline(arr, 255);
	int index = 0;
	for (int i = 0; i < strlen(arr); i++)
	{
		if (arr[i]==46)
		{
			index = arr[i];
			index = i+1;
		}
	}
	cout << index << endl;













}