#include <iostream> 
#include <d3d9.h> 
#include <d3dx9.h> 

using namespace std; 

int main()
{
    D3DXVECTOR3 v7(3.0f, 0.0f, 0.0f); 
    D3DXVECTOR3 v8(-3.0f, 0.0f, 0.0f); 
    float fCos, fDot, fScale; 

    fDot = D3DXVec3Dot(&v7, &v8); 
    fScale = D3DXVec3Length(&v7) * D3DXVec3Length(&v8); 
    fCos = fDot / fScale; 
    printf("라디안: %f \n", fCos); 

    return 0;     
}

