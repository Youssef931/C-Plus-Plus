using System;

namespace Simple_Data_Type_CharStringBoolTypes
{
    class Program
    {
        static void Main(string[] args)
        {
            char A = 'A';
            int A2 = 'A';
            char a = 'a';
            int a2 = 'a';
            string A3 = "This is my charactr {0} , Val {1}\t";
            string a3 = "This is my charactr {0} , Val {1}";
            Console.Write(A3, A, A2);
            Console.WriteLine(a3, a, a2);
            int CharMin = Char.MinValue;
            int CharMax = Char.MaxValue;
            char Myvar = 'G';
            int myvariable = 'G';
            char myvariable2 = Convert.ToChar(myvariable);
            Console.WriteLine("Min char = {0} , Max char {1} , My chracter {2} , My variable number {3} , my conversation value is {4}",
            CharMin, CharMax, Myvar, myvariable, myvariable2);
            string myString = "This is my variable";
            Console.WriteLine("myString string is {0}", myString);
            bool myBool = false;
            Console.WriteLine("myBooliean is {0}", myBool);
        }
    }
}
