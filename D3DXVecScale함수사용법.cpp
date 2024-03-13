#include <iostream> 
#include <iomanip>
#include <d3dx9.h> 

using namespace std; 

int main()
{
    float fScale = 2.0f; 
    D3DXVECTOR3 v5(2.0f, 1.0f, 0.0f); 
    D3DXVECTOR3 v7(2.0f, 1.0f, 0.0f);

    // v5를 fScale배 해서 v7에 할당해라! 
    D3DXVec3Scale(&v7, &v5, fScale); 
    cout << "값과 벡터의 곱: "; 
    cout << setw(4) << v5.x << setw(4) << v5.y << setw(4) << v5.z << endl; 

    return 0; 
}

