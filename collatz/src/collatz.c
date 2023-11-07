#include<stdio.h>
#include <stdlib.h>

 int collatz(int n, int max_steps) {
   int steps = 1;
   while(n != 1 ){
    if(n % 2 ==0){
      n = n / 2;
    }
    else{
      n = 3 * n + 1;
    }
    steps++;

 }
  return steps;
 }

 int main(int argc , char* argv[]){
   int lowest_number = atoi(argv[1]);
   int highest_number = atoi(argv[2]);
    if(lowest_number > -100000000 && lowest_number < 0 || highest_number > 100000000 ){
        printf("0/n");      
  }
 int max_steps = 0;
 int current_number;

  if(lowest_number < highest_number) {
    for(int i = lowest_number; i<= highest_number; i++)
    {
      int steps = collatz(i, max_steps);
           if (steps > max_steps) {
           max_steps = steps;
           current_number = i;
     }
  }

 }
 printf("Ο αριθμός με το μεγαλύτερο αριθμό βημάτων Collatz ανάμεσα στους %d και %d είναι %d με %d βήματα.\n", lowest_number, highest_number, current_number, max_steps);
 }

