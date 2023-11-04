
#include <stdio.h>
 

 int collatz( long long  number ){
      int steps = 0;
       if (number <= 0 ){
          printf("Error(0)\n " );
    }
    else{
     while( number !=1){
         if (number % 2 == 0){
          number = number / 2;

        }
     else { number = 3 * number + 1;
    } 
      steps++;}
    }
     return steps;

 } 
   

   int main() {
    long long highest_number = 100000000;
    long long lowest_number = -100000000;

    for (long long i = lowest_number; i <= highest_number; i++) {
        int steps = collatz(i);
        printf("Collatz(%lld) = %d steps\n", i, steps);
    }

    return 0;
}
