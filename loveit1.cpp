#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;
//Function that split a string

char* split(char* cadena, int ini,int fin){
        int tamano=fin+ini;
        char* res=(char*)malloc(tamano);
        for(int i=0; i<tamano;i++){
            res[i]=cadena[i+ini];
        }
        res[tamano]='\0';
        return res;


}

//Function that returns the amount of 0s of a chain

int cantidad(char* cadena){

    //We got the size of the char
    int n= strlen(cadena);

    if(n==1){
        if(cadena[0]=='0'){

            return 1;
        }
        else{
            return 0;
        }
    }



    else{
        char* res = split(cadena,n/2,n);
        char* res1 = split(cadena,0,n/2);

        return cantidad(res)+cantidad(res1);

    }

}




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

    char x[]="100000";
    //printf("%i",amount(x));
    printf("%i",cantidad(x));

}















