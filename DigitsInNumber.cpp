#include <iostream>
using namespace std;

int main(){

int num;
int a=0;
cout<<"Enter any number: ";
cin>>num;

while(num>0)
{

    num=num/10;
    a++;
}

cout<<"Number of Digits in given number is: "<<a;

return 0;

}
