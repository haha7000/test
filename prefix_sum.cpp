#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int suNo, quizNo;
	cin >> suNo >> quizNo;
	int S[100001] = {};
	int start, end, result;

	for(int i = 1; i <= suNo; i++)
	{
		int temp;
		cin >> temp;
		S[i] = S[i-1] + temp;
		cout << S[i] << " ";
	}
	cout << endl;

	for(int i = 0; i <= quizNo; i++)
	{
		cout << "구간 합 범위 입력 : ";
		cin >> start >> end;
		result = S[end] - S[start-1];
		cout << start << " 에서 " << end << " 사이의 구간 합은 : ";

		cout << result << endl;
	}
}
