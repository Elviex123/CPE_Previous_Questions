https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=979

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
 bool isJolly;
 int dataNum, *data;
 vector<int> minus;

 while(cin >> dataNum) { // �����ǦC����
  // ��l��
  data = new int [dataNum];
  minus.clear();
  isJolly = true;
  // ������ƧǦC
  for(int d = 0; d < dataNum; d++)
   cin >> data[d];
  // �p��۾F�G�Ƥ��t��
  for(int i = 1; i < dataNum; i++)
   minus.push_back(abs(data[i] - data[i - 1]));
  // �Ƨ�
  sort(minus.begin(), minus.end());
  // �P�_�O�_�� Jolly jumper
  for(int i = 0; i < minus.size() && isJolly; i++)
   if(minus[i] != i + 1)
    isJolly = false;
  // ��X�P�_���G
  if(isJolly)
   cout << "Jolly" << endl;
  else
   cout << "Not jolly" << endl;
  // ����O����
  delete [] data;
 }

 return 0;
}