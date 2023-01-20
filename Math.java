import java.util.ArrayList;

public class Math {
    static String mathString = "1+2+3+4+5+6+7+8+9+10";
    static ArrayList<String> mathArray = new ArrayList<String>();

    public static void main(String[] args) {
        for (int i = 0; i < mathString.length(); i++) {
            //if (isOperator(mathString.charAt(i))) 
            //    mathArray.add(mathString.substring(, i));
            mathArray.add(mathString.charAt(i) + "");

        }

        System.out.println(mathArray);
    }

    public static boolean isOperator(char operator) {
        return (operator == '+' || operator == '-' || operator == '*' || operator == '/');

    }
}
