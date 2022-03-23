
#include <stdio.h>
int main() {
   int number,evenNumber,OddNumber;
   int sum=0;



  do {
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number % 2 == 0  ){

            if(number>0){
                    evenNumber=(number*2)+3;
            //printf("evenNumber: %d\n",evenNumber);


                       sum=sum+evenNumber;

            }


  }else if(number  !=0){
      OddNumber=(number*3)-5;
            //printf("OddNumber: %d\n",OddNumber);

      sum=sum+OddNumber;
  }


  }
  while(number != 0);

  printf("Sum of even and Odd : %d",sum);

  return 0;
}
