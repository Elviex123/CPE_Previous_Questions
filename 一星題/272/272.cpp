https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=208
#include <iostream>
using namespace std;
int main()
{
 char s;
 int n=0;
 while(cin.get(s))
 {
  if(s=='"')
  {
   n++;
   if(n%2==1)
    cout<<"``";
   else
    cout<<"''";
  }
  else
   cout<<s;
 }
}


���d�ߩҦ��D�ؤθѵ��p�U��
https://jennaweng0621.pixnet.net/blog/post/403629785
���d�ߨ�LCPE�D�ئp�U��
http://jennaweng0621.pixnet.net/blog/category/6372301