
#include<graphics.h>
#include<conio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ( )

{

int gd=DETECT,gm;

//intigraph(&gd,&gm,"c:/tc/bgi");

	initgraph(&gd, &gm, "C:\\TC\\BGI");


	pair<int ,int > a[4],b[4];
	int x,y;
	cout<<"Enter the value if a....\n";
	for(int i=0;i<4;i++)
        {

            cin>>x>>y;
            a[i]=make_pair(x,y);
        }

        cout<<"Enter the value if b....\n";
	for(int i=0;i<4;i++)
        {

            cin>>x>>y;
            b[i]=make_pair(x,y);
        }
        for(int i=0;i<4;i++)
    circle(300+a[i].first,300+a[i].second,5);


 for(int i=0;i<4;i++)
   rectangle(300+b[i].first, 300+b[i].second, 305+b[i].first, 305+b[i].second);
//here will be your function
getch();
exit(1);


cout<< "Enter new point \n";
cin>>x>>y;
int Min_a=9999,Min_b=9999;

for(int i=0;i<4;i++){
    int da=sqrt((x-a[i].first)*(x-a[i].first)+(y-a[i].second)*(y-a[i].second));

    int db=sqrt((x-b[i].first)*(x-b[i].first)+(y-b[i].second)*(y-b[i].second));
    if(da<Min_a)
    Min_a=db;
    if(db<Min_b)
        Min_b=db;
}
if(Min_a<Min_b)
    circle(300+x,300+y,5);
else
rectangle(300+x,300+y, 305+x, 305+y);

getch();

return 0;

}
