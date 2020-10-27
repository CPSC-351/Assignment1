#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main(){

  /***********TO-DO***********
  1. Create child process
  2. The child uses execlp("/usr/bin/wget", "wget", <URL STRING1>, NULL) system call
     in order to replace its program with wget program that will download the first file in
    urls.txt (i.e. the file at URL <URL STRING1>).
  3. The parent executes a wait() system call until the child exits.
  4. The parent forks off another child process which downloads the next file specified in
     urls.txt.
  5. Repeat the above steps until all files are downloaded 


  */

  return 0;
}
