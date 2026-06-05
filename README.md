# README

基于stm32 standard peripheral libraries的USART串口收发字符练习

## 实现效果

![usart_sscom_print](images\usart_sscom_print.png)



## 核心功能

* 功能点 1：实现了DevEBox 基础板stm32f407zgt6的PA9 PA10转换TX1 RX1的串口发送接收功能
* 功能点 2：打印输入字符的ASCII码，波特率可设置115200u 2000000u
* 功能点 3：借助结构体实现面向对象式封装，配合前向声明规避头文件循环依赖

## 运行环境与依赖

* **操作系统**：Windows 11
* **依赖库**：stm32 standard peripheral libraries
* **硬件**：USB转串口 CH340







