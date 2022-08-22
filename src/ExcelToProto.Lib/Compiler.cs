/****************************************************************************
 * Description: 
 * 
 * Document: https://github.com/hiramtan/HiProtobuf
 * Author: hiramtan@live.com
 ****************************************************************************/

using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ExcelToProto;

namespace HiProtobuf.Lib
{
    internal class Compiler
    {
        public static readonly string DllName = "/HiProtobuf.Excel.csharp.dll";

        public Compiler()
        {
            var folder = Settings.DLL_Folder;
            if (Directory.Exists(folder))
            {
                Directory.Delete(folder, true);
            }
            Directory.CreateDirectory(folder);
        }

        public void Porcess()
        {
            var commond = " {3} -target:library -out:{0} -reference:{1} -recurse:{2}\\*.cs";
            var dllPath = Settings.DLL_Folder + DllName;
            var csharpFolder = Settings.Export_Folder + Settings.language_folder + Settings.csharp_folder;
            var r = string.Format("{0};\"{1}\";\"{2}\";\"{3}\";\"{4}\"",
                    Settings.Protobuf_Dll_Path,
                    Path.Combine(Settings.RefPath, "System.dll"),
                    Path.Combine(Settings.RefPath, "System.Runtime.dll"),
                    Path.Combine(Settings.RefPath, "System.Collections.dll"),
                    Path.Combine(Settings.RefPath, "mscorlib.dll")
                );
            commond =  " " + string.Format(commond, dllPath, r, csharpFolder, Settings.CSCPath);

         //   Helper.LogInfo(Settings.Compiler_Path);
            Helper.LogInfo(commond);

            var s = Common.Cmd1(Settings.Compiler_Path, commond);

            Helper.LogInfo(s);
        }
    }
}
