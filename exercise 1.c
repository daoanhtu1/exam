#include <stdio.h>
//int integer(){
int main (){
  int a;
  int b;
  printf("Enter the first number:");
  scanf("%d",a);
  printf("Enter the second number:");
  scanf("%d",b);
}
int sum
    (int a,int b){
  return a+b;
}
int Substraction
    (int a, int b){
  return a-b;
}
int Multiplication
    (int a, int b){
  return a*b;
}
int Division
    (int a,int b)
    if
    (b==0){
  return NAN;
}
esle {
  return (float)a/b;
}
}
int menu() {
  int user choice, a, b;
  float result;
  printf("integer calculate:\n");
  printf("input\n");
  printf("2.Sum:\n");
  printf("3.Substraction:\n");
  printf("4.Multiplication:\n");
  printf("5.Division:\n");
  printf("6.Exit:\n");
  printf("Enter your choice: ");
  scanf("5d", &choice);
  switch (choice) {
  case 1:
    enter(&a, &b);
    break;
  case 2:
    result = Sum(a, b);
    printf("Sum %d and %d is:%.2f\n", a, b, result);
    break;
  case 3:
    result = Division(a, b);
    printf("Division %d and %d is:%.2f\n", a, b, result);
    break;
  case 4:
    result = Multiplication(a, b);
    printf("Multiplication %d and %d is:%2f\n" a, b, result);
    break;
  case 5:
    result = Division(a, b);
    if (isnan(result)) {
      printf("Error:\n") {}
      else {
        printf("Division %d and %d is:%.2f\n", a, b, result);
      }
      break;
    case 6:
      printf("goodbye:\n") return;
    default:
      printf("Your selection is incorrect please try again.\n");
    }
  }
}
int main(){
  menu();
  return 0;
}