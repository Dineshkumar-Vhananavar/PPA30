#include<stdio.h>
int Addition(int, int);    // Addition naava cha ek function yenar jo 2 parameters ghenar anni integer type return karnar // Called Forward declaration or Function declaration or Function prototype
int main()
{
	int A = 10;
	int B = 11;
	int Ret = 0;

	Ret = Addition(A,B);
	printf("%d",Ret);
	return 0;
}

int Addition(int No1, int No2)
{
	int Ans = 0;
	Ans = No1 + No2;

	return Ans;
}