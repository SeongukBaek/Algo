#include <iostream>
#include <cstring>
#include <cstdio>
//�־����� ī�� �� 3���� �̾� 
//�־��� ���ڸ� ���� �ʴ� �ִ��� ���� ���ϴ� ����
//->���� for������ �־��� ���ڸ� ���� �����鼭 �ִ��� ���� max�� ��� ����
using namespace std;

void countsum(int* list, int size, int sum)
{
	int max = 0;

	for (int i = 0; i < size-2; i++)
	{
		for (int j = i + 1; j < size-1; j++)
		{
			for (int k = j + 1; k < size; k++)
			{
				if ((list[i]+list[j]+list[k]) >= max && sum >= (list[i] + list[j] + list[k]))
					max = list[i] + list[j] + list[k];
			}
		}
	}
	cout << max;
}

int main()
{
	int cardN, sum;
	int inputC[100];

	cin >> cardN >> sum;

	for (int i = 0; i < cardN; i++)
		cin >> inputC[i];

	countsum(inputC, cardN, sum);
	return 0;
}