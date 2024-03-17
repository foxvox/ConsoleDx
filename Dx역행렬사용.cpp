#include <iostream> 
#include <d3d9.h> 
#include <d3dx9.h> 
#include <d3dx9math.h>
// #include <directxmath.h>

using namespace std; 

int main()
{
    D3DXMATRIX matMatrix, matResult;
    D3DXMatrixRotationX(&matMatrix, 0.3f); 

    cout << "------- 회전행렬 --------" << endl; 
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%7.1f", matMatrix(i, j)); 
        }
        cout << endl; 
    }

    cout << "------- INVERSE --------" << endl;
    D3DXMatrixInverse(&matResult, NULL, &matMatrix);         
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {            
            printf("%7.1f", matResult(i, j));
        }
        cout << endl; 
    }

    cout << "------- INVERSE --------" << endl;
    D3DXMatrixInverse(&matResult, NULL, &matResult);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%7.1f", matResult(i, j));
        }
        cout << endl;
    }

    return 0;     
}

