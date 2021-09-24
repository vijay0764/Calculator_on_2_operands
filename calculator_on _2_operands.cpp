#include <iostream>

using namespace std;

int main()
{
   float a,b;
   char operatorr;
   cout << " **Calculator** \n\n";                //making a calculator with +,*,/,-,% operators
   asktheuser:                                                      // for goto function
   cout << "enter the operation u want to perform \n";            // 5 + 2 or 53 % 3
   cin >> a >> operatorr >> b;


    switch(operatorr)                                           // switch statement helps to switch between operations
{


    case'+' :
        cout << a+b;
        break;
    case'-' :
        cout << a-b;
        break;
    case'*' :
        cout << a*b;
        break;
    case'/' :
        cout << a/b;
        break;
    case'%':                                     // as modulus operator does not work on float value


            if (int(a)==a && int(b)==b)
              cout << int(a)% int(b);

               else
               cout << "Invalid operation try again \n\n";
                goto asktheuser;                            // if float value , go back to cin ans ask input again
                        break;


    default:
        cout << "enter again";
        break;
}



    return 0;
}
