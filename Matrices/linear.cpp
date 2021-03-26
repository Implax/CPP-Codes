#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std ;


int LinearIndx(int i, int j, int col){
    const int I = i * col + j;
    return I;
}

int InverseIdx(int I, int col){

    int i = I / col;
    int j = I % col;
    return i;
    return j;
}

int main(int argc, char *argv[]){

  int matrix1[8][8];
  int matrix2[32][32];
  int matrix3[128][128];

  srand(time(0));

  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      if (i < j)
      {
        matrix1[i][j] = 0;
        cout << matrix1[i][j] << " ";
      }
      else{
      int random =  rand() % (1000 - 1) + 1;
      matrix1[i][j] = random;
      cout << matrix1[i][j] << " ";
      }
    }
    cout << endl;
  }

  for (int i = 0; i < 32; i++)
    {
      for (int j = 0; j < 32; j++)
      {
        if (i < j)
        {
          matrix2[i][j] = 0;
          cout << matrix2[i][j] << " ";
        }
        else{
        int random =  rand() % (1000 - 1) + 1;
        matrix2[i][j] = random;
        cout << matrix2[i][j] << " ";
        }
      }
      cout << endl;
    }

for (int i = 0; i < 128; i++)
  {
    for (int j = 0; j < 128; j++)
    {
      if (i < j)
      {
        cout << "0" << " ";
      }
      else{
      int random =  rand() % (1000 - 1) + 1;
      matrix3[i][j] = random;
      cout << matrix3[i][j] << " ";
      }
    }
    cout << endl;
  }

  // Converting 2d Array to 1d Array
  int mat1[64];
  int mat2[1024];
  int mat3[16384];


    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            int I =LinearIndx(i,j,8);
                int digit;
                digit = matrix1[i][j];
                mat1[I] = digit;
                cout<< digit << " ";
        }
    }

    for (int i = 0; i < 32; i++) {
        for (int j = 0; j < 32; j++) {
            int I =LinearIndx(i,j,32);
                int digit;
                digit = matrix2[i][j];
                mat2[I] = digit;
                cout<< digit << " ";
        }
    }

    for (int i = 0; i < 128; i++) {
        for (int j = 0; j < 128; j++) {
            int I =LinearIndx(i,j,128);
                int digit;
                digit = matrix3[i][j];
                mat3[I] = digit;
                cout<< digit << " ";
        }

    }


	return 0;

}
