/* 	
	@author 杜博识Dubos dubos@foxmail.com
	luogu P1909 买铅笔（NOIP普及组2016） 
*/

#include <iostream>

using namespace std;

int main ()
{
	int n, i, result=10000*10000; //根据已知条件，最多花10^10元钱 
	cin>>n;
	
	int num [3], price [3], pack [3], cost [3];
	for (i=0; i<3; i++)
	{
		cin>>num[i]>>price[i];
		pack[i] = n/num[i];
		if (n%num[i]!=0) pack[i]++;
		cost[i] = pack[i]*price[i];
		if (cost[i]<result) result=cost[i];
	}

	cout<<result;
	
	return 0;
}
