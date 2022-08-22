/****************************************************************************
 * Description: 
 * 
 * Document: https://github.com/hiramtan/HiProtobuf
 * Author: hiramtan@live.com
 ****************************************************************************/

using ExcelToProto;
using System.IO;

namespace HiProtobuf.Lib
{
    public static class Manager
    {
        public static void Export()
        {
            if (string.IsNullOrEmpty(Settings.Export_Folder))
            {
                Helper.LogError("导出文件夹未配置");
                return;
            }
            if (string.IsNullOrEmpty(Settings.Export_Folder))
            {
                Helper.LogError("Excel文件夹未配置");
                return;
            }
            if (string.IsNullOrEmpty(Settings.Export_Folder))
            {
                Helper.LogError("编译器路径未配置");
                return;
            }
            Helper.LogInfo("开始生成协议");
            new ProtoHandler().Process();
            Helper.LogInfo("生成协议结束");
            Helper.LogInfo("开始生成语言");
            new LanguageGenerater().Process();
            Helper.LogInfo("生成语言结束");
            Helper.LogInfo("开始编译语言");
            new Compiler().Porcess();
            Helper.LogInfo("编译语言结束");
            Helper.LogInfo("开始生成数据");
            new DataHandler().Process();
            Helper.LogInfo("生成数据结束");    
        }
    }
}
