#include <iostream>
#include <iterator>
#include <algorithm>
#include "SortedList.h"

using namespace std;

SortedList::SortedList()
{
}

SortedList::~SortedList()
{
}

/***** Complete this file. *****/

bool SortedList::check()
{
    if (data.size() == 0) return true;

    list<int>::iterator it = data.begin();
    int prev = *it;
    while ((++it != data.end()) && (prev <= *it));
    return it == data.end();
}

void SortedList::prepend(int value)
{
    auto it=data.begin();
    data.insert(it,value);
}

void SortedList::append(int value)
{
    auto it=data.end();
    data.insert(it,value);
}

bool SortedList::find(int value) const
{
    list<int>::const_iterator it=data.begin();
    list<int>::const_iterator lit=data.end();
    it=std::find(it,lit,value);
    if (it!=lit)
        return true;
    return false;
}

int SortedList::get_value(int i) const
{
    int size=data.size();
    if ((size/2)>=i)
   {
        list<int>::const_iterator it;
        int k=0;
        for(it=data.begin();k<i;k++,++it);
        return *it;
   }
   else
    {
        list<int>::const_reverse_iterator rIt;
        i=size-i;
        int j=0;
        for(rIt=data.rbegin();j<i-1;j++,++rIt);
        return *rIt;
     
     
   }
}
void SortedList:: clear()
{
    for(auto it=data.begin();it!=data.end();)
        it=data.erase(it);
}