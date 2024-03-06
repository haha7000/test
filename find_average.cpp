#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int M = 0;
	int sum = 0;

	vector<int> k(n);
	for(int i = 0; i<n; i++)
	{
		cin >> k[i];
		if(k[i] > M)
		{
			M = k[i];
		}
		sum += k[i];
	}
	cout << "최대값 : " << M << endl;
	cout << "합계 : " << sum << endl;

	int what;
	what = sum*100.0 / M / n;
	cout << "가짜 점수 : " << what << endl;

	return 0;
}
