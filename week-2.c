#include <stdio.h>

int main (){
    

    // 1 line;
    /* 
    int number1 = 10;
    int number2 = 2;
    
    int sum = number1 + number2; 
    int modulo = number1 % number2;
    printf("Summation : %d , and Modulo : %d\n",sum,modulo);
    */
    /*
    int number1 , number2;
    printf("Please give me number1: ");
    scanf("%d", &number1);
    printf("Please give me number2: ");
    scanf("%d", &number2);
    
    int sum = number1 + number2;
    int mod = number1 % number2;
    printf("Summation : %d , and Modulo : %d\n",sum,modulo);
    */
    /*
    for(int myVar = 0; myVar <= 10; myVar++)
        printf("MyVar is: %d\n", myVar);
        printf("MyVar is: %d\n", myVar);
    

    int age ;
    printf("please give me the age : ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("you are an adult .\n")
    }
    else if (age < 16)

    */
   

    int myVar = 0;
    while (myVar< 10){

        if (myVar % 2 == 1){
        printf("myvar : %d\n", myVar);
        }else{
            break;
        }
        myVar++;
    }

    return 0;

}