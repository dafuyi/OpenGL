// OpenGL.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include <GL/glut.h>

void myDisplay(void)

{

	// GL_COLOR_BUFFER_BIT 表示清楚颜色
	glClear(GL_COLOR_BUFFER_BIT);

	// 绘制一个矩形
	glRectf(-0.5f, -0.5f, 0.5f, 0.5f);

	// 刷新缓冲区数据
	glFlush();

}

int main(int argc, char *argv[])

{
	// 对 GLUT 初始化
	glutInit(&argc, argv);

	// 设置显示方式，GLUT_RGB 表示使用 RGB 颜色， GLUT_SINGLE 表示使用单缓冲
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

	// 设置窗口的位置，以右上角为原点
	glutInitWindowPosition(100, 100);

	// 设置窗口大小
	glutInitWindowSize(400, 400);

	// 设置窗口的 Title
	glutCreateWindow("第一个OpenGL程序");

	// 设置绘图回掉函数
	glutDisplayFunc(&myDisplay);

	// 等待窗口关闭以后才返回
	glutMainLoop();

	return 0;

}
