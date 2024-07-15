// calculadora	

#include <stdio.h>


  float soma(float a, float b){
    float res = a+b;
    
    return res;
 }
 
  float subt(float a, float b){
    float res = a-b;
    
    return res;
 }
 
  float divi(float a, float b){
    float res = a/b;
    
    return res;
 }
 
  float multp(float a, float b){
    float res = a*b;
    
    return res;
 }
 
  int getNum1(){
    int numCache;
    printf("digite seu 1 numero: ");
    scanf("%i", &numCache);
    
    return numCache;
  }
  
  int getNum2(){
    int numCache;
    printf("digite seu 2 numero: ");
    scanf("%i", &numCache);
    
    return numCache;
  }
    
    

int main() {
    
    int a = 0;
    
    while(a == 0){
    
    printf("------------------------------------------------------------------------------\n");
    printf("------------------------------MENU DA CALCULADORA-----------------------------\n");
    printf("------------------------------------------------------------------------------\n");
    printf("------------------------------PARA SOMAR DIGITE 1-----------------------------\n");
    printf("------------------------------PARA SUBTRAIR DIGITE 2--------------------------\n");
    printf("------------------------------PARA DIVIDIR DIGITE 3---------------------------\n");
    printf("------------------------------PARA MULTIPLICAR DIGITE 4-----------------------\n");
    printf("------------------------------PARA SAIR DIGITE 5------------------------------\n");
    printf("------------------------------------------------------------------------------\n");
    printf("----> ");
    
    int op;
    
    scanf("%i", &op);
    
    float num1, num2;
    
    float res;
    
    
    switch(op){
        case 1:
            num1 = getNum1();
            num2 = getNum2();
            res = soma(num1, num2);
            printf("\nseu resultado é : %.3f\n\n", res);
            break;
        case 2:
            num1 = getNum1();
            num2 = getNum2();
            res = subt(num1, num2);
            printf("\nseu resultado é : %.3f\n\n", res);
            break;
        case 3:
            num1 = getNum1();
            num2 = getNum2();
            res = divi(num1, num2);
            printf("\nseu resultado é : %.3f\n\n", res);
            break;
        case 4:
            num1 = getNum1();
            num2 = getNum2();
            res = multp(num1, num2);
            printf("\nseu resultado é : %.3f\n\n", res);
            break;
        case 5:
            printf("obrigado por utilizar a calculadora :)");
            a = 1;
            break;
        default:
            printf("vc digitou um numero invalido :( \n\n");
            break;
    }
    
    }
	
  return 0;
}