#include <iostream>
#include <cmath>
using namespace std;

//returns the exponent
int raisePowerofTwo(int num){
    return log(num)/log(2);
}

int main(){
    int num; cout << "Enter a number: "; cin >> num;
    int exponent = raisePowerofTwo(num);//stores the exponent calculated from the function
    int count=0;//variable to calculate the number to add/subtract
    int tempRaise = pow(2, exponent); 
    if(tempRaise!=num){
        cout << num << " is not a perfect square." << endl;
        cout<< "Logical Range: " << tempRaise << " < " << num << " < " << tempRaise*2 << endl;

        //representation with addition with nearest perfect square
        while((tempRaise+count)!=num){
            count++;
        }
        cout << num << " = 2" << "**" << exponent << "+" << count << endl;

        //representation with subtraction with nearest perfect square
        tempRaise += count;
        count=0;
        while(tempRaise != pow(2, exponent+1)){
            count++;
            tempRaise++;
        }
        cout << num << " = 2" << "**" << exponent+1 << "-" << count;
    }
    else {
        cout << num << " = 2" << "**" << exponent;
    }
    return 0;
}