#include <iostream>

using namespace std;

#define LIS331

int main() {

  cout << "El tamaño de un short  ---> " << sizeof (short) << endl;
  cout << "El tamaño de un int    ---> " << sizeof (int) << endl;
  cout << "El tamaño de un long   ---> " << sizeof (long) << endl;
  cout << "El tamaño de un char   ---> " << sizeof (char) << endl;
  cout << "El tamaño de un float  ---> " << sizeof (float) << endl;
  cout << "El tamaño de un double ---> " << sizeof (double) << endl;
  cout << "El tamaño de un bool   ---> " << sizeof (bool) << endl;
  cout << endl;

  short int num = 32767;

  cout << "Numero = " << num << endl;
  num++;
  cout << "Numero = " << num << endl;
  num++;
  cout << "Numero = " << num << endl;
  num++;
  cout << "Numero = " << num << endl;

#ifdef KX124

  cout << "dentro del kx124" << endl;

#elif defined (LIS331)

  cout << "dentro del lis331" << endl;

#elif defined (KXTJ)

  cout << "dentro del kxtj" << endl;

#endif

  for (int i = 32; i < 128; i++) {

    cout << (char) i;
  }

  return 0;
}