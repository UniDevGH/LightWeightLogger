# LightWeightLogger——一个用C语言开发的轻量的日志框架
## 使用方法
### void Debug(const char* text)
输出调试信息  
```
Debug("This is a debug message.");
```
### void Info(const char* text)
输出信息  
```
Info("This is a info message.");
```
### void Warn(const char* text)
输出警告信息  
```
Warn("This is a warning message.");
```
### void Error(const char* text)
输出错误信息  
```
Error("This is a error message.");
```
### void Fatal(const char* text)
输出严重错误信息  
```
Fatal("This is a fatal message.");
```
