/****************************************************************************
 * Description: 
 * 
 * Document: https://github.com/hiramtan/HiProtobuf
 * Author: hiramtan@live.com
 ****************************************************************************/

using HiFramework.Assert;
using HiFramework.Log;
using OfficeOpenXml;
using System.IO;
using System.Linq;

namespace HiProtobuf.Lib
{
    internal class ProtoGenerater
    {
        private string _name;
        private int _rowCount;
        private int _colCount;
        private string _path;
        private int _index;
        private ExcelWorksheet _excelWorksheet;

        private string keyType;

        public ProtoGenerater(string name, int rowCount, int colCount, ExcelWorksheet excelWorksheet)
        {
            _name = name;
            _rowCount = rowCount;
            _colCount = colCount;
            _excelWorksheet = excelWorksheet;

            _path = Settings.Export_Folder + Settings.proto_folder + "/" + name + ".proto";
        }

        public void Process()
        {
            ProcessHeader();
            ProcessVariables();
            ProcessMap();
        }

        void ProcessHeader()
        {
            var header = @"
syntax = ""proto3"";


// [START csharp_declaration]
option csharp_namespace = ""TableTool""; 
// [END csharp_declaration]
";
            header = string.Format(header, _name + "_classname");
            var sw = File.AppendText(_path);
            sw.WriteLine(header);
            sw.Close();
        }

        void ProcessVariables()
        {
            var str = "message " + _name + " {\n";
            for (int j = 1; j <= _colCount; j++)
            {
                var type = _excelWorksheet.Cells[2, j].Value.ToString();
                var name = _excelWorksheet.Cells[3, j].Value.ToString();
                if (name.StartsWith("KEY_"))
                {
                    name = name.Substring(4);
                    keyType = type;
                }
                str += GetVariableString(type, name);
            }
            str += "}";
            var sw = File.AppendText(_path);
            sw.WriteLine(str);
            sw.Close();
        }

        /// <summary>
        /// 数组用[]标识
        /// </summary>
        /// <param name="infos"></param>
        private string GetVariableString(string type, string name)
        {
            AssertThat.IsTrue(Common.VariableType.Contains(type), "Type define error");
            _index++;//从1开始定义
            string str = "";
            if (type.Contains("[]"))//如果是数组进行转换
            {
                type = "repeated " + type.Split('[')[0];
            }
            str += "  " + type + " " + name + " = " + _index + ";";
            str += "\n";
            return str;
        }

        private void ProcessMap()
        {
            if (keyType == null)
            {
                string str = @"
message {0}Table
{{
    repeated {1} {2} = 1;
}}";
                str = string.Format(str, _name, _name, "Data");
                var sw = File.AppendText(_path);
                sw.WriteLine(str);
                sw.Close();

                Log.Info($"文件 {_path} 生成");
            }
            else
            {
                string str = @"
message {0}Table
{{
    map<{3},{1}> {2} = 1;
}}";
                str = string.Format(str, _name, _name, "Data", keyType);
                var sw = File.AppendText(_path);
                sw.WriteLine(str);
                sw.Close();

                Log.Info($"文件 {_path} 生成");
            }
        }
    }
}
