# include <iostream>
using namespace std;

int main() 
{


  char op;

  float n1, n2;
  
 cout << "Enter your Operator like Add(+), Sub(-), Multi(*) and Div(/) =";
 
  cin >> op;

  cout << "Enter any two numbers= ";

  cin >> n1 >> n2;

  switch(op) 
  {

    case '+':

      cout << n1 << " + " << n2 << " = " << n1 + n2;

      break;

    case '-':

      cout << n1 << " - " << n2 << " = " << n1 - n2;

      break;

    case '*':

      cout << n1 << " * " << n2 << " = " << n1 * n2;

      break;

    case '/':

      cout << n1 << " / " << n2 << " = " << n1 / n2;

      break;

    default:
     
      cout << "Sorry! Your Operator is not correct....";

      break;
  }

  return 0;
}
