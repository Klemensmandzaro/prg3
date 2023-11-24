#include <iostream>
using namespace std;
void bubblesort(int A[], int n);
int A[10]={1, 2, 3,5 ,2, 9, 1, 0, 4, 6};
int n;
int main() {
    bubblesort(A, n);
    return 0;
}
void bubblesort(int A[], int n)
{
    n=sizeof(A)+2;
    do {

        int b;
        for( int i=0; i<n-1; i++)
        {
            if (A[i]>A[i+1])
            {
                b=A[i];
                A[i]=A[i+1];
                A[i+1]=b;
            }
        }
        n--;
    }
    while (n>1);
    for (int i = 0; i <= sizeof(A)+1; i++)
    {
        cout << A[i] << " ";
    }


}
/*procedure bubblesort(A : lista elementów do posortowania, n : liczba_elementów(A))
n = liczba_elementów(A) do
for (i = 0; i < n-1; i++) do: if A[i] > A[i+1] then
        swap(A[i], A[i+1]) end if
end for
n = n-1 while n > 1
end procedure
*/
