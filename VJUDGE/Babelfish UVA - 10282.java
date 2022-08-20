/* package whatever; // don't place package name! */
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		boolean flag = true;
		String en,sa;
		String[] aux;
		Map<String, String> words = new HashMap<String, String>();
		while(sc.hasNext()) {
			en = sc.nextLine();
			if(en.isEmpty()) {
				flag = false;
				continue;
			}
			if(flag) {
				aux = en.split(" ");
				words.put(aux[1], aux[0]);
			}else {
				sa= (words.get(en) == null) ? "eh" : words.get(en);
				System.out.println(sa);
			}
		}
	}
}