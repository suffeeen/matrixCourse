#include "eigen3/Eigen/Core"
#include <iostream>
//eigen pow
#include "eigen3/Eigen/Dense"
using namespace std;
#define PI 3.1415926
int main() 
{
    // 使用eigen库完成以下的编程：
    // 1.定义一个2行10列矩阵存放以下点：(0,0) (0,5) (3,5) (3,4) (1,4)(1,3) (2,3) (2,2) (1,2) (1,0)；
    // 2.使用[[2, 0], [0, 1.5]]缩放矩阵对上述点进行缩放；
    // 3.对上述点绕Z轴顺时针旋转60°；
    // 4.生成一个4*4单位矩阵；
    // 5.求矩阵[[1, 2], [3, 4]]的逆矩阵；
    
    Eigen::Matrix<float, 10, 2> points_t;//10行2列,方便输入
    points_t << 0, 0, 0, 5, 3, 5, 3, 4, 1, 4, 1, 3, 2, 3, 2, 2, 1, 2, 1, 0;
    Eigen::Matrix<float, 2, 10> points;
    points = points_t.transpose();//转置
    cout<<"points:\n"<<points<<endl;

    Eigen::Matrix<float, 2, 2> scale;
    scale << 2, 0, 0, 1.5;
    cout << "scale:\n" << scale << endl;

    Eigen::Matrix<float, 2, 10> points_scale = scale * points;
    cout << "points_scale:\n" << points_scale << endl;

    Eigen::Matrix<float, 2, 2> rotate;
    rotate << cos(PI/3), -sin(PI/3), sin(PI/3), cos(PI/3);
    cout << "rotate:\n" << rotate << endl;

    Eigen::Matrix<float, 2, 10> points_rotate = rotate * points;
    cout << "points_rotate:\n" << points_rotate << endl;

    Eigen::Matrix<float, 4, 4> unit = Eigen::Matrix<float, 4, 4>::Identity();
    cout << "unit:\n" << unit << endl;

    Eigen::Matrix<float, 2, 2> inverse;
    inverse << 1, 2, 3, 4;
    cout << "inverse:\n" << inverse << endl;
    cout << "inverse.inverse():\n" << inverse.inverse() << endl;

    return 0;
}