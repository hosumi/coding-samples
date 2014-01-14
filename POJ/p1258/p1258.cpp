/**
   Agri-Net
   http://poj.org/problem?id=1258
*/
#include <iostream>

using namespace std;

// adjancency matrix
const static int N_MAX = 100;
static int A[N_MAX][N_MAX];   

static inline void DPRINT(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

int main(void){
    int n;
    while(cin >> n) {
        // Read conectivity matrix
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> A[i][j];
            }
        }

        //DPRINT(n);

    }

    return 0;
}


    
