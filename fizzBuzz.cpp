#include <iostream>
using namespace std;
using std::cout;

int main(){
    int num = 30;
    for(int i=1; i<=num;i++){
        cout<< ("\n");
        if(i%15==0) cout<<("FizzBuzz");
        else if(i%3==0) cout<<("Fizz"); 
        else if(i%5==0) cout<<("Buzz"); 
        else cout<<(i);
    }
    cout<<("\n");
}