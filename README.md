# HugoFrzDskMain

> [!NOTE]
>
> 建议阅读 [HugoWidget 简介](https://github.com/HugoWidget/HugoWidget) 以了解开发情况

## 简介

驱动级读写磁盘解除冰点

## 组件

1. HugoFreezeDisk
2. HugoFrzDskMain
3. WinDisk驱动

## 使用

1. 加载`WinDisk_xxx.sys`，可以使用`HugoFreezeDisk.exe`加载，也可以用其他方式
2. 管理员模式运行`HugoFrzDskMain.exe`

## 编译

1. 下载**Cygwin**及必要组件
2. 打开**Cygwin64 Terminal**运行：

```cmd
make  CONFIG=Release
```

3. 如果想要从源码构建`libntfs-3g`，见Release中的`ntfs-3g.zip`

## 参考

[各类还原软件/影子系统的穿透方法](https://www.52pojie.cn/thread-1990770-1-1.html)

## 许可证

[ntfs-3g](https://github.com/tuxera/ntfs-3g)：[GNU General Public License v2.0](licenses/LICENSE-ntfs-3g)

本项目采用 **GNU General Public License v3.0**。详见 [LICENSE](LICENSE)。

## 更多项目

[IceMelt](https://github.com/chenjintang-shrimp/IceMelt) 采用了完全相同的逻辑，但提供了更用户友好的UI设计（原帖使用MFC构建，也很好用）