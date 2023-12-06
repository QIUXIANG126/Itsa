#include <iostream>
#include <math.h>
using namespace std;

class complex{
    private:
    int real;
    int imag;

    public:
        complex(): real(0), imag(0){}
    
    void input(){
        cin >> real >> imag;
    }
    void output(){
        cout << real<< " " << imag << endl;
    }

    complex operator + (const complex& obj){
        complex numbers;
        numbers.real = real + obj.real;
        numbers.imag = imag + obj.imag;
        return numbers;
    }
    complex operator - ( const complex& obj){
        complex numbers;
        numbers.real = real - obj.real;
        numbers.imag = imag - obj.imag;
        return numbers;
    }
    complex operator * (const complex& obj){
        complex numbers;
        numbers.real = real*obj.real - imag*obj.imag;
        numbers.imag = imag*obj.real + real*obj.imag;
        return numbers;
    }
    complex operator / (const complex& obj){
        complex numbers;
        numbers.real = (real*obj.real + imag*obj.imag)/(pow(obj.real,2) + pow(obj.imag,2));
        numbers.imag = (imag*obj.real - real*obj.imag)/(pow(obj.real,2) + pow(obj.imag,2));
        return numbers;
    }
};

int main(){
    int n;
    char op;
    cin >> n;
    for(int i=0;i<n;i++){
        complex number1,number2,result;
        cin >> op;
        number1.input();
        number2.input();
        switch(op){
            case '+':
                result = number1 + number2;
                break;
            case '-':
                result = number1 - number2;
                break;
            case '*':
                result = number1 * number2;
                break;
            case '/':
                result = number1 / number2;
                break;
        };
        result.output();
    }
}