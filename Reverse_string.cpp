#include <string>
using namespace std ; 

string reverseString (string str )
{
  string res = str;
  int len = (int) str.length();
  for(int i=0;i<len;i++){
    res[i]=str[len-i-1];
  }
  return res ;
}
