#include <stdio.h>

int main(){
      int num1;
      printf("please enter your number: ");
      scanf("%d", &num1);

      if (num1 % 2 == 0)
      {
            printf("even number");
      }else{
            printf("odd number");
      }
      return 0;
}