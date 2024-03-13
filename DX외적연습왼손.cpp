#include <iostream> 
#include <d3d9.h> 
#include <d3dx9.h> 

// 벡터 내적 => + : 두 액터가 같은 방향, - : 두 액터가 다른 방향 
// 벡터 외적 => 화면방향: 출력, 반대방향 은면: 미출력 

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

