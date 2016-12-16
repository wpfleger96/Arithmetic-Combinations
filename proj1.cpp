//proj1.cpp contains calculation methods that are called in main.cpp

#include <iostream>
#include <cstdlib>
#include "proj1.h"
#include <vector>
#include <string>

using namespace std;

/*KEY:
 *(Arithmetic)
 *0 = +
 *1 = -
 *2 = *
 *3 = /
 *4 = %
 *(Binary)
 *0 = <<
 *1 = >>
 *2 = &
 *3 = |
 *4 = ^
 */

//Calculates all arithmetic combinations equaling target from the numbers in args
void calcArithmetic(vector<int> args, int target){
  int result=0;
  string expression="(((";
  int count = 0;
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      for(int k=0; k<5; k++){
	for(int l=0; l<5; l++){
	  for(int m=0; m<5; m++){
	    for(int n=0; n<5; n++){
	      for(int o=0; o<5; o++){
		for(int p=0; p<5; p++){
		  for(int q=0; q<5; q++){
		    if(j==0){ 
		      if(args[i] != args[k]){
			result += args[i]+args[k];
			string temp = (std::to_string(args[i]) + "+" + std::to_string(args[k]) + ")");
			expression += temp;
		      }
		    }
		    else if(j==1){ 
		      if(args[i] != args[k]){
			result += args[i]-args[k];
			string temp = (std::to_string(args[i]) + "-" + std::to_string(args[k]) + ")");
			expression += temp;
		      }
		    }
		    else if(j==2){
		      if(args[i] != args[k]){
			result += args[i]*args[k];
			string temp = (std::to_string(args[i]) + "*" + std::to_string(args[k]) + ")");
			expression += temp;
		      }		    
		    }
		    else if(j==3){
		      if(k != 0){
			if(args[i] != args[k]){
			  result += args[i]/args[k];
			  string temp = (std::to_string(args[i]) + "/" + std::to_string(args[k]) + ")");
			  expression += temp;
			}		      
		      }
		    }
		    else if(j==4){
		      if(k != 0){
			if(args[i] != args[k]){
			  result += args[i]%args[k];
			  string temp = (std::to_string(args[i]) + "/" + std::to_string(args[k]) + ")");
			  expression += temp;
			}		      
		      }
		    }

		    if(l==0){
		      if(args[m] != args[i] && args[m] != args[k]){
			result += args[m];
			string temp = ("+" + std::to_string(args[m]) + ")");
			expression += temp;
		      }
		    }
		    else if(l==1){ 
		      if(args[m] != args[i] && args[m] != args[k]){
			 result -= args[m];
			 string temp = ("-" + std::to_string(args[m]) + ")");
			 expression += temp;
		      }
		    }
		    else if(l==2){
		      if(args[m] != args[i] && args[m] != args[k]){
			 result *= args[m];
			 string temp = ("*" + std::to_string(args[m]) + ")");
			 expression += temp;
			 }
		    }
		    else if(l==3){
		      if(m != 0 && args[m] != args[i] && args[m] != args[k]){
			result /= args[m];
			string temp = ("/" + std::to_string(args[m]) + ")");
			expression += temp;
		      }
		    }
		    else if(l==4){
		      if(m != 0 && args[m] != args[i] && args[m] != args[k]){
			result %= args[m];
			string temp = ("/" + std::to_string(args[m]) + ")");
			expression += temp;
		      }
		    }

		    if(n==0){ 
		      if(args[o] != args[m] && args[o] != args[k] && args[o] != args[i]){
			result += args[o];
			string temp = ("+" + std::to_string(args[o]) + ")");
			expression += temp;
		      }
		    }
		    else if(n==1){ 
		      if(args[o] != args[m] && args[o] != args[k] && args[o] != args[i]){
			result -= args[o];
			string temp = ("-" + std::to_string(args[o]) + ")");
			expression += temp;
		      }
		    }
		    else if(n==2){
		      if(args[o] != args[m] && args[o] != args[k] && args[o] != args[i]){
			result *= args[o];
			string temp = ("*" + std::to_string(args[o]) + ")");
			expression += temp;
		      }		    
		    }
		    else if(n==3){
		      if(o != 0 && args[o] != args[o] && args[m] != args[k] && args[o] != args[i]){
			result /= args[o];
			string temp = ("/" + std::to_string(args[o]) + ")");
			expression += temp;
		      }
		    }
		    else if(n==4){
		      if(o != 0 && args[o] != args[o] && args[m] != args[k] && args[o] != args[i]){
			result %= args[o];
			string temp = ("/" + std::to_string(args[o]) + ")");
			expression += temp;
		      }
		    }

		    if(p==0){ 
		      if(args[q] != args[o] && args[q] != args[m] && args[q] != args[k] && args[q] != args[i]){
			result += args[q];
			string temp = ("+" + std::to_string(args[q]));
			expression += temp;
		      }		    
		    }
		    else if(p==1){ 
		      if(args[q] != args[o] && args[q] != args[m] && args[q] != args[k] && args[q] != args[i]){
			result -= args[q];
			string temp = ("-" + std::to_string(args[q]));
			expression += temp;
		      }
		    }
		    else if(p==2){
		      if(args[q] != args[o] && args[q] != args[m] && args[q] != args[k] && args[q] != args[i]){
			result *= args[q];
			string temp = ("*" + std::to_string(args[q]));
			expression += temp;
		      }		    
		    }
		    else if(p==3){
		      if(q != 0 && args[q] != args[o] && args[q] != args[m] && args[q] != args[k] && args[q] != args[i]){
			result /= args[q];
			string temp = ("/" + std::to_string(args[q]));
			expression += temp;
		      }
		    }
		    else if(p==4){
		      if(q != 0 && args[q] != args[o] && args[q] != args[m] && args[q] != args[k] && args[q] != args[i]){
			result %= args[q];
			string temp = ("/" + std::to_string(args[q]));
			expression += temp;
		      }
		    }

		    
		    if(result==target){
		      cout<<expression<<endl;
		      count++;
		    }
		    result=0;
		    expression="(((";
		  }
		}
	      }
	    }
	  }
	}
      }
    }
  }
  cout<<count<<" arithmetic expressions found that evaluate to " << target << endl;
}

