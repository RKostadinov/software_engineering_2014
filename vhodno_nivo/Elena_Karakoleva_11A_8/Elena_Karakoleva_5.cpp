/*5. �� �� ��������� ��������, ����� ������� �� ����������� �� ������ �����������
�����, x, ������ 0 < x < 10. �� �� ������������� ������ �� 10 ��������.
����������� �� ���������� �� ������ �� �� ����� �� ������� �� ������� ��
��������. �� �� ������ �������, ���� ����� �� �� ������� � �������� ��� � ������
�� �� ������.*/

#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main ()
{
    double ar[10];
    int c,i,d;
    double x,y=0;
    const int enda=10;
    bool bval;


    do{
    cout<<"Enter key from 1 to 9:";
    cin>>x;
    }while(x<=0||x>=10);

     for (c = 0; c < enda; c++)
       {
          ar[c]=c;
       }
     for (i=0;i<10;i++)
       {
          x=ar[i];
          y=cos(x);
          ar[i]=y;
          cout<<"Cos("<<x<<") is equal to "<<y<<endl;
       }
do{
for (d=0;d<enda;d++)
{
    bval=false;
    for(c=0;c<(enda-1);c++)
    {
        if (ar[c]<ar[c+1])
        {
            swap(ar[c],ar[c+1]);
            bval=true;
        }
    }
}
}while(bval);

  cout<<""<<endl;
  cout<<"Sorted list in descending order:"<<endl;
  cout<<""<<endl;

for(c=0;c<enda;c++)
{
    cout<<ar[c]<<endl;
}
}
