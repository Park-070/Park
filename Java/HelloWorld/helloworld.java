public class helloworld {//class(名字) 定义一个类
    //↑关键字 小写
    //main方法 主入口
    /*  
    多行注释
     字符串可空"" 字符有且只有一个'y'
     空值null不能直接打印
     */
    /*
     \t 单双引号都行 打印的时候，把前面(左面)字符串的长度补齐到8，或者8的整数倍。
        最少补1个空格，最多补8个空格.
        System.out.prinln("name"+'\t'+"age")
    \t	水平制表符(Tab)	\u0009
    \n	换行符(Newline)	\u000A
    \r	回车符(Carriage Return)	\u000D
    \f	换页符(Form Feed)	\u000C
    \b	退格符(Backspace)	\u0008
    \"	双引号	\u0022
    \'	单引号	\u0027
    \\	反斜杠  \u005C
     */

    public static final String RESET = "\u001B[0m";
    public static final String RED = "\u001B[31m";
    public static void main(String[] args) {

        System.out.println("Hello\tthe\tehh\nfucking\nWorld!");
        System.out.println(RED + "这是红色文本" + RESET);
        //System.out.println("文件路径：D:\\projects\\test.txt");
        System.out.println("D:\\projects\\test.txt");
        System.out.println("""
                This is a multi-line string example.
            You can write text across multiple lines
                without needing to concatenate strings or use newline characters.
            """);
    }
}
