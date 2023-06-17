import java.util.*;
class Insurance {
 public static void main(String[] args) {
 System.out.println("Enter marital status(M/U):");
 Scanner ob=new Scanner(System.in);
 char marital=ob.next().charAt(0);
 if(marital=='U' || marital=='u')
 {
 System.out.println("Enter Gender (M/F):");
 Scanner ob1=new Scanner(System.in);
 char gender=ob.next().charAt(0);
 
 System.out.println("Enter age:");
 Scanner ob2=new Scanner(System.in);
 int age=ob.nextInt();
 if((gender=='M'|| gender=='m') && age>=30)
 {
 System.out.println("You are eligible for insurance");
 }
 else if((gender=='F'|| gender=='f') && age>=25)
 {
 System.out.println("You are eligible for insurance");
 }
 
 else
 {
 System.out.println("Not eligible for insurance");
 }
 }
 
 else if(marital=='M' || marital=='m')
 {
 System.out.println("you are eligible for insurance");
 }
 else
 {
 System.out.println("Invalid Input");
 }
 
 }
}
