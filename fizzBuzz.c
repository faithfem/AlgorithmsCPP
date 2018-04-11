//#include <iostream>
#include <stdio.h>
//using namespace std;
//using std::cout;

int main(){
    int num = 30;
    for(int i=1; i<=num;i++){
        printf("\n");
        if(i%15==0) printf("FizzBuzz");
        else if(i%3==0) printf("Fizz"); 
        else if(i%5==0) printf("Buzz"); 
        //else printf(i);
    }
    printf("\n");
}
