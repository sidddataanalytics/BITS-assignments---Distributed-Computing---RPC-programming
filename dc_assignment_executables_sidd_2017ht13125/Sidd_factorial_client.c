/*client*/
#include<stdlib.h>
#include<stdio.h>
#include"sidd_factorial.h"
int main(int argc, char **argv)
{
	CLIENT *cl;
	factorial_in in;
	factorial_out *out;
	if(argc!=3)
		{
		printf("client <localhost> <integer>");
		exit(1);
		}
	cl=clnt_create(argv[1], FACTORIAL_PROG, FACTORIAL_VERS,"tcp");
	in.arg1 = atol(argv[2]);
	if((out=factorialproc_1(&in,cl))==NULL)
		{
		printf("Error\n");
		exit(1);
		}
	printf("Factorial Result of %s is ->%ld\n",argv[2],out->resl);
	exit(0);
}		
		
