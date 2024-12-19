#include <stdio.h>

int factorial(int number );
int fact_recursive(int number);
int factorial_while(int number);
int fibo(int number);
int fibo_rec(int number);

int main (){
    int factorial_5 = factorial(8);
    printf("Factorial %d \n", factorial_5);
    int fibo_4 =fibo(7);
    printf("fibonacci : %d\n", fibo_4);
return 0 ;
}


int factorial(int number){
    if(number < 0){
        return 0;
    }
    if( number == 0){
        return 1;
    }
    int result = 0 ;
    for( int i = 1 ; i<= number; i++){
        result = result * i ;
    }
    return result;
}


int factorial_while(int number){
    if(number < 0){
        return 0;
    }
    if( number == 0){
        return 1;
        }

    int result = 1;

    while(number > 0){
        result = number*result;
        number -= 1;
        
    }
    return result;
}

int fact_recursive(int number){
   if (number == 1){
    return 1;
   } 
   return number * fact_recursive(number-1);
}

int fibo(int number){
    int first = 1 , second = 1, result =0;
    if (number == 1 || number==2){
        return 1;
    }
    for (int i=3; i <= number; i ++){
        result = first + second;
        first = second;
        second = result;
    }
    return result;
}



int fibo_rec(int number){
    if (number == 1 || number =2){
        return 1;
    }

    return fibo_rec(number - 1) + fibo_rec(number - 2)
}
