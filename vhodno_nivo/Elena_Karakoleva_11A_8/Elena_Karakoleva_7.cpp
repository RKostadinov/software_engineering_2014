/*7. �� �� ��������� ��������, ����� ������� �� ����������� �� ������ �����������
����� �, ������ 0<x<100. �� �� ������������ ����� �� 10 ����������� ��������,
����� ���� >x. ����� 2��� ������� �� �� ������ � ��� ����� � ������ 5.
���������� ����� �� �� ������ �� ������*/

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int x,ar[10],a2[10],i,n=1,j;


do{
    cout<<"Enter X: ";
    cin>>x;
   }while(x<=0||x>=100);;
    srand((unsigned)time(NULL));

    for (int i = 0; i <10; i++)
      {
         ar[i] = x+ rand() % 100;
         cout << ar[i] << endl;
      }
cout<<"*******"<<endl;
   for (j=0;j<=5;j++)
   {
       a2[j]=ar[n];
       n=n+2;
   }

   for (j=0;j<5;j++)
   {
       cout<<a2[j]<<endl;
   }
}
