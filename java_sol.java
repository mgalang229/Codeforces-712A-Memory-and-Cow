import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int[] b = new int[n];
		for (int i = 0; i < n; i++) {
			b[i] = in.nextInt();
		}
		Vector<Integer> a = new Vector<Integer>();
		for (int i = 0; i < n - 1; i++) {
			a.add(b[i] + b[i + 1]);
		}
		a.add(b[n - 1]);
		for (int x : a) {
			System.out.print(x + " ");
		}
		System.out.println();
	}
}
