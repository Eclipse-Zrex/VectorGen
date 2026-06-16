// Geometry.h
#ifndef GEOMETRY_H
#define GEOMETRY_H

#include <QPainter>
#include <QColor>
#include <string>
#include <vector>

// 图形类型枚举，用于文件保存与读取时的标记
enum class ShapeType { CIRCLE, RECT, LINE, TRIANGLE, POLYGON };

// 抽象基类
class Shape {
protected:
    QColor m_penColor;     // 画笔颜色
    QColor m_brushColor;   // 画刷（填充）颜色
    int m_lineWidth;       // 线条粗细

public:
    Shape(QColor pColor, QColor bColor, int lWidth)
        : m_penColor(pColor), m_brushColor(bColor), m_lineWidth(lWidth) {}
    virtual ~Shape() {} // 虚析构函数，防止内存泄漏

    virtual void draw(QPainter* painter) = 0; // 纯虚函数：多态绘制
    virtual std::string serialize() = 0;      // 纯虚函数：序列化（用于保存文件）
};

// 以下为各子类声明，由成员 B 在 Geometry.cpp 中去具体实现
class Circle : public Shape {
    int m_x, m_y, m_r;
public:
    Circle(int x, int y, int r, QColor pc, QColor bc, int lw);
    void draw(QPainter* painter) override;
    std::string serialize() override;
};

class RectShape : public Shape {
    int m_x, m_y, m_w, m_h;
public:
    RectShape(int x, int y, int w, int h, QColor pc, QColor bc, int lw);
    void draw(QPainter* painter) override;
    std::string serialize() override;
};

class LineShape : public Shape {
    int m_x1, m_y1, m_x2, m_y2;
public:
    LineShape(int x1, int y1, int x2, int y2, QColor pc, QColor bc, int lw);
    void draw(QPainter* painter) override;
    std::string serialize() override;
};

class Triangle : public Shape {
    int m_x1, m_y1, m_x2, m_y2, m_x3, m_y3;
public:
    Triangle(int x1, int y1, int x2, int y2, int x3, int y3, QColor pc, QColor bc, int lw);
    void draw(QPainter* painter) override;
    std::string serialize() override;
};

class PolygonShape : public Shape {
    std::vector<std::pair<int, int>> m_points; // 多边形顶点集
public:
    PolygonShape(const std::vector<std::pair<int, int>>& points, QColor pc, QColor bc, int lw);
    void draw(QPainter* painter) override;
    std::string serialize() override;
};

#endif // GEOMETRY_H