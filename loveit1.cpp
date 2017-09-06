#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

//Function that returns the amount of 0s of a chain

/*int cantidad(char cadena){

    //We got the size of the char
    int n= strlen(cadena);

    int counter= 0;//This variable contains the amount of 0s
    if(cadena[0]==0)
        counter+=1;

    else
        cantidad(cadena)

}

        */
//Brute force

int amount(char chain[]){
    int n= strlen(chain), a=0;

    for(int i=0;i<n;i++){
        if(chain[i]=='0'){
            a+=1;
        }


    }
    return a;

}

int main(){

    char x[]="1000001";
    printf("%i",amount(x));
}















