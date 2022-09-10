#include <iostream>
using namespace std;
double areaOfCircle(double radius);
double areaOfSquare(double length);

double areaOfCircle(double radius){
return 3.14159 * radius * radius;
}

double areaOfSquare(double length){
return length * length;
}



int main() 
{

int input;
double radius, side, base, height;
bool quit = false;

while(!quit){
cout<<"Program to calculate area of objects."<<endl;
cout<<"1 -- Square"<<endl;
cout<<"2 -- Circle"<<endl;
cout<<"3 -- Quit"<<endl;

cin>>input;

switch(input){
case 1:
cout<<"Side of Square: ";
cin>>side;

cout<<"Area = "<<areaOfSquare(side)<<endl<<endl;
break;

case 2:
cout<<"Radius of Circle: ";
cin>>radius;

cout<<"Area = "<<areaOfCircle(radius)<<endl<<endl;
break;

case 3:
quit = true;
break;

default:
cout<<"Enter a valid Choice."<<endl<<endl;
}

}

return 0;
}