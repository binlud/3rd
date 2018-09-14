# 3rd
  
###  目录结构：  
 3rd  
 ├── include  
 │   ├── boost  
 │   ├── log4cplus  
 │   ├── util  
 │   └── zookeeper  
 └──lib  
     └── pkgconfig 
  
### 项目说明：  
* 此项目主要用于维护c/c++第三方库头文件及库文件
* 库编译环境: CentOS release 6.6 , Linux 2.6.32-504.el6.x86_64
* 包含以下第三方开源库开发包：  
  boost_1_57_0  
  log4cplus-2.0.1  
  zeromq-4.0.5  
  zookeeper-3.4.12  
  
### 引用示例：  
  eg: 引用boost库：  
  1. 下载3rd到根目录下：/3rd
  2. 编写你自己的c/c++源文件，并引用boost库头文件： #include <boost/thread.hpp>
  3. 编译时，添加以下编译选项
    -I/3rd/include -L/3rd/lib -Wl,-rpath=/3rd/lib -lboost_system -lboost_thread
