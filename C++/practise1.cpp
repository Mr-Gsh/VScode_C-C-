#include <iostream>
#include <cmath>

using namespace std;

//已知半径和高，计算一个圆柱体的体积
int main()
{
    float radius = 2.5f; //圆柱体半径
    float height = 4.0f; //圆柱体高

    float volume = 3.14 * pow(radius , 2) * height;
    cout << "圆柱体的体积是：" << volume << endl;
    return 0;
}