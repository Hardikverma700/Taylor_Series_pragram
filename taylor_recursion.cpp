// lets code taylor series using recursion

#include <iostream>
using namespace std;
double e(int x, int n)
{
	static double p = 1, f = 1;
	if(n == 0)
		return 1;
	double r = e(x, n - 1);
	p = p * x;
	f = f * n;
	return r + p/f;
}
int main()
{
	cout<<e(1, 10);
	return 0;
}
