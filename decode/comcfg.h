// 用来解析COMTRADE标准文件中的配置文件*.cfg
// 张彬 东南大学电气工程学院 16013424
// 2017年4月23日

#ifdef COMCFG_H
#define COMCFG_H

#include "./decode/anloginfo.h"
#include "./decode/digitalinfo.h"
#include "./decode/sampleinfo.h"
#include <fstream>
#include <vector>
#include <string>

class ComCfg
{
public:
    string              stationName;    // 站名
    string              deviceID;       // 设备编号
    string              reviseYear;     // COMTRADE标准修改年份
    int                 totalNum;       // 通道总数
    int                 analogNum;      // 模拟通道总数
    int                 digitalNum;     // 开关通道总数
    vector<AnalogInfo>  analogList;     // 模拟通道信息列表
    vector<DigitalInfo> digitalList;    // 数字通道信息列表
    double              frequency;      // 线路频率
    int                 nRate;          // 采样率信息个数
    
};

#endif
