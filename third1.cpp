#include<iostream>
using namespace std;

int main(){

	int n  = 5;
	for(int i=1;i<n;i++)
	{
		for(int k=n-1;k>i;k--)
		{
			printf(" ");
		}
		for(int j=0;j<(2*i-1);j++)
		{
			printf("%d", j+1);
		}
		printf("\n");
	}
	return 0;
}