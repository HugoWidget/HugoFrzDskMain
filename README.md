# HugoFrzDskMain

驱动级读写磁盘解除冰点

### 组件

1. HugoFreezeDisk
2. HugoFrzDskMain
3. WinDisk驱动

### 使用

1. 加载`WinDisk_xxx.sys`，可以使用`HugoFreezeDisk.exe`加载，也可以用其他方式
2. 管理员模式运行`HugoFrzDskMain.exe`

### 编译

1. 下载**Cygwin**及必要组件
2. 打开**Cygwin64 Terminal**运行：

```cmd
make  CONFIG=Release
```

3. 如果想要从源码构建`libntfs-3g`，见Release中的`ntfs-3g.zip`

### 许可证

[ntfs-3g](https://github.com/tuxera/ntfs-3g)：[GNU General Public License v2.0](licenses/LICENSE-ntfs-3g)

本项目采用 **GNU General Public License v3.0**。详见 [LICENSE](LICENSE)。