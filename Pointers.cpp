#include <iostream>
#include <string>
using namespace std;
int main(){
 int Firstvalue;
 string Name;
 int *pPointer = &Firstvalue;
 cout<<" enter the interger Firstvalue :"<<Firstvalue<<endl;
 cin>>Firstvalue;

 string * pMen = &Name;
 cout<<" enter the Name :"<<Name<<endl;
 cin>>Name;

 cout<<Firstvalue<<endl;
 cout<<Name<<endl;
 return 0;


}