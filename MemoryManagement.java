
public class MemoryManagement {

    public static void main(String[] args) {
        long total = Runtime.getRuntime().totalMemory();

        int[] myData = new int[]{1, 2, 3, 4, 5}; // Heap allocation
        System.out.println("Data: ");
        for (int num : myData) {
            System.out.println(num + " ");
        }

        myData = null;

        // Suggest garbage collection (not guaranteed)
        System.gc();
        long used = total - Runtime.getRuntime().freeMemory();
        System.out.println("Memory used for garbage collection and initialize on heap: " + used + "B");
    }
}
