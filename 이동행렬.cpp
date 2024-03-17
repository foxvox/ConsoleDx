#include <iostream> 
#include <d3d9.h> 
#include <d3dx9.h> 
#include <d3dx9math.h>
// #include <directxmath.h>

using namespace std; 

int main()
{
    D3DXMATRIX matMatrix;
    
    cout << "------- 이동행렬 --------" << endl; 
    D3DXMatrixTranslation(&matMatrix, 0.5f, 0.6f, 0.7f); 
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%7.1f", matMatrix(i, j)); 
        }
        cout << endl; 
    }

    return 0;     
}

