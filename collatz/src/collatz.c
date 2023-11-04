
#include <stdio.h>
 

 int collatz( long long  number ){
      int steps = 0;
       if (number <= 0 ){
          printf("Error(0)\n " );  // αν ο αριθμοσ αρνητικοσ ή μηδεν τυπωσε Error(0)
    }
    else{
     while( number !=1){        
         if (number % 2 == 0){    // αν ο αριθμος ειναι αρτιος τοτε number / 2
          number = number / 2;

        }
     else { number = 3 * number + 1;  // αν ο αριθμος ειναι περριτος τοτε number*3 +1
    } 
      steps++;}
    }
     return steps;

 } 
   

   int main() {
    long long highest_number = 100000000;    // μεγαλυτερο οριο
    long long lowest_number = -100000000;    // μικροτερο οριο

    for (long long i = lowest_number; i <= highest_number; i++) {
        int steps = collatz(i);
        printf("Collatz(%lld) = %d steps\n", i, steps);    // τυπωσε για καθε αριθμο απο το [-100000000,100000000] τα βηματα που κανει μεχρι να φτασει στο 1
    }

    return 0;
}
