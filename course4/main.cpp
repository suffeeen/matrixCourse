#include "eigen3/Eigen/Core"
#include <iostream>
//eigen pow
#include "eigen3/Eigen/Dense"
using namespace std;

int main() 
{
    //定义一个double矩阵
    Eigen::Matrix<double, 3, 3> m;
    m << 1, 2, 3,
         4, 5, 6,
         7, 8, 9;
    // 2. 获取矩阵的行数和列数；
    cout << "m rows: " << m.rows() << endl;
    cout << "m cols: " << m.cols() << endl;
    // 3. 获取矩阵元素的数量；
    cout << "m size: " << m.size() << endl;
    // 4. 取出矩阵某一行的行向量；
    Eigen::Matrix<double, 1, 3> m_row = m.row(1);
    cout<<"row1:\n"<<m_row<<endl;
    // 5. 取出矩阵某一列的列向量；
    Eigen::Matrix<double, 3, 1> m_col = m.col(1);
    cout<<"col1:\n"<<m_col<<endl;
    // 6. 求矩阵的幂；
    Eigen::Matrix<double, 3, 3> m_pow = m * m * m;
    cout<<"m^3:\n"<<m_pow<<endl;
    // 7. 求矩阵的转置；
    Eigen::Matrix<double, 3, 3> m_transpose = m.transpose();
    cout<<"m^T:\n"<<m_transpose<<endl;
    return 0;

    
    
}