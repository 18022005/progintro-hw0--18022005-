#include<stdio.h>
#include <stdlib.h>

 int collatz(int n, int max_steps) {
   int steps = 1;
   while(n != 1 ){
    if(n % 2 ==0){      // αν n  αρτιος τοτε n=n/2
      n = n / 2;
    }
    else{
      n = 3 * n + 1;    // αν n περιττος τοτε n=3n+1
    }
    steps++;

 }
  return steps;
 }
     
 int main(int argc , char* argv[]){       //  το argc το χρησιμοποιουμαι για να ελέγξουμε ότι δόθηκε ακριβώς ένα όρισμα στη γραμμή εντολής.
   int lowest_number = atoi(argv[1]);     //  το argv το χρησσιμοπουμαι με σκοπο να παρουμε τον αριθμό που βαζουμε και το atoi για να γινει ακεραιος
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
 printf("Ο αριθμός με το μέγιστο αριθμό βημάτων μεταξύ %d και %d είναι %d με %d βήματα.\n", lowest_number, highest_number, current_number, max_steps);
 }

