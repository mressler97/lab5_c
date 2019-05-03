 /* name:       Michael Ressler
  * class:      CSCI112
  * assignment: lab4
  * date:       3-5-2019
 */
 #include <stdio.h>
 #include <string.h>

 void fact_calc(char calc[], int n);


 int main(void) {

  int n; //integer entered from command line
  char fac[100];

 do{
  printf("Enter an integer between 0 and 9 or -1 to quit => ");
  scanf("%d", &n);

  fact_calc(fac, n);

 } while(n != -1);

 return(0);

 }


 void fact_calc(char fac[], int n) {

 unsigned long long factorial = 1;
 int i;

 if(n == 0) {

  printf("******************\n");
  printf("* 0! = 1 = 1 *\n");
  printf("******************\n");
 }

 else if(n == 1) {
  printf("****************\n");
  printf("* 1! = 1 = 1 *\n");
  printf("****************\n");
 }
 else if((n > 1 && n <= 9)) {

  for(i = 1; i <= n; i++) {

   factorial = factorial*i;
  }

  for(i = n; i >= 1; i--) {

   printf("*******");
 }

 printf("\n");
 printf("* %d! = ", n);

 for(i = n; i >= 2; i--) {

  printf("%d X ", i);
 }

printf("1 ");
printf("= %lld *\n", factorial);

 for(i = n; i >= 1; i--) {
  printf("*******");
 }

 printf("\n");
 }
 else if(n == -1) {
  printf("\n");
 }
 else {
  printf("Invalid Entry\n");
 }

}