//Calculates all binary combinations equaling target from the numbers in args
void calcBinary(vector<int> args, int target){
  int result=0;
  string expression="(((";
  int count = 0;
  for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
      for(int k=0; k<5; k++){
	for(int l=0; l<5; l++){
	  for(int m=0; m<5; m++){
	    for(int n=0; n<5; n++){
	      for(int o=0; o<5; o++){
		for(int p=0; p<5; p++){
		  for(int q=0; q<5; q++){
		    if(j==0){ 
		      if(args[i] != args[k]){
			result = result << args[i]+args[k];
			string temp = (std::to_string(args[i]) + "<<" + std::to_string(args[k]) + ")");
			expression += temp;
		      }
		    }
		    else if(j==1){ 
		      if(args[i] != args[k]){
			result = result >> args[i]-args[k];
			string temp = (std::to_string(args[i]) + ">>" + std::to_string(args[k]) + ")");
			expression += temp;
		      }
		    }
		    else if(j==2){
		      if(args[i] != args[k]){
			result = result & args[i]*args[k];
			string temp = (std::to_string(args[i]) + "&" + std::to_string(args[k]) + ")");
			expression += temp;
		      }		    
		    }
		    else if(j==3){
		      if(k != 0){
			if(args[i] != args[k]){
			  result = result | args[i]/args[k];
			  string temp = (std::to_string(args[i]) + "|" + std::to_string(args[k]) + ")");
			  expression += temp;
			}		      
		      }
		    }
		    else if(j==4){
		      if(k != 0){
			if(args[i] != args[k]){
			  result = result ^ args[i]/args[k];
			  string temp = (std::to_string(args[i]) + "^" + std::to_string(args[k]) + ")");
			  expression += temp;
			}		      
		      }
		    }

		    if(l==0){
		      if(args[m] != args[i] && args[m] != args[k]){
			result = result << args[m];
			string temp = ("<<" + std::to_string(args[m]) + ")");
			expression += temp;
		      }
		    }
		    else if(l==1){ 
		      if(args[m] != args[i] && args[m] != args[k]){
			result = result >> args[m];
			 string temp = (">>" + std::to_string(args[m]) + ")");
			 expression += temp;
		      }
		    }
		    else if(l==2){
		      if(args[m] != args[i] && args[m] != args[k]){
			 result = result & args[m];
			 string temp = ("&" + std::to_string(args[m]) + ")");
			 expression += temp;
			 }
		    }
		    else if(l==3){
		      if(m != 0 && args[m] != args[i] && args[m] != args[k]){
			result = result | args[m];
			string temp = ("|" + std::to_string(args[m]) + ")");
			expression += temp;
		      }
		    }
		    else if(l==3){
		      if(m != 0 && args[m] != args[i] && args[m] != args[k]){
			result = result ^ args[m];
			string temp = ("^" + std::to_string(args[m]) + ")");
			expression += temp;
		      }
		    }

		    if(n==0){ 
		      if(args[o] != args[m] && args[o] != args[k] && args[o] != args[i]){
			result = result << args[o];
			string temp = ("<<" + std::to_string(args[o]) + ")");
			expression += temp;
		      }
		    }
		    else if(n==1){ 
		      if(args[o] != args[m] && args[o] != args[k] && args[o] != args[i]){
			result = result >> args[o];
			string temp = (">>" + std::to_string(args[o]) + ")");
			expression += temp;
		      }
		    }
		    else if(n==2){
		      if(args[o] != args[m] && args[o] != args[k] && args[o] != args[i]){
			result = result & args[o];
			string temp = ("&" + std::to_string(args[o]) + ")");
			expression += temp;
		      }		    
		    }
		    else if(n==3){
		      if(o != 0 && args[o] != args[o] && args[m] != args[k] && args[o] != args[i]){
			result = result | args[o];
			string temp = ("|" + std::to_string(args[o]) + ")");
			expression += temp;
		      }
		    }
		    else if(n==4){
		      if(o != 0 && args[o] != args[o] && args[m] != args[k] && args[o] != args[i]){
			result = result ^ args[o];
			string temp = ("^" + std::to_string(args[o]) + ")");
			expression += temp;
		      }
		    }

		    if(p==0){ 
		      if(args[q] != args[o] && args[q] != args[m] && args[q] != args[k] && args[q] != args[i]){
			result = result << args[q];
			string temp = ("<<" + std::to_string(args[q]));
			expression += temp;
		      }		    
		    }
		    else if(p==1){ 
		      if(args[q] != args[o] && args[q] != args[m] && args[q] != args[k] && args[q] != args[i]){
			result = result >> args[q];
			string temp = (">>" + std::to_string(args[q]));
			expression += temp;
		      }
		    }
		    else if(p==2){
		      if(args[q] != args[o] && args[q] != args[m] && args[q] != args[k] && args[q] != args[i]){
			result = result & args[q];
			string temp = ("&" + std::to_string(args[q]));
			expression += temp;
		      }		    
		    }
		    else if(p==3){
		      if(q != 0 && args[q] != args[o] && args[q] != args[m] && args[q] != args[k] && args[q] != args[i]){
			result = result | args[q];
			string temp = ("|" + std::to_string(args[q]));
			expression += temp;
		      }
		    }
		    else if(p==4){
		      if(q != 0 && args[q] != args[o] && args[q] != args[m] && args[q] != args[k] && args[q] != args[i]){
			result = result ^ args[q];
			string temp = ("^" + std::to_string(args[q]));
			expression += temp;
		      }
		    }

		    
		    if(result==target){
		      cout<<expression<<endl;
		      count++;
		    }
		    result=0;
		    expression="(((";
		  }
		}
	      }
	    }
	  }
	}
      }
    }
  }
  cout<<count<<" bitwise expressions found that evaluate to " << target << endl;
}




