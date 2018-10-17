#include <vector>
#include <iostream>
using namespace std;

class matrix
{
    public:
        int row, column;
        vector<vector<long long>> element;
        matrix(int row, int column);
        void init_matrix();
        matrix operator*(matrix m);
};

matrix::matrix(int mrow, int mcolumn)
{
    row = mrow;
    column = mcolumn;
    element = vector<vector<long long>>(mrow, vector<long long>(mcolumn, 0));
}

void matrix::init_matrix()
{
    for(int i=0; i<row; i++)
    {
        for(int n=0; n<column; n++)
        {
            element[i][n] = i*1000 + n;
        }
    }
}

matrix matrix::operator*(matrix m)
{
    if(!(m.column==row))
    {
        std::cout << "the number of columns and row must be equal." << std::endl;
        printf("m: %d, %d\n", &m.row, &m.column);
        printf("self: %d, %d\n", &row, &column);
        exit(1);
    }
    matrix res_m = matrix(m.row, column);
    for(int i=0; i<m.row; i++)
    {
        for(int n=0; n<row; n++)
        {
            long long sum=0;
            for(int j=0; j<m.column; j++)
            {
                sum += m.element[i][j] * element[j][n];
            }
            res_m.element[i][n] = sum;
        }
    }
    return res_m;
}

int main()
{
    matrix m = matrix(1000, 1000);
    m.init_matrix();

    matrix dotm = m * m;

    // printf("%lld\n", dotm.element[0][0]);
    // printf("%lld\n", dotm.element[99][99]);

    return 0;
}