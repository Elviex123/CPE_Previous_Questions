https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1753
#include <iostream>
using namespace std;
int main()
{
  int n, s, d;
  cin>>n;
  for(int i=0; i<n; i++)
  {
    cin>>s>>d;
    if(s>d && ((s+d)%2==0) && ((s-d)%2==0))
      cout<<(s+d)/2<<" "<<(s-d)/2<<endl;
    else if(s==0 && d==0)
      cout<<"0 0"<<endl;
    else
      cout<<"impossible"<<endl;
  }
}

���d�ߩҦ��D�ؤθѵ��p�U��
http://https://jennaweng0621.pixnet.net/blog/post/403629785
���d�ߨ�LCPE�D�ئp�U��
http://jennaweng0621.pixnet.net/blog/category/6372301