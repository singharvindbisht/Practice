#include<iostream>
using namespace std;

int main(){

	int n  = 5;
	for(int i=0;i<n;i++)
	{
		for(int j=n;j>i;j--)
		{
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}