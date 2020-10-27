#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main(){
/*****************************************TO-DO****************************************
1. The parent forks off n children, where n is the number of URLs in urls.txt.
2. Each child executes execlp("/usr/bin/wget", "wget", <URL STRING>, NULL) system
   call where each <URL STRING> is a distinct URL in urls.txt.
3. The parent calls wait() (n times in a row) and waits for all children to terminate.
4. The parent exits.
*/
  return 0;
}
