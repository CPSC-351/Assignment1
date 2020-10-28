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

void load_urls(){
  string url_line;
  ifstream reader("urls.txt");

  if (reader.is_open()) {
    cout << "Very Nice. Success opne urls.txt \n";
  }
  else {
    cerr << "No good sir, no open tha ting urls.txt \n";
    exit(-1);
  }

  while (!reader.eof()) {
    reader >> url_line;
    if (!reader.eof()) {
      urls.push_back(url_line);
    }
  }

  reader.close();
}

void make_child() {
  cout << "Hello i am a child. Let me access that URL for you."
  pid_t pid;
    pid = fork();
    if (pid < 0) {
      cerr << "No, no cant fork";
      exit(1);
    }
    else if (pid == 0) {
      if (execlp("wget", "wget",urls.back().c_str(), NULL) < 0) {
        perror("execlp");
        exit(1);
      }
    }
}

int main()
{
  cout <<"This is the SERIAL downloader parent. Let me load the URLs to download..." << endl;
  load_urls();
  cout << "URLs are loaded and ready to go!" << endl;
  make_child();
  wait(NULL);
  
  urls.pop_back();
  make_child();
  wait(NULL);

  return 0;
}