/* Code by Pikulin Ilya, Mar 2015 */

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

void quicksort( int a[], int N );

int main( int argc, char* argv[] )
{
    int a[] = { 1, 234, 55, 23, 7357, 345, 865 };
    quicksort( a, sizeof( a ) / sizeof( a[0] ) );
    for ( int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

void quicksort( int a[], int N )
{
    int l = 0, r = N - 1; //left border, right border
    int temp, p;          //temp is for swap; p is the middle element  
    p = a[ N / 2 ];

    do
    {
        while ( a[l] < p) 
        {
            ++l;
        }
        while ( a[r] > p)
        {
            --r;
        }

        if ( l <= r )
        {
            temp = a[l];
            a[l] = a[r];
            a[r] = temp;
            ++l;
            --r;
        }
    } while ( l <= r );

    if ( r > 1 )
    {
        quicksort( a, r );
    }
    if ( N > l )
    {
        quicksort( a + l, N - l );
    }
}
