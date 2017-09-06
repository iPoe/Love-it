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
int cantidad(char* cadena, int ini, int fini ){

    //We got the size of the char
    if(fini==ini ){
        if(cadena[ini]=='0'){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        int mitad= ini+(fini-ini)/2;
        char res = cantidad( cadena, ini, mitad);
        char res1 = cantidad( cadena, mitad+1, fini );
        return res+res1;
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
int a = 0;
int b = 6;
    char x[]="100000";
    char d[]="holaalaska";
    //printf("%i",amount(x));
    //printf("%i",cantidad(x));
    //printf("%i",cantidad(x,0,6));
    printf("%i",islas(d));

}

int islas(char* chain){
    int i=0;
    int n = strlen(cadena);
    if(n==1){
        if(res[0]==res1[0]){
            return 1;
        }
        else{
            i+=1;
        }
    }
    else{
        char* res= split(chain,0,n/2);
        char* res1=split(chain,n/2,n);
    }

 }















