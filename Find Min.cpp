#include <iostream>
using namespace std;

void findMin()
{
	int N,n,min;
		cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> n;
		if (i == 1)
		{min = n;}
	    else if (min > n)
		{min = n;}
    }
    cout << min;
}

int main()
{
	findMin();
}
