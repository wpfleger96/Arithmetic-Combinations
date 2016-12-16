//main.cpp contains the main method for Project01

#include <iostream>
#include <cstdlib>
#include "proj1.h"
#include <vector>

using namespace std;

//main() is the entry point into the program. It processes the command line arguments and calls the appropriate methonds contained in proj1.cpp
int main(int argc, char*argv[]){
  bool useArithmetic = true; 
  vector<int> args;
  int target;
  for(int i=1; i<argc; i++){
    string flag1=argv[i];
    if(flag1 == "-a") useArithmetic=true;
    else if(flag1 == ("-b")) useArithmetic=false;
    else if(flag1 == ("-e")) target=stoi(argv[i+1]);
    else if(flag1 == ("-v")){
      for(int j=i+1; j<i+6; j++){
	args.push_back(stoi(argv[j]));
      }
    }
  }
  if(useArithmetic) calcArithmetic(args, target);
  else calcBinary(args, target);
}	    
 
