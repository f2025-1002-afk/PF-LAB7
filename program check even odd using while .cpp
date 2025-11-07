#include <iostream>
using namespace std;
 void checkEvenOdd(int n){
   if (n%2==0)
        cout << n << " is Even num" << endl;
     else 
        cout << n << " is odd num" << endl;   
 }
 void line(){
     cout<<"----------------------------------"<<endl;
 }
int main() {
    int num;
    int run = 1;
    while (run==1){
        cout << "enter num"<<endl;
        cin >>num;
    checkEvenOdd(num);
      line();
    cout<<"enter 1 for rerun\n other for exit ";
    cin>>run;
}
    return 0;
}