<div align="center">

# 🎨 QPainter-Vector

**基于 Qt 的简易矢量绘图工具 | NWAFU CPP 实习项目**

![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=flat-square&logo=cplusplus)
![Framework](https://img.shields.io/badge/Framework-Qt5-41CD52?style=flat-square&logo=qt)
![License](https://img.shields.io/badge/License-MIT-blue?style=flat-square)
![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-lightgrey?style=flat-square)

</div>

---

## 1. Contributors

| 成员 | 职责方向 |
|:---:|:---:|
| **周业贵** | 界面开发 & 基础绘图 |
| **张丰林  ** | 数据处理 & 图形管理 |
| **张博雄** | 绘图渲染 & 文件输出 |

> 三人分工协作，各司其职，完成从输入 → 计算 → 渲染的完整矢量绘图流程。

---

## 2. Interface

<!-- 替换为实际项目截图 -->

<p align="center">
  <img src="screenshot/main_window.png" alt="Main Interface" width="780"/>
</p>

<p align="center">
  <img src="screenshot/toolbar.png" alt="Toolbar Detail" width="360"/>
  &nbsp;&nbsp;
  <img src="screenshot/draw_demo.png" alt="Draw Demo" width="360"/>
</p>

---

## 3. Functions

### 📂 FILE — 文件处理模块

| 功能 | 快捷键 | 说明 |
|:---|:---:|:---|
| New | `Ctrl+N` | 新建空白画布 |
| Open | `Ctrl+O` | 打开 SVG 文件 |
| Save | `Ctrl+S` | 保存为 SVG 格式 |
| Save As | `Ctrl+Shift+S` | 另存为指定路径 |
| Export | `Ctrl+E` | 导出为 PNG / JPG |
| Exit | `Alt+F4` | 退出程序 |

### ✏️ DRAW — 绘图功能模块

| 功能 | 说明 |
|:---|:---|
| **Line** | 直线绘制，支持端点拖拽 |
| **Rectangle** | 矩形绘制，支持旋转、缩放（对角 / 单边）、填充 |
| **Ellipse** | 椭圆绘制，支持轴向调整与填充 |
| **Polygon** | 多边形绘制，支持逐点添加与闭合 |
| **Bezier Curve** | 四控制点贝塞尔曲线，含两条可拖拽控制线 |
| **Text** | 文本框插入，支持字体与字号配置 |
| **Image** | 图片插入画布 |

### ⚙️ ACTION — 图形操作模块

| 功能 | 快捷键 | 说明 |
|:---|:---:|:---|
| Select | `V` | 选中图形并拖拽移动 |
| Zoom In | `Ctrl++` | 画布放大 |
| Zoom Out | `Ctrl+-` | 画布缩小 |
| Reset View | `Ctrl+0` | 还原原始比例 |
| Rotate | `R` | 旋转选中图形 |
| Delete | `Del` | 删除选中图形 |
| Clear | `Ctrl+Shift+C` | 清屏 |
| Undo | `Ctrl+Z` | 撤销操作 |

### 🔧 ASSIST — 辅助功能模块

| 功能 | 说明 |
|:---|:---|
| Grid | 网格绘制，可开关切换 |
| Grid Snap | 网格吸附对齐 |
| Clock | 状态栏实时时钟显示 |
| Status Bar | 鼠标坐标、当前图形参数实时反馈 |
| Color Picker | 画笔颜色与填充颜色选取 |
| Line Width | 线宽调节 |

---

### 功能模块总览

