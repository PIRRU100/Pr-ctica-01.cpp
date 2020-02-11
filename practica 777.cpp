#include <stdio.h>
#include <stdlib.h>

int main (){
float a,b,c;
int opt;
printf("1. SUMA\n2. RESTA\n3. MULTIPLICACION\n4. DIVISION");
printf("\n\nseleccione una opcion:");
scanf("%d",&opt);
printf("\n\nintroduce el primer operando:");
scanf("%f",&a);
printf("\n\nintroduce el segundo operando:");
scanf("%f",&b);
if(opt==1){
printf("\nla suma es:%f",c=a+b);
}
else if(opt==2){
    printf("\nla resta es:%f",c=a-b);
}
else if(opt==3){
    printf("\nla multiplicacion es:%f",c=a*b);
}
else if(opt==4){
    while(b==0){
        printf("error, b debe de ser distinto de 0\n");
        printf("introduce el segundo operando:");
        scanf("%f",&b);
    }
    printf("\nla division es:%f",c=a/b);
}
else{
    printf("opcion invalida");
    c=0;
}
printf("el resultado es %f",c);
}
