// write your code here
//Parrish Gilbert J00975185 Program Page 259//

#include<iostream>

using namespace std;

int main()

{

int a,b,c;

cout << " enter a , b, c";

cin >> a >> b >>c;

if(b*b-4*a*c ==0)

{

cout << "roots are " << (-1*b/2*a) << endl;

}

else if(b*b-4*a*c <0)

cout<< "The equation has complex roots" << endl;

return 0;

}
