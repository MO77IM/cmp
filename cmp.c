#include <stdio.h>
#include <math.h>

int main(){
	double a, b, temp;
	printf("Please input two numbers:");
	while(scanf("%lf%lf", &a, &b) != 2)
	{
	  while(getchar() != '\n')
	    continue;
	  printf("You need to input two numbers!\n");
	  printf("please input two numbers:");
	} 
	if((fabs(a-b)<1.0e-6)?true:false)
	  printf("The two numbers is the same!\n");
	else
	{
	  if(a<b)
	    {
		  temp = a;
		  a = b;
		  b = temp;
	    }   
      printf("The larger one is %.6lf, and the smaller one is %.6lf\n", a, b);
    }
	return 0;
}
