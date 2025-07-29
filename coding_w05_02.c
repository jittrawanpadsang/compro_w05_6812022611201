#include <stdio.h>

int main() {
   char name[30];
   int age;
   float hight;
   char subject[30];
   float grade;
   char Grade;

   printf("Enter your name,age and hight: ");
   scanf("%s %d %f",&name, &age, &hight);

   printf("Enter name subject,grade and Grade: ");
   scanf("%s %f %c", &subject, &grade,&Grade);

   printf("%c is %d years old and %.1f centimeters tall.",name[0], age, hight);
   printf("\nIn subject %c got %.2f which is symbolized as %c", subject[0], grade, Grade);

   return 0;
}