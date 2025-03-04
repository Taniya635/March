class hello{
    public static void main(String[] args) {
        //int= primitive datatype
        int num1, num2, sum;
        num1=Integer.parseInt(args[0]);
        num2=Integer.parseInt(args[1]);
        sum=num1+num2;
        System.out.println("Sum is:" + sum);
    }
}