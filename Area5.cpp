#include <iostream>
#include <cmath>
 using namespace std;
int main() { 
  int UserInput; float area;
   cout << "Choose a shape:" << endl; 
   cout << "1. square" << endl;
   cout << "2. Rectangle" << endl; 
   cout << "3. Triangle" << endl;
   cout << "4. Quit program"<<endl;

   cin >> UserInput;
   switch(UserInput) {

    case 1: {
    float side;
    cout << "Enter side of the square: "; 
    cin >> side; 
     area =  side* side;
    cout << "Area of the square: " << area << endl;
    break;
    } 

    case 2: { 
    float length, width; 
    cout << "Enter length and breadth of the rectangle: "; 
   cin >> length >> width;
   area = length * width;
   cout << "Area of the rectangle: " << area << endl;
   break;
   } 
   case 3: { 
   float base, height; 
   cout << "Enter base and height of the triangle: ";
   cin >> base >> height;
    area = 0.5 * base * height; cout << "Area of the triangle: " << area << endl;
    break; 
    }
    case 4:
    return 0;


    default: 
    cout << "Invalid UserInput!" << endl;
    }
return 0;
 }