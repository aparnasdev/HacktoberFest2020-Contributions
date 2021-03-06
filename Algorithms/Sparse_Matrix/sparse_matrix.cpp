#include<stdio.h>
#include<iostream>

using namespace std;

//in sparse matrix we make 2D matrix form by array of objects
//read all assumptions carefully
class spm
{
    int r,c,v;
public:
    void push(spm *a)
    {
        int k=1;
        int m,n,ele;
        cout<<"Enter rows and columns"<<endl;
        cin>>m>>n;
        a[0].r=m;
        a[0].c=n;
        cout<<"Enter values of matrix"<<endl;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>ele;
                if(ele==0)
                    continue;
                a[k].r=i;
                a[k].c=j;
                a[k].v=ele;
                k++;
            }
        }
        a[0].v=k-1;
    }
    void display(spm *a)
    {
        cout<<"\nr\tc\tv"<<endl;
        cout<<a[0].r<<"\t"<<a[0].c<<"\t"<<a[0].v<<endl;
        cout<<"-------------------"<<endl;
        for(int i=1;i<=a[0].v;i++)
        {
            cout<<a[i].r<<"\t"<<a[i].c<<"\t"<<a[i].v<<endl;
        }
        cout<<"\n";
    }
    void displayMatrix(spm *a)
    {
       int k=1;
       cout<<"In Matrix Form: "<<endl;
       for(int i=0;i<a[0].r;i++)
       {
           for(int j=0;j<a[0].c;j++)
           {
               if(a[k].r==i && a[k].c==j)
               {
                   cout<<a[k].v<<"\t";
                   k++;
               }
               else
               {
                   cout<<"0\t";
               }
           }
           cout<<"\n";
       }
       cout<<"\n";
    }
};

int main()
{
    //test program..you can add your own
    spm a1,a[50];
    a1.push(a);
    a1.display(a);
    a1.displayMatrix(a);
}
