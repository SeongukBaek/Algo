#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <algorithm>
//�־��� ������� ���� �����ϴµ� �ʿ��� �ð��� ���� �ּڰ�
//�ð��� ���� �ɸ��� ������ �����ؾ� �ּҰ� ��
using namespace std;

int main()
{
	int N, sum = 0;
	cin >> N;
	vector<int> arr(N);

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr.begin(), arr.end());

	for (int i = 0, j = N; i < N, j > 0; i++, j--)
		sum += arr[i]*j;

	arr.clear();
	cout << sum;
}