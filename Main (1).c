#include <stdio.h>
int main()
{
    int num1,num2,sum,divi,sub,mul,n;
    printf("enter the choice:");
    scanf("%d%d%d",&n,&num1,&num2);
  switch(n)
    {
  case 1:
  sum=num1+num2;
  printf("sum=%d",sum);
  break;
  
  case 2:
  sub=num1-num2;
  printf("sub=%d",sub);
  break;
  
  
  case 3:
  mul=num1*num2;
  printf("mul=%d",mul);
  break;
  
  case 4:
  divi=num1/num2;
  printf("divi=%d",divi);
  break;
  default:
  printf("invalid");
  break;
    }
return 0; }  