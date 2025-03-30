import java.util.Scanner;

public class PerfectSquareChecker {
    // Function to check if a number is a perfect square
    static boolean isPerfectSquare(int num) {
        if (num < 0) return false; // Negative numbers cannot be perfect squares
        
        int sqrt = (int) Math.sqrt(num); // Find the square root
        return (sqrt * sqrt == num); // Check if the square of sqrt equals the number
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter a number: ");
        int num = scanner.nextInt();
        
        if (isPerfectSquare(num)) {
            System.out.println(num + " is a perfect square.");
        } else {
            System.out.println(num + " is NOT a perfect square.");
        }
        
        scanner.close();
    }
}
