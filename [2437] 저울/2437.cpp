#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int size, n, ans = 0, sum = 0;
	cin >> size;

	vector<int> num(size);

	for (int i = 0; i < size; i++) {
		cin >> n;
		num[i] = n;
	}
	sort(num.begin(), num.end());

	for (n = 0; n < size - 1; n++) {
		if (num[0] != 1)
			break;
		else if (num[n + 1] - num[n] > 1) {
			ans = num[n];
			break;
		}
	}

	ans++;
	while (1) { // 1���� �ö󰡸鼭 �־��� �߷� ������������ Ȯ��, �Ұ����ϸ� ���
		int sum = 0;
		
	}
	cout << ans;
}