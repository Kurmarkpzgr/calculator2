/****************************
* v1.0
* 2022-10-10
****************************/

#include<stdio.h>

int add<int, int>
int sub<int, int>
int div<int, int>
int multi<int, int>

int main(int argc, char* argv[]){
  int number1, number2, result;
  char operator;

  printf("수식을 입력 해주세요 : (예> 3 + 2) ");
  scanf("%d %c %d", &number1 &operator, &number2);

  switch(operator){
    case '+':
    result = add(number1, number2);
    break;
    case '-':
    result = sub(number1, number2);
    break;
    case '*':
    result = multi(number1, number2);
    break;
    case '/':
    result = div(number1, number2);
    break;
  }

//1
  printf("result is : %d.\n",result);
}
//2
int add(int number1, int number2){
  return number1+number2;
}
int sub(int number1, int number2){
  return number1-number2;
}

int multi(int number1, int number2){
  return number1*number2;
}
int div(int number1, int number2){
  return number1/number2 + number1%number2;
}