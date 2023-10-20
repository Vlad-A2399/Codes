// vlad anton b00103207
// 22/03/2020
// ca05 coordinate geometry
#include<iostream>
#include <math.h>
#define PI 3.14159265
using namespace std;
class Point{
	
	private:
	
	double x;
	double y;
	
	
	public:
	
	Point(double xx = 0.0, double yy = 0.0) {
        x = xx;
        y = yy;
    }
    
	double DistOrigin() {           //1                 formula for getting the distance
		Point origin;
        double xxx = x - origin.x;
        double yyy = y - origin.y;
        return sqrt(xxx*xxx + yyy*yyy);
	}
	
	
	double anglepositivexaxis(){         //2              formula for getting the positive angle on xaxis
		double r;
		r = atan2 (x,y) * 180 / PI;
	
	}
	
	
	void translate(double dx,double dy){    //3            formula for translating x,y
		x+=dx;
		y+=dy;
	}
	
	
	void rotate(float angle){   //4                        formula for rotation
		float s = sin(angle);
  		float c = cos(angle);		
  		// rotate point
	  float xo = x * c - y * s;
	  float yo = x * s + y * c;
	  
	  // translate point back:
  		x = xo;
  		y = yo;  
	}
	
	void display(){
		cout<<"X is "<<x<<endl;           
		cout<<"Y is "<<y<<endl;
		
	}  
};

int main(){
	int xx,yy;
	cout<<"Enter x \n";                        // user will enter x and y coordinate
	cin>>xx;
	cout<<"Enter y \n";
	cin>>yy;
	Point p(xx,yy);
	
	cout<<"1.distance of point from origin is "<<p.DistOrigin()<<endl;
	cout<<"2.point that makes with x-axis positive is "<<p.anglepositivexaxis()<<endl;             // the answer will be displayed here 
	cout<<"3.point translated by 5,9"<<endl;
	p.translate(5,9);
	p.display();
	cout<<endl;

	p.rotate(45);
	cout<<"4.After  rotating 45 degree through origin" <<endl;
	p.display();
	cout<<endl;



	
}
