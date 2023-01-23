import java.util.ArrayList;
import java.util.Scanner;

public class Math {
    static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        //        System.out.println("Enter an expression: ");
        //        String expression = scanner.nextLine();
        //        String number = "";
        //
        //        ArrayList<Integer> numbers = new ArrayList<>();
        //        ArrayList<Character> operators = new ArrayList<>();
        //        for (int i = 0; i < expression.length(); i++) {
        //            if (Character.isDigit(expression.charAt(i))) {
        //                number += expression.charAt(i);
        //            } else {
        //                numbers.add(Integer.parseInt(number));
        //                number = "";
        //                operators.add(expression.charAt(i));
        //            }
        //        }
        //        numbers.add(Integer.parseInt(number));
        //        int result = numbers.get(0);
        //        for (int i = 0; i < operators.size(); i++) {
        //            if (operators.get(i) == '+') {
        //                result += numbers.get(i + 1);
        //            } else if (operators.get(i) == '-') {
        //                result -= numbers.get(i + 1);
        //            } else if (operators.get(i) == '*') {
        //                result *= numbers.get(i + 1);
        //            } else if (operators.get(i) == '/') {
        //                result /= numbers.get(i + 1);
        //            }
        //        }
        //        System.out.println("The result is: " + result);

        Calc(306.);
    }

    public static boolean isOperator(char operator) {
        return (operator == '+' || operator == '-' || operator == '*' || operator == '/');

    }

    public static void Calc(double num) {
        System.out.println(num / 2 * num / 2 * 2/-315 + 630);
    }
}
