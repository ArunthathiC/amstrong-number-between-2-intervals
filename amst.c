#include<stdio.h>
void main(){
  int start,end,i,r,res=0,temp;
  printf("Enter the starting and ending interval:");
  scanf("%d%d",&start,&end);
  for(i=start;i<=end;i++){
   temp=i;
   while(i!=0){
    r=i%10;
    res+=r*r*r;
    i=i/10;
   }
    if(temp==res)
      printf("%d\n",temp);
  }
}
