#include <iostream>
using namespace std;
int main(){

/*  for (statement 1; statement 2; statement 3;

    Statement 1 is executed (one time) before the execution of the code block.
    Statement 2 defines the condition for executing the code block.
    Statement 3 is executed (every time) after the code block has been executed.
*/
    for (int i = 0; i <= 10; i = i + 2) {
      cout << i << "\n";
    }
}

