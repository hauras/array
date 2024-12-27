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
	int sum = Sum(num, size); // Sum �Լ� �̿�

	double ave = (double)sum / size; //  �� ��ȯ 
	return ave;
}

void swap(int &a, int &b) // �� ��ȯ �Լ�
{
	int temp;
	temp = a;
	a = b;
	b = temp;

}

// ���� ���� ����Ͽ� ����
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
	cout << "�� : " << sum << " ��� : " << ave << endl;

	cout << "��ȣ �Է� (1) (2) " << endl;

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
		cout << "�ٽ� �Է�" << endl;
	}
	return 0;
}