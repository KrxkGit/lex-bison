## 环境
Ubuntu-latest

## 代码讲解

后续待更新...

## 使用方法

KrxkCompiler是已经生成可执行的文件

代码从test.in中读入，生成四元式输出到test.out中


### 编译方法

1. lex.l     词法分析器
2. yacc.y  语法分析器
3. xu.h     头文件

只需要以上三个文件即可，其他文件均为生成的中间文件

为了完成编译，只需要执行:
```
make
```
指令即可。
若要清理文件，可选择执行：
1. clean		清除所有中间文件及可执行程序
2. clean_mid	清除所有中间文件	
3. clean_result	清除可执行程序

### 使用 Github 编译

1. Fork 本仓库
2. 通过 Actions 运行 Build, 即可在 Artifacts 中下载编译输出文件。


