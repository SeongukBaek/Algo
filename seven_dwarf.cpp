#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
//9���߿��� 7���� ã�� ����
//-> 9���� �� ���� �� �ƴ� 2���� ã�Ƴ���
using namespace std;

int sum(int* list, int size) //100�� �Ǵ� Ű���� �з��ϴ� �Լ�
{
	int sum = 0;
	int temp;
	int cnt = 0, idx = 0;
	for (int i = 0; i < size; i++)
		sum += list[i];
	for (int i = 0; i < size-1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (sum - list[i] - list[j] == 100)
			{
				for (int k = 0; k < size; k++)
				{
					if (k != i && k != j)
						cout << list[k] << "\n";
				}
				return 0;
			}
		}
	}
}

void sort(int *list, int l, int r) //100�� �Ǵ� Ű�鸸 ��Ƽ� �����ϴ� �Լ�
// �� ���� ����غ���
{
	int pivot = list[l];
	int listl = l, listr = r;
	while (l < r)
	{
		while (pivot <= list[r] && l < r)
			r--;
		if (l > r)
			break;
		while (pivot >= list[l] && l < r)
			l++;
		if (l > r)
			break;
		swap(list[l], list[r]);
	}
	swap(list[listl], list[l]);
	if (listl < l)
		sort(list, listl, l - 1);
	if (listr > r)
		sort(list, l + 1, listr);
}

int main()
{
	int tall[9];
	int index;
	for (int i = 0; i < 9; i++)
		cin >> tall[i];
	sort(tall,0,8);
	sum(tall, sizeof(tall) / sizeof(int));
	
	return 0;
}