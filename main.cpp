//Author: Alfredo Aguirre Dominguez

    #include <iostream>
    #include <vector>
    #include <string>

  using namespace std;

int main ()
{

vector < vector < char > > matrix;

int input;
int input2;
    cout << "Enter rows and columns of stars: " << endl;
    cin >> input;
    cin >> input2;

matrix.resize(input);
   for (int row = 0; row < matrix.size(); row++)
    {
    matrix[row].resize(input2);
    }
  
   for (int col = 0; col < matrix.size(); col++)
    {
        for (int star = 0; star < matrix.size(); star++)
        {
        matrix[col][star] = '*';
        }
    }
    
   for (int i = 0; i < matrix.size(); i++)
   {
        for (int row = 0; row < matrix[i].size(); row++)
        {
             cout << matrix[i][row];
        }
    cout << endl;
   }

return 0;
}
