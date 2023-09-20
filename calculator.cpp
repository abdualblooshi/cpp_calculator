#include <iostream>
#include <string>

using namespace std;

double add(double x, double y){
    double sum = x+y;
    return sum;
}

double subtract(double x, double y) {
    double sub = x-y;
    return sub;
}

double multiply(double x, double y){
    double mult = x*y;
    return mult;
}

double divide(double x, double y){
    double div = x/y;
    return div;
}

bool checkString(string str){
    for(int i=0; i<sizeof(str); i++){
        
    }
}

int main(int argc, char *argv[])
{
    string mathOp;
    cout << "Please enter a mathamatical operation: \n Example: \n 1+1";
    cin >> mathOp;
    char operations[4] = {'+', '-', '*', '/'};

    // To check if its a correct math operation by finding a math operation in the string
    int operationIndex = mathOp.find(operations);

    if (operationIndex != string::npos){
        cout << "Error invalid input";
    } else {
        cout << 
    }
}