using System;
using HiProtobuf.Lib;
using ExcelToProto;

namespace ExcelToProto.App
{
    class Program
    {
        static void Main(string[] args)
        {
            Config.Load();

            Helper.LogInfo("开始导出");
            Manager.Export();            
        }
    }
}
