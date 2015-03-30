#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int GetKey(int *nNum,int beg,int end,int key);
void QuickSort(int *,int,int,int);

int main()
{
    srand((unsigned)time(NULL));
    int nCount=rand()%100;
    int nNum[nCount];
    cout<<"Original data:"<<endl;
    for(int nIndex=0;nIndex<nCount;++nIndex)
    {
	nNum[nIndex]=rand()%100;
	cout<<nNum[nIndex]<<' ';
	cout.flush();
    }
    cout<<endl;
    QuickSort(nNum,0,nCount,nCount-1);
    
    for(int nIndex=0;nIndex<nCount;++nIndex)
	cout<<nNum[nIndex]<<' ';
    return 0;
}
int cc=0;
void QuickSort(int *nNum,int beg,int end,int key)
{
    //获得轴的位置
    if(beg<end)
    {
	key=GetKey(nNum,beg,end,key);
      QuickSort(nNum,beg,key-1,key-1);
      QuickSort(nNum,key+1,end,end-1);
    }

}

int GetKey(int *nNum,int beg,int end,int key)
{
    //store the data
    int tmp=nNum[key];
    //keep the eye on condition
    while(beg<end)
    {
	for(;nNum[beg]<=tmp&&beg<end;++beg);
	if(beg>=end) break;
	nNum[key]=nNum[beg];
	key=beg;
	for(;nNum[end]>=tmp&&beg<end;--end);
	if(beg>=end) break;
	nNum[key]=nNum[end];
	key=end;
    }
    nNum[key]=tmp;
    return key;
}

