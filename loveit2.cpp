#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
int main(){
        int hola[]={1,-1,2,-2,-3};
        cout<<negative(hola,5);
 }

//Develop split function
int* split(int* cadena, int ini,int fin){
            int tamano=fin+ini;
            int* res=(int*)malloc(tamano);
            for(int i=0; i<tamano;i++){
                res[i]=cadena[i+ini];
            }

            return res;
        }
 int negative(int* arreglo,int n){

         if(n==1){
            if(arreglo[0]<0){
                return 1;
            }
            else{
                return 0;
            }
         }

         else{
            int* arra=split(arreglo,0,n/2);
            int* arra1=split(arreglo,n/2,n);
            int x=n-n/2;
            return negative(arra,n/2)+negative(arra1,x);
         }

 }


