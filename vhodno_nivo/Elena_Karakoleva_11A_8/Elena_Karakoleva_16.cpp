/*16. Да се разработи програма, която изисква от потребителя да въведе целочислено
число x, където 0<x<10. Да се инициализира масив от 10 елемента. Да се намери
първото просто число в интервала [0; +∞) завършващо на x и да се запише като
първи елемент в масива. Да се намери второто просто число в интервала [0; +∞)
завършващо на x и да се запише като втори елемент в масива. Аналогично да се
намерят първите N прости числа в интервала [0; +∞) и да се запишат като елемент
N в масива. Масивът да се изведе на стандартния изход.*/

#include <iostream>
using namespace std;
int main()
{
    int ar[10],x,i=0,br,b=0,j;
    do{
    cout<<"Enter X: ";
    cin>>x;
   }while(x<=0||x>=10);
i=0; b=0;
do
{
    i++;
    if(i%10==x)
    {
        for(br=2;br<=i;br++)
        {
            if(i%br==0)
            {
               if(br!=i) break;
               else
               {
                   b++;
                   for (j=b;j<=b;j++)
                   {
                       ar[j]=i;
                       cout<<ar[j]<<endl;
                   }
               }
            }
        }
    }
}while(b<10);


}


