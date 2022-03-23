#include <stdio.h>
int main() {
  int n, i,tablevalue,oddvalue=0,evenvalue=0,sum=0;
  int allvalue[10]={0};
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; ++i) {
        tablevalue= n * i;
    printf("%d * %d = %d \n", n, i,tablevalue);

  if(i % 2 ==0){
  evenvalue=(tablevalue*3)-1;

  allvalue[i]=evenvalue;
   sum=sum+evenvalue;

  }else{
      oddvalue=(tablevalue*2)-1;

       allvalue[i]=oddvalue;
      sum=sum+oddvalue;
  }


  }
   printf("sum  of the calculated value: %d\n",sum);
   printf("Avarage  of the calculated value: %d\n",sum/10);
    printf("Adjusted Result :");
   for(int j=1 ; j<=10;j++){

          printf("-> %d",allvalue[j]);


   }

  return 0;
}
