#include <iostream>

using namespace std;
int main(){ 
    int number; 
            std::cout<<"enter  an intergr between 5 and 10" ;
            std::cin>>number;
            while( !(number >=5 && number <= 10) ){
                std::cout<<"sorry, you entered an invalid number, please try again.you entered"<<number<<"please enter a number between 5 and 10"
                <<std::endl;
                std::cin>>number;
                }
                std::cout<<" the number you  have entered is"<<number<<" and has been accepted"<<std::endl;
       return 0; 
      }