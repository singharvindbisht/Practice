#include<iostream>
using namespace std;

int main(){

	int n  = 5;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
			printf(" ");
		
		for(int k=i;k>=0;k--)
			printf("%d", k+1);
		
		printf("\n");
	}
	return 0;
}