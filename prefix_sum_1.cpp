#include <iostream>
#include <vector>
using namespace std;
int main()

	int n, m, result;
	int S[100001] = {};
	int temp;
	cin >> n >> m;

	for(int i = 1; i <= n; i++)
	{
		cin >> temp;
		S[i] = S[i-1] + temp;
	}

	for(int i = 1; i<=n; i++)
	{
		cout << S[i] << " ";
	}
	
	int start, end;
	
	for(int i = 0; i<m; i++)
	{
		cin >> start >> end;
		result = S[end] - S[start-1];
		cout << result << endl;
	}

	cout << S[2] ;
}

