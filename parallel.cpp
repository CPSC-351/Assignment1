#include <stdlib.h>
#include <cstdlib>
#include <fstream>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

vector<string>urls;
int count = 0;

void load_urls() {
  string url_line;
  ifstream reader("urls.txt");

  if (reader.is_open()) {
    cout << "Very Nice. Success opening urls.txt \n";
  }
  else {
    cerr << "No good sir, not opening urls.txt \n";
    exit(-1);
  }

  while (!reader.eof()) {
    reader >> url_line;
    if (!reader.eof()) {
      urls.push_back(url_line);
      count++;
    }
  }

  reader.close();
}

void make_children() {
  pid_t pid;
  for (int i = 0; i < count; i++) {
    pid = fork();
    if (pid < 0) {
      cerr << "No, no fork";
      exit(1);
    }
    else if (pid == 0) {
      if (execlp("wget", "wget",urls.back().c_str(), NULL) < 0) {
        perror("execlp");
        exit(1);
      }
    }
    else {
      urls.pop_back();
    }
  }
}

int main(int argc, char* argv[]){
  vector<string> urls;

  load_urls();
  make_children();  //4

  while (count > 0) {
    wait(NULL);
    count--;
  }

  cout << endl;
  cout << "_____________________YES, COMPLETE YES______________________\n\n";


  return 0;
}
