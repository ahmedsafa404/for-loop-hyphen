#include<stdio.h>

int main(){

    int input;

    printf("Enter a Value : ");
    scanf("%d",&input);

    for(int i = 1; i <= input; i++){

        if(i < input){

            printf("%d-",i);

        }else{

            printf("%d\n",i);

        }



    }

    return 0;



}
