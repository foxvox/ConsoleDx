#include <iostream> 
#include <d3d9.h> 
#include <d3dx9.h> 
#include <d3dx9math.h>
// #include <directxmath.h>

using namespace std; 

int main()
{
    D3DXMATRIX matMatrix, matResult; 

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matMatrix(i, j) = float(i * 4 + j + 1);
        }
    }


    cout << "[전치 전]" << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {            
            printf("%7.1f", matMatrix(i, j));
        }
        cout << endl; 
    }

    cout << "----------------------------" << endl; 
    D3DXMatrixTranspose(&matResult, &matMatrix); 

    cout << "[전치 후]" << endl;
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

