#include <stdio.h>

  
int main(){

  
// 0 dan 100 e sayılar
for(int x = 0 ; x <= 100; x++){
    printf("x: %d\n", x);
}



// o dan 100 e çift sayılar
  
for ( int myVar = 0 ; myVar <= 100; myVar++){
    if (myVar % 2 == 0){
        printf("myVar : %d\n", myVar);
    }
}



// çarpım tablosu

for(int number1 = 1; number1 <= 9; number1++){
    for(int number2 = 1; number2 <=10; number2++){
        int z = number1 * number2;
        printf("%d\n", z);
    }
}



// while+continue kullanımı
int numberx= 0;
while (numberx <=10){
    if (numberx ==5){
        numberx++;
        continue;
    }

    printf("%d\n",numberx);
    numberx++;
}


//poor man
int house = 80 ;
int money = 10000 ;
int pocket = 0 , housec = 0;
printf("housec>");
scanf("%d", &housec);
printf("pocket>");
scanf("%d", &pocket);

if(pocket > money && housec > house ){
    printf("you dont havre to work all day long :)\n");
}
else{
    printf("get away from me you poor shit!\n");
}


// horsepower example:
int horsepower;
printf("Horsepower: \n");
scanf("%d",&horsepower);
if(horsepower<=60){
    printf("You are poor!\n");
}
else if(horsepower <= 75){
    printf("200.000\n");
}
else if(horsepower <= 90){
    printf("350.000\n");
}
else if(horsepower <= 110){
    printf("500.000\n");
}
else if(horsepower <= 150){
    printf("700.000\n");
}
else if(horsepower < 200){
    printf("1.200.000\n");
}
else{
    printf("2.000.000\n");
}

    return 0 ;

}



