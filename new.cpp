#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
//���Ի�� ä���ϴµ� �� �������� ������ 
//�ٸ� �������� ������ ���� ����, ���� �Ѵ� �������ٸ� ���� X
//vector<vector<int>> arr(N, vector<int>(2, 0));��
//vector<pair<int, int>> arr(N);�� ����
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) //�����ɻ缺���� ���� �������� ����
{
	if (a.first != b.first)
		return a.first < b.first;
	return a.second < b.second;
}

int main()
{
	int T, N, cnt = 1, rank = 0, a, b;
	
	cin >> T;
	vector<int> answer; //��� ������ �迭
	while (T--)
	{
		cin >> N;

		vector<pair<int, int>> arr(N);

		for (int i = 0; i < N; i++)
		{
			cin >> a >> b;
			arr[i] = { a,b };
		}

		sort(arr.begin(), arr.end(), comp);

		if (arr[0].first == 1 && arr[0].second == 1) //���� �� ù ���� 1 1�̶�� �� �̻��� ��� ���� X
			answer.push_back(1);
		else
		{
			rank = arr[0].second; //���� �� ù��° ���� �����ڴ� �հ�, �� ���� �������� �������� ������ ����
			for (int i = 1; i < N; i++)
				if (rank >= arr[i].second)
				{
					rank = arr[i].second;
					cnt++;
				}
			answer.push_back(cnt);
			cnt = 1;
		}			
		arr.clear();
	}
	for (int i = 0; i < answer.size(); i++)
		cout << answer[i] << endl;
}