// Converts Celsius to Kelvin             // missing iostream and namespace std


#include <iostream>

using namespace std;

class bad_temp{};

double ctok(double c)
{
 double k = c + 273.15;                            // k should be a double not an int
 if(k < -273.15)
 {
     throw bad_temp();
 }
 return k;                                    // return the value k not the int

}
double ktoc(double a)
{
    double b = a - 273.15;
    return b;
}
int main()
{
 double c = 0;
 double a = 0;
 cin >> c ;
 cin >> a;                                        // should be c not d
try{
 double k = ctok(c);                                // the c shouldnt be in quotation marks
 cout << k << endl;                                 // cout shouldnt be in capitol letters
}
catch(bad_temp)
{
    cerr<<"error"<<endl;
}
double b = ktoc(a);
cout<<b<<endl;
}
