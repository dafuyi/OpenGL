# How to complie

# On Linux
you should shell cmd should like this:

```sh
g++ -o app app.cpp -lglut -lGLU -lGL
```

Ref Here: <https://www.opengl.org/discussion_boards/showthread.php/172614-undefined-reference-to-glutInit>

# Windows

## ��װGLUT���߰�    

������ GLUT ��

Windows�����°�װGLUT�Ĳ��裺    
1. �����ص�ѹ�����⿪�����õ�5���ļ�
2. ���ҵİ�װĿ¼Ϊ����    
  + ��d:\Program Files\Microsoft Visual Studio\VC98\include\GL�ļ��С����ѽ�ѹ�õ���glut.h�ŵ����GL�ļ����û��GL�ļ��п����Լ���һ����һ�㶼�еġ�
  + ��d:\Program Files\Microsoft Visual Studio\VC98\lib�ļ��С����ѽ�ѹ�õ���glut.lib��glut32.lib�ŵ���̬�����������ļ��У���lib�ļ��С�
  + �ѽ�ѹ�õ���glut.dll��glut32.dll�ŵ�����ϵͳĿ¼�����system32�ļ����ڡ������͵�λ��Ϊ��C:\Windows\System32�����Ƿǳ���Ҫ�Ķ�̬���ӿ����ã�  

## ��������

�������£�    

1. ����һ��Win32 Console Application�������Ҵ�����Ϊ����������ΪsimpleGL��    
+ ����OpenGL libraries:��Visual C++���ȵ���Project���ٵ���Settings�����ҵ�Link�����������Object/library modules ����ǰ�����opengl32.lib Glut32.lib Glaux.lib glu32.lib ��    
+ ����Project Settings�е�C/C++��ǩ����Preprocessor definitions �е�_CONSOLE��Ϊ__WINDOWS����󵥻�OK��   

���ڣ�׼����������������ˣ��ɲ�Ҫ������һ���������û�����ú��ڱ��뼰���й������ܻ����ġ�

����VS2005�����������ã�
1. �� glut.h ���Ƶ� VC ��װ·���µ� PlatFormSDK\include\gl �ļ���
2. �� glut32.lib ���Ƶ� VC ��װ·���µ� PlatFormSDK\lib �ļ���
3. �� glut32.dll ���Ƶ� Windows\System32 �ļ���
4. �� VC �д�������̨Ӧ�ó�����ѡ���������ʹ��Ԥ����ͷ��������Ӱ�����ֲ�ԣ�
5. �� VC �д���Ŀ->���ԶԻ�������������ã�
        �������á�������ѡ��Ϊ���������á�<br>
        �� ��������--���롱��<br>
        �ڡ����������������:
```
OpenGL32.lib
glu32.lib
glut32.lib
```
>64λ��ϵͳӦ�ý�glut32.dllͬʱ����windows�µ�system32��SysWOW64�£������ҵ�glut32.dll
