# ParameterSurface

## 简介
ParameterSurface 是一个ZEMAX 的自定义面型。  

该面型光学属性为标准球面，增加了13个可输入参数，Par 0 - Par 12。

这是ZEMAX问题，ZEMAX16实测只能用到Par12，代码上预置再多也没用，希望官方能放开。

现成DLL在根目录Dll文件夹下

## 编译环境
VS2015


## 用法
放到指定目录：

ZEMAX 16 13  

	<program>\DLL\Surfaces
    
ZEMAX 09   

	<program>\DLL\Surfaces

其中  

    <program> 为ZOS安装目录，默认为： 
	C:\Program Files\Zemax OpticStudio  

64位ZEMAX使用64位的Dll，32位ZEMAX使用32位的Dll。  
注：zemax09是32位程序。


> 更多相关信息参见：  
> 光外网  
> [www.raywhy.com](http://www.raywhy.com "www.raywhy.com")
