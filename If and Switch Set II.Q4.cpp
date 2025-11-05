#include<iostream>
#include<cmath>
using namespace std;

int main(){
	double x,y;
	
	cout<<"Enter valur of x: ";
	cin>> x;
	
	if( x > 5 ){
		y= 4 * pow(x, 3) + 2* x - 6;
	}
	else if(x<5){
		y= 3 * pow(x, 2)- 4* x +12;
	}
	else if (x=5){
		y= 6* x -5;
	}
	cout<<"x  = "<<x<<endl;
	cout<<"y= "<<y<<endl;
	
	return 0;
}
