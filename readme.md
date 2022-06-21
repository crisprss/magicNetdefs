# magicNetdfs

## Reference
[https://github.com/Wh04m1001/DFSCoerce](https://github.com/Wh04m1001/DFSCoerce)

## Usage
考虑进一步更新，目前只是验证该RPC方法的可利用性，后续考虑对SYSTEM令牌的具体利用

![](https://md.buptmerak.cn/uploads/upload_e685f7441a6f265f7cda398948d7dfa4.png)


## Description
利用MS-DFSNM协议
[https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-dfsnm/95a506a8-cae6-4c42-b19d-9c1ed1223979](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-dfsnm/95a506a8-cae6-4c42-b19d-9c1ed1223979)

其中提供了RPC方法`NetrDfsRemoveStdRoot`,可以进行UNC欺骗使得特权进程访问自定义管道:
![](https://md.buptmerak.cn/uploads/upload_ea93dac36586bb28f7657c1de7ecd805.png)


## Limitation
局限主要在于两个方面，其一是该服务只针对`Windows Server`或者域环境中:
![](https://md.buptmerak.cn/uploads/upload_5413a8470987a5df35239e9f9bb1833d.png)

其二是`dfssvc.exe`的令牌权限十分有限:
![](https://md.buptmerak.cn/uploads/upload_ad560f8f2423e8d6d5a86b3cac7affaa.png)

后续考虑滥用`SeRestorePrivilege`或者`SeBackupPrivilege`实现一些敏感操作
