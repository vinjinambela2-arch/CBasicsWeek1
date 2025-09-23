#include<stdio.h>
int main() {
 //print my details
 printf("my name: vinji/n");
 printf("my age: 20/n");
 printf("my hobby: readiny/n");
// get your information
char name[50];
int age;
printf(" enter name:");
scanf("%s",name);
printf("enter age:");
scanf("%d", &age);
// printf greating massege
printf("\nhello %s! you are %d years old", name, age);
return 0;
}
