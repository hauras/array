#include <iostream>
using namespace std;


int Sum(int num[], int size)
{
	int sum = 0;
	for (int i= 0; i < size; i++)
	{
		sum += num[i];
	}
	return sum;
}

double Ave(int num[], int size)
{
	int sum = Sum(num, size); // Sum 함수 이용

	double ave = (double)sum / size; //  형 변환 
	return ave;
}

void swap(int &a, int &b) // 값 교환 함수
{
	int temp;
	temp = a;
	a = b;
	b = temp;

}

// 버블 정렬 사용하여 정렬
void AscSort(int num[], int size) 
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++) 
		{
			if (num[j] > num[j + 1])
			{
				swap(num[j], num[j + 1]);
			}
		}
	}
}

void DescSort(int num[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (num[j] < num[j + 1]) 
			{
				swap(num[j], num[j + 1]);
			}
		}
	}
}

int main()
{
	const int size = 5;
	int num[size];

	for (int i = 0; i < size; i++)
	{
		cin >> num[i];
	}

	int sum = Sum(num, size);
	double ave = Ave(num, size);
	cout << "합 : " << sum << " 평균 : " << ave << endl;

	cout << "번호 입력 (1) (2) " << endl;

	int select;
	cin >> select;
	if (select == 1)
	{
		AscSort(num, size);
		for (int i = 0; i < size; i++)
		{
			cout << num[i] << " ";
		}
		cout << "\n";
	}
	else if (select == 2)
	{
		DescSort(num, size);
		for (int i = 0; i < size; i++)
		{
			cout << num[i] << " ";
			
		}
		cout << "\n";
	}
	else
	{
		cout << "다시 입력" << endl;
	}
	return 0;
}