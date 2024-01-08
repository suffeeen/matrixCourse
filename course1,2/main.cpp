#include "eigen3/Eigen/Core"
#include <iostream>
int main()
{
    Eigen::MatrixXd mxd = Eigen::MatrixXd::Zero(3,3);//定义0矩阵
    Eigen::VectorXd vxd = Eigen::VectorXd::Zero(3);//定义0向量
    Eigen::Matrix<double, 3, 3> m;
    m << 1, 0, 0,
         0, 1, 0,
         0, 0, 1;

    std::cout << m(0, 0) << std::endl;//访问向量元素
    Eigen::Vector3d v;
    v << 1, 1, 1;

    Eigen::Vector3d mv = m * v;//向量矩阵点乘
    mv = mv - v;//向量减法

    std::cout << mv << std::endl;
}