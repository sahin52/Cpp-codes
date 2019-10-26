/*
This program is to delete all spaces from a string
*/

using namespace std;
std::string no_space(std::string x)
{
  string res="";
  for(int i=0;i<x.length();i++){
    if(x[i]!=' ')
      res = res + x[i];
  }
   return res;
}
