/*server.c*/

#include<stdio.h>
#include"sidd_factorial.h"
factorial_out * factorialproc_1_svc(factorial_in *inp, struct svc_req *rqstp)
	{
	static factorial_out outp;
	int i;
	i = inp->arg1;
	outp.resl = 1;
	while (i !=0)
	{
	outp.resl = outp.resl*i;
	i = i-1;
	}
	return(&outp);
	}



