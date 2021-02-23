#include<iostream>
using namespace std;

int main(){

	int n  = 5;
	for(int i=0;i<n-1;i++)
	{
		for(int k=n-1;k>i;k--)
		{
			printf(" ");
		}
		int temp = 2*i+1;
		int a = temp/2+1;
		for(int k=1;k<=temp;k++)
		{
			if(k<=a){
				printf("%d", k);
			}
			else{
				printf("%d", --a);
				
			}
		}
		

		printf("\n");
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
			printf(" ");
		int temp = n*2-(i*2+1);
		int a = temp/2+1;
		int temp2 = a;
		for(int k=1;k<=temp;k++)
		{

			if(k<=a){
				printf("%d", k);
			}
			else{
				printf("%d", --a);
				
			}
		}
		
		printf("\n");
	}

	return 0;
}