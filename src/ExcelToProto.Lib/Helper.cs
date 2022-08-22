using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ExcelToProto
{
    public static class Helper
    {
        public static void AssertNotNullOrEmpty(string str)
        {
            System.Diagnostics.Debug.Assert(str != null && str.Length > 0);
        }

        public static void LogInfo(string str) => Console.WriteLine(str);
        public static void LogError(string str) => Console.WriteLine(str);
    }
}
