#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int array[10];

main(){
    srand(time(NULL));
    for (int i = 0; i<=9; i++){
        array[i]=rand()% 10 +1;
    }
    system("cls");
    cout<<"Los valores almacenados en el array son: "<<endl;
    for(int i=0; i<=9; i++){
        cout<<array[i]<<endl;
    }

    int temp;
    for (int i =1; i <10; i++){
        for (int j=0; j<9; j++){
            if (array[j]>array[j+1]){
                temp=array[j];
                array[j]= array[j+1];
                array[j+1]= temp;
            }
        }
    }
    cout<<"Los valores ordenados en el array son: "<<endl;
    for(int i=0; i<=9; i++){
        cout<<array[i]<<endl;
    }

}