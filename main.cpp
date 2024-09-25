#include <iostream>
#include <string>
using namespace std;

void algorithm_luhn(string s){
    int sum = 0;
    cout << "Your input card: " << s << endl; // Our example
    for (int i = 0; i < s.length(); i++){
        int temp = (s[i] - '0'); // char to int
        if(i % 2 != 0){
            sum += temp;
        }
        if(i % 2 == 0){
            temp = temp * 2;
            if(temp <= 9){
                sum += temp;
            }
            if(temp > 9){
                temp = temp - 9;
                sum += temp;
            }
        }
    }
    if(sum%10 == 0){
        cout << "This credit card " << s << " is correct by algorithm Luhn\n";
    }
    else{
        cout << "This credit card " << s << " is incorrect by algorithm Luhn\n";
    }
}

int main(){
    string s = "5062821234567892"; //example temp
    algorithm_luna(s);
    return 0;
}
