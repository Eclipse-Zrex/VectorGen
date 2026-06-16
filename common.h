// 三人共用的全局数据结构，写在一个common.h文件里
struct ShapeData {
    int type;       // 1=圆, 2=矩形, 3=直线
    int x1, y1;     // 圆心/矩形左上角/直线起点
    int x2, y2;     // 矩形宽高/直线终点（圆只用x1,y1,r）
    int r;          // 半径
    int color;      // 1=红,2=绿,3=蓝
    bool isValid;   // 数据是否合法
};
extern ShapeData g_shapeData; // 全局变量，三人都能读写
