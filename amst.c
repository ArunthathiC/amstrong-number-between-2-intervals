#include <stdio.h>
int main()
{
  int start, end, i, temp, num, rem;
  printf("Enter two numbers(intervals): ");
  scanf("%d %d", &n1, &n2);
  printf("Armstrong numbers between %d an %d are: ", n1, n2);
  for(i=start+1; i<end; ++i)
  {
      temp=i;
      num=0;
      while(temp!=0)
      {
          rem=(temp%10);
          num+=rem*rem*rem;
          temp/=10;
      }
      if(i==num)
      {
          printf("%d ",i);
      }
  }
  return 0;
}
