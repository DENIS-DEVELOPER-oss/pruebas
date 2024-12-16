#include <iostream>

using namespace std;

int main() 
{
 int numero, *dir_numero; 
 numero=200;
 dir_numero=&numero;
 cout<<*dir_numero<<endl;
 cout<<dir_numero<<endl;
 return 0;
}
