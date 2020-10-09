#include<stdio.h>
void main(){
  int n,i,at2[20],temp,j;
  printf("Enter the number of processes:");
  scanf("%d",&n);
  printf("Enter ");
  for(i=0;i<n;i++){
    scanf("%d",&at2[i]);
  }
  for(i=n-2;i>=0;i--){
      for(j=0;j<=i;j++){
        if(at2[j]>at2[j+1]){
           temp=at2[j];
           at2[j]=at2[j+1];
           at2[j+1]=temp;
           printf("%d",at2[i]);
        }
      }

  }
  for(i=0;i<n;i++){
    printf("%d",at2[i]);
  }
}
