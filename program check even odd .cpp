#include <iostream>
using namespace std;
 void checkEvenOdd(int n){
   if (n%2==0)
        cout << n << " is Even num" << endl;
     else 
        cout << n << " is odd num" << endl;   
 }
int main() {
    int num;
    cout << "enter num" << endl;
    cin >> num;
    checkEvenOdd(num); 
    
    return 0;
}
 


