﻿/****************************************************************************
 * Description: 
 * 
 * Document: https://github.com/hiramtan/HiProtobuf
 * Author: hiramtan@live.com
 ****************************************************************************/

using System;
using System.IO;
using HiProtobuf.Lib;
using System.Xml.Serialization;
using System.Text;
using ExcelToProto;

namespace ExcelToProto.App
{
    internal static class Config
    {
        private static string _path = Environment.CurrentDirectory + "/Config.xml";

        internal static void Load()
        {
            if (File.Exists(_path))
            {
                XmlSerializer xs = XmlSerializer.FromTypes(new Type[] { typeof(PathConfig) })[0];
                Stream stream = new FileStream(_path, FileMode.Open, FileAccess.Read, FileShare.Read);
                PathConfig pathCfg = xs.Deserialize(stream) as PathConfig;
                Settings.Export_Folder = Path.GetFullPath(pathCfg.Export_Folder);
                Settings.DLL_Folder = Path.GetFullPath(pathCfg.DLL_Folder);
                Settings.Data_Folder = Path.GetFullPath(pathCfg.Data_Folder);
                Settings.Excel_Folder = Path.GetFullPath(pathCfg.Excel_Folder);
                Settings.Compiler_Path = pathCfg.Compiler_Path;
                Settings.ProtoC_Path = pathCfg.ProtoC_Path;
                Settings.CSCPath = pathCfg.CSCPath;
                Settings.RefPath = pathCfg.RefPath;
                stream.Close();

                Helper.LogInfo($"Export_Folder: " + Settings.Export_Folder);
                Helper.LogInfo($"DLL_Folder: " + Settings.DLL_Folder);
                Helper.LogInfo($"Data_Folder: " + Settings.Data_Folder);
                Helper.LogInfo($"Excel_Folder: " + Settings.Excel_Folder);
                Helper.LogInfo($"Compiler_Path: " + Settings.Compiler_Path);
            }
        }

        internal static void Save()
        {
            if (File.Exists(_path)) File.Delete(_path);
            var pathCfg = new PathConfig();

            var url1 = new Uri(Settings.Export_Folder);
            var url2 = new Uri(System.AppDomain.CurrentDomain.SetupInformation.ApplicationBase);
            var result = url2.MakeRelativeUri(url1).ToString();
            pathCfg.Export_Folder = result;

            url1 = new Uri(Settings.Excel_Folder);
            result = url2.MakeRelativeUri(url1).ToString();
            pathCfg.Excel_Folder = result;

            url1 = new Uri(Settings.DLL_Folder);
            result = url2.MakeRelativeUri(url1).ToString();
            pathCfg.DLL_Folder = result;          

            url1 = new Uri(Settings.Data_Folder);
            result = url2.MakeRelativeUri(url1).ToString();
            pathCfg.Data_Folder = result;                

            pathCfg.Compiler_Path = Settings.Compiler_Path;
            XmlSerializer xs = XmlSerializer.FromTypes(new Type[] { typeof(PathConfig) })[0];
            Stream stream = new FileStream(_path, FileMode.Create, FileAccess.Write, FileShare.Read);
            xs.Serialize(stream, pathCfg);
            stream.Close();
        }
    }
    public class PathConfig
    {
        public string Export_Folder;
        public string DLL_Folder;
        public string Data_Folder;
        public string Excel_Folder;
        public string Compiler_Path;
        public string ProtoC_Path;
        public string DotnetPath;
        public string CSCPath;
        public string RefPath;
    }
}
