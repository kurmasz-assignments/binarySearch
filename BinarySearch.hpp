//
// Created by Zachary Kurmas on 2019-08-19.
//

#include <vector>
#define NOT_FOUND -1

/**
* Performs the standard binary search using two comparisons per level.
* Returns index where item is found or -1 if not found.
*/
template <typename Comparable>
int binarySearch( const std::vector <Comparable> & a, const Comparable & x )
{
    int low=0;
    int high= a.size( ) - 1;

    while( low <= high ) {
       int mid=(low + high ) / 2;
       if( a[mid]<x) {
           low = mid+ 1;
       } else if( a[ mid ]>x) {
           high = mid - 1;
       } else {
         return mid;
      }
   }
   return NOT_FOUND;  // NOT_FOUND defined as -1
 }
