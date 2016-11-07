#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;
const unsigned int ile = 500;
double min, tab[ile], bufor;
int i, j, jmin;
int main() {
 srand(time(NULL));
 for (i = 0; i < ile; i++)
  tab[i] = double(rand()) / double(rand()) + 1.0;
 for (i = 0; i < ile-1; i++) {
  min = tab[i];
  for (j = i+1; j < ile; j++) {
   if (tab[j] < min) {
    min = tab[j];
    jmin = j;
   }
  }
  tab[jmin] = tab[i];
  tab[i] = min;
 }
 for (i = 0; i < ile; i++) {
  cout << i << ". " << tab[i] << endl;
 }
 _getch();
 return 0;
}
