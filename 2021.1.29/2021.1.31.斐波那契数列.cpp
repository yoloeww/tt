<<<<<<< HEAD
# include <stdio.h>
int main(void)
{
	int a=1,b=1,c=1,d=1;
    for(int i=3;d<=10;i++)
	{ 
     c=a+b;
	 a=b;
	 b=c;
#if 0
	 if(c%3==0)
	 {
	   printf("%d\n",c);
       ++d;
	 }
#else
	 if(c%2!=0)
	 {
       printf("%d\n",c);
	   ++d;
	 }
#endif
	}
	return 0;
=======
# include <stdio.h>
int main(void)
{
	int a=1,b=1,c=1,d=1;
    for(int i=3;d<=10;i++)
	{ 
     c=a+b;
	 a=b;
	 b=c;
#if 0
	 if(c%3==0)
	 {
	   printf("%d\n",c);
       ++d;
	 }
#else
	 if(c%2!=0)
	 {
       printf("%d\n",c);
	   ++d;
	 }
#endif
	}
	return 0;
>>>>>>> 92a2c7ed464375980d2ef8487fbb7690c7ea79d7
}