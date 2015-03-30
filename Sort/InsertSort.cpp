#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void InsertSort(int *,int);


int main()
{
    srand((unsigned)time(NULL));
    int nCount=rand()%100;
    int nNum[nCount];
    for(int nIndex=0;nIndex<nCount;++nIndex)
    {
	nNum[nIndex]=rand()%100;
    }

    InsertSort(nNum,nCount);
    return 0;
}

void InsertSort(int *nNum,int nCount)
{
    int nTmp[nCount+1],j;

    nTmp[1]=nNum[0];

    for(int nIndex=1;nIndex<nCount;++nIndex)
    {
	nTmp[0]=nNum[nIndex];
	//Search the correct place in nTmp[]
	for(j=nIndex;nNum[nIndex]<nTmp[j];--j);
	
	//move the array to insert number
	for(int k=nIndex;k>j;--k)
	{
	    nTmp[k+1]=nTmp[k];
	}
	nTmp[j+1]=nNum[nIndex];
    }

    for(int nIndex=1;nIndex<=nCount;++nIndex)
    {
	cout<<nTmp[nIndex]<<' ';
    }
}
