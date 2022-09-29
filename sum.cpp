#include <iostream>
#include<vector>
using namespace std;
const int N=100;
 
//countNumberOfTimesTargetIsInDiagonal containing row, col
int countNumberOfTimesTargetIsInDiagonal(int n, vector<vector<int>>arr, int row, int col, int target)
{
	int ans=0;
	int i=row,j=col,k=row+1,m=col+1;
	while (/* I IV*/i>=0&&j>=0||k<=n-1&&m<=n-1)
	{
		if (arr[i][j]==target)
		{
			ans++;
		}
		i--,j--;
		if (arr[k][m]==target)
		{
			ans++;
		}
		k++,m++;
	}
	int a=row,b=col,c=row-1,d=col-1;
	while (/* II III */a>=0&&b<=n-1||c<=n-1&&d>=0)
	{
		if (arr[a][b]==target)
		{
			ans++;
		}
		a--,b++;
		if (arr[c][d]==target)
		{
			ans++;
		}
		c++,d--;
	}
	return ans;
}
 
int main() 
{
	int n;
	cin>>n;
	vector<vector<int>> A( n , vector<int> (n));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>A[i][j];
		}
	}
	cout<<"Ans: "<<countNumberOfTimesTargetIsInDiagonal(n, A, 1, 2, 2)<<"\n";
	return 0;
} 