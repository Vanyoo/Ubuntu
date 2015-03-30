#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void BubbleSort(int*,int);

int main()
{
    srand((unsigned)time(NULL));
    int nCount=rand()%100;
    int nNum[nCount];

    for(int nIndex=0;nIndex<nCount;++nIndex)
	nNum[nIndex]=rand()%100;
    BubbleSort(nNum,nCount);
    for(int nIndex=0;nIndex<nCount;++nIndex)
	cout<<nNum[nIndex]<<' ';
    return 0;
}


void BubbleSort(int *nNum,int nCount)
{
    bool bFlag=true;
    for(int i=0;bFlag&&i<nCount-2;++i)
    {
	bFlag=false;
	for(int j=nCount-2;j>=i;--j)
	    if(nNum[j]>nNum[j+1])
	    {
		int tmp=nNum[j];
		nNum[j]=nNum[j+1];
		nNum[j+1]=tmp;
		bFlag=true;
	    }
    }
}
