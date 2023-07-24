#include <stdio.h>
int add(int n,int m);
int main()
{
  int n,m;
  int sum;
  printf("Enter a two number including spapce:");
  scanf("%d %d",&n,&m);
  sum=add(n,m);
  printf("Addition of two number is:%d",sum);
  
{
int add(int n,int m){
  return n+m;
}
