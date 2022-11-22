#include<stdio.h>
void add();
void sub();
main()
{
  int i,fact=1,n;
  printf("\n enter n= ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  printf("\n fact=%d",fact);
  add();
  sub();
}
void add()
{
  
  int a,b,c;
  printf("\n enter the two no");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("\n addtion of two no=%d",c);
}
void sub()
{
  
  int a,b,c;
  printf("\n enter the two no");
  scanf("%d%d",&a,&b);
  c=a-b;
  printf("\n sub of two no=%d",c);
}
  

}
