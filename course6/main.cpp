#include "eigen3/Eigen/Core"
#include <iostream>
#include "eigen3/Eigen/Dense"
using namespace std;

Eigen::VectorXd gauss_jordan(Eigen::MatrixXd A, Eigen::VectorXd b)
{
    int n = A.rows();
    for (int i = 0; i < A.cols(); i++)
    {
        double aii = A(i, i);
        A.row(i) /= aii;
        b.row(i) /= aii;
        //将第i列的其他元素变为0
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                double aij = A(j, i);
                A.row(j) -= aij * A.row(i);
                b.row(j) -= aij * b.row(i);
            }
        }
    }
    return b;
}

int main() 
{
    Eigen::Matrix3d A;
    Eigen::Vector3d b;
    A << 1,2,4,
         3,7,2,
         2,3,3;
    b << 7, -11, 1;
    cout << gauss_jordan(A, b) << endl;

    return 0;
}