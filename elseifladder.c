// program for else if ladder 
#include <stdio.h>

int main()
{
  float m1,m2,m3,m4,total,per;
  char grade;
  printf("enter the marks of 4 subjects");
  scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
  total=m1+m2+m3+m4;
  per=total/4;
  if(per>=85)
  grade='A';
  else if(per>=70)
  grade='B';
  else if(per>=55)
  grade='c';
  else if(per>=40)
  grade='D';
  else
  grade='E';
  printf("percentage is %f,grade is %c\n",per,grade);
  return 0;
  
   }
