#include "eigen3/Eigen/Core"
#include <iostream>
using namespace std;
int main()
{
    Eigen::Vector3d v1(1,2,3);
    Eigen::Vector3d v2(2,3,4);
    double v1norm = v1.norm();//向量的模
    double v2norm = v2.norm();

    Eigen::Vector3d v3 = v1 / v1norm;//归一化

    double dot = v1.dot(v2);//点乘
    double theta = acos(dot / (v1norm * v2norm));//夹角
    cout<<"theta:"<<theta<<endl;
    double v1Onv2 = v1norm * cos(theta);//v1在v2上的投影
    Eigen::Vector3d v1Onv2Vec = v1Onv2 * v2.normalized();//v1在v2上的投影向量
    cout<<"v1Onv2Vec:"<<v1Onv2Vec<<endl;
    return 0;

}