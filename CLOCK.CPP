#include<stdio.h>
#include<conio.h>

int main()

{
 int h=0,m=0,s=0,i;
 
	printf("\n\n\t\t please enter time format in HH:MM:SS ");
	scanf("%d:%d:%d",&h,&m,&s);
	 start :
	for(h;m<24;h++)
	{
	   for(m;m<60;m++)

	   {
	      for(s;s<60;s++)
	      {
		
		 printf("\n\n\n \t\t %d : %d : %d ",h,m,s);

	       if(h<12)
		 {
		    printf(" AM ");
		 }
	       else
		 {
			 printf(" PM ");
		 }
		 printf(" \n\n\n \t\t 21 JUNE 2021 [ monday ]");
		for (double i=0;i<3619999;i++)
		i++;
		i--;
	      }
	      s=0;
	   }
	   m=0;
	}
	h=0;
	goto start;
   getch();
return 0;
  }