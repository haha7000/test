#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int N, M;
	cin >> N >> M;

	vector<vector<int> > A(N + 1, vector<int>(N + 1, 0));
	vector<vector<int> > D(N + 1, vector<int>(N + 1, 0));
	int aa = A.size();
	cout << "벡터 값 : " << aa << endl;

	for (int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= N; j++)
		{
			cin >> A[i][j];
			D[i][j] = D[i][j-1] + D[i-1][j] - D[i-1][j-1] + A[i][j];
			cout << " 값 : " << D[i][j];
		}
		cout << endl;
	}
}

