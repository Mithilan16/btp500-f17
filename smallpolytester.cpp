/***********************************************************/
/*                                                         */
/*   Written by: Catherine Leung                           */
/*   Version 1.0                                           */
/*   A preliminary tester for polynomial class             */
/***********************************************************/

#include "poly.h"
#include <iostream>
int main(int argc,char* argv[]){

  int data1[40][3]={{3,1,4},{2,1,3},{-1,1,1},{5,1,0}};
  int data2[40][3]={{2,1,2},{-1,1,1},{-1,1,0}};
  Polynomial p1(data1,4);
  Polynomial p2(data2,3);
  Polynomial p3;

  p3=p1+p2;
  std::cout << "(" << p1 << ") + (" << p2 << ") = " << std::endl;
  //p3 = 3 x^4 + 2 x^3 + 2 x^2 + -2 x + 4
  std::cout << p3 << std::endl;

  p3=p1-p2;
  std::cout << "(" << p1 << ") - (" << p2 << ") = " << std::endl;
  //p3 = 3 x^4 + 2 x^3 + -2 x^2 + 6
  std::cout << p3 << std::endl;

  p3=p1*p2;
  std::cout << "(" << p1 << ") * (" << p2 << ") = " << std::endl;
  //p3 = 6 x^6 + 1 x^5 + -5 x^4 + -4 x^3 + 11 x^2 + -4 x + -5
  std::cout << p3 << std::endl;

  p3=p1/p2;
  std::cout << "(" << p1 << ") / (" << p2 << ") = " << std::endl;
  //p3 = 3/2 x^2 + 7/4 x + 13/8
  std::cout << p3 << std::endl;

  p3=p1%p2;
  std::cout << "(" << p1 << ") % (" << p2 << ") = " << std::endl;
  //p3 = 19/8 x + 53/8
  std::cout << p3 << std::endl;

  return 0;
}