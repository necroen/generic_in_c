### <p align="center">generic_in_c</p>
看TH文件夹下的文件，会发现 TH 下有一个 **THStorage.c** 和 **THStorage.h** 文件，**generic** 文件夹下又有两个同名的 **THStorage.c** 和 **THStorage.h** 文件。  
其实外层的**THStorage.c**会包含内层的**THStorage.c**文件，然后结合**THGenerateAllTypes.h**文件，将内层的泛型函数 **膨胀** 成各种类型的函数。  

下面是文件的对应关系：  
<table>
<tr>
    <td> generic.c </td>
    <td> TH\generic\THStorage.c </td>
</tr>
<tr>
    <td> generic.h </td>
    <td> TH\generic\THStorage.h </td>
</tr>
<tr>
    <td> show_types.c </td>
    <td> TH\THStorage.c </td>
</tr>
<tr>
    <td> show_types.h </td>
    <td> TH\THStorage.h </td>
</tr>
<tr>
    <td> all_types.h </td>
    <td> TH\THGenerateAllTypes.h </td>
</tr>
</table> 
generic.c下的函数 **show_real(real number)** 会根据 real 的类型自动替换成show_int(int number) 或 show_double(double number)。  

使用 **gcc main.c show_types.c -o demo**  
然后运行 demo 可成功运行。

写了篇博客 [pytorch下的lib库 源码阅读笔记（1）](http://www.cnblogs.com/shepherd2015/p/7730277.html) 记录学习过程。
