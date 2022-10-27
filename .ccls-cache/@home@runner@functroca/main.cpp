#include <iostream>
using namespace std;
void troca(int *a, int *b)
{
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}
int main(int argv, char **argc)
{
  int x ;
  int y ;
  cout << "Digite os valores para x e y  " << endl;
  cin >> x >> y;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  troca(&x,&y);
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
}