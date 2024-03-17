#include <iostream> 
#include <d3d9.h> 
#include <d3dx9.h> 
#include <d3dx9math.h>
// #include <directxmath.h>

using namespace std; 

int main()
{
    D3DXMATRIX matIdentity, matMatrix, matResult; 
    D3DXMatrixIdentity(&matIdentity);

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matMatrix(i, j) = float(i * 4 + j + 1);
        }
    }

    // matResult = matMatrix * matIdentity;

    D3DXMatrixMultiply(&matResult, &matMatrix, &matIdentity);

    cout << "[ 결과행렬 ]" << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {            
            printf("%7.1f", matResult.m[i][j]);
        }
        cout << endl; 
    }

    return 0;     
}

