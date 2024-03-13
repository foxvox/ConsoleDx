#include <iostream> 
#include <d3d9.h> 
#include <d3dx9.h> 

using namespace std; 

int main()
{
    D3DXVECTOR3 v1(3.0f, 0.0f, 0.0f); 
    D3DXVECTOR3 v2(0.0f, 3.0f, 0.0f); 

    D3DXVECTOR3 vResult; 

    D3DXVec3Cross(&vResult, &v1, &v2); 
    printf("Norm 전 => x: %f, y: %f, z: %f \n", vResult.x, vResult.y, vResult.z); 

    D3DXVec3Normalize(&vResult, &vResult);     
    printf("Norm 후 => x: %f, y: %f, z: %f \n", vResult.x, vResult.y, vResult.z); 

    return 0;     
}

