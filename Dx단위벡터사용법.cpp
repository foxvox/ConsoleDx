#include <iostream> 
#include <iomanip>
#include <d3dx9.h> 
#include <d3d9.h> 

using namespace std; 

int main()
{
    D3DXVECTOR3 v6(2.0f, 2.0f, 3.0f); 
    D3DXVECTOR3 vResult; 
    float fNormalize; 

    D3DXVec3Normalize(&vResult, &v6); 
    printf("단위벡터:  %f,  %f,  %f \n", vResult.x, vResult.y, vResult.z); 
    fNormalize = D3DXVec3Length(&vResult); 
    printf("크기: %f \n", fNormalize);


    return 0; 
}

