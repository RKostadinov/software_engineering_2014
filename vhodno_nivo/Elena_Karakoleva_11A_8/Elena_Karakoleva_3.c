/*3.�� �� ��������� ��������, ����� ������� �� ����������� �� ������ ��� ����������� �����,
 x � y, ������ x < y. �� �� ������� � ������� ������ ������ ����� ���������� �� 3 � �������� [x,y].*/

#include <stdio.h>
int main ()
{

    int x,y,i,b;

    printf("Enter X\n");
    scanf("%d", &x);
    printf("Enter Y\n");
    scanf("%d", &y);
    if (x<y)
      {
            for (i=x; i<=y; i++)
            {
                if (i%10 == 3)
                {
                    for(b=2; b <= y; b++)
                     {
                     if(i%b == 0)
                        {
                           if (b!=i) break;
                           printf("%d\n", i);
                        }

                      }
                }
             }
      }
    else { printf("Y is not greater than X");}
}
