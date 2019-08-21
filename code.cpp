#include<iostream>
#include<string>
#include<time.h>
#include<math.h>
using namespace std;int main() {

  string sTr04_kA;
  cin >> sTr04_kA;
  
  int a, b, c;
  a = 100;
  while(true){
  if (sTr04_kA.length() <= 4)
  {
    cout << "Little to no pain.";
  }  else if (sTr04_kA.length() > 4 && sTr04_kA.length() <= 10)  {    cout << "50% painful.";
  }    else if (sTr04_kA.length() > 10)
  {    cout << """Too much pain. My systems have been broken. Exiting.....""";
  }
  else {cout << "whoami"; }
  }


  
  return 0;
}
