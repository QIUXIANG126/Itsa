#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    if(sqrt(pow(x,2)+ pow(y,2)) <= sqrt(pow(100,2)+pow(100,2))){
        cout << "inside" << endl;
    }else{
        cout << "outside" << endl;
    }
}