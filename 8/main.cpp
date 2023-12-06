#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    if(num ==1) cout << "YES" << endl;
    for(int i=2;i<=num;i++){
        if(num%i==0 && i != num){
            cout << "NO" << endl;
            break;
        }else if(i == num){
            cout << "YES" << endl;
            break;
        }
    }
}