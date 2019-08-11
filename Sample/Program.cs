using System;
using System.Runtime.InteropServices;

namespace Sample
{
    class Program
    {
        [DllImport("SampleDll")]
        extern static int Add(int n1, int n2);

        static void Main(string[] args)
        {
            int a = Add(1, 2);
            Console.WriteLine(a);
        }
    }
}
