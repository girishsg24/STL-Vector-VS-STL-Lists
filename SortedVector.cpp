#include <iostream>
#include <iterator>
#include <algorithm>
#include "SortedVector.h"

using namespace std;

SortedVector::SortedVector()
{
}

SortedVector::~SortedVector()
{
}

/***** Complete this file. *****/

bool SortedVector::check()
{
    if (data.size() == 0) return true;

    vector<int>::iterator it = data.begin();
    int prev = *it;
    while ((++it != data.end()) && (prev <= *it));
    return it == data.end();
}

void SortedVector:: prepend(int value)
{
    auto it=data.begin();
    data.insert(it,value);
    
}

void SortedVector::append(int value)
{
    auto it=data.end();
    data.insert(it,value);
}

bool SortedVector::find(int value) const
{
    vector<int>::const_iterator it=data.begin();
    vector<int>::const_iterator lit=data.end();
    it=std::find(it,lit,value);
    if (it!=lit)
        return true;
    return false;
}

 int SortedVector::get_value(int i) const
{
     return data[i];
}

void SortedVector:: clear()
{
    for(auto it=data.begin();it!=data.end();)
        it=data.erase(it);
}