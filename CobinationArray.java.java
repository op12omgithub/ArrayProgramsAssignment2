

import java.util.*;

public class CobinationArray {
    public static void main(String[] args) {
        int[] arr = {1,2,3,4};  //input array
        int r = 3;					  //input size of r
        Arrays.sort(arr);
        combine(arr, r);
    }

    private static void combine(int[] arr, int r) {
        int[] res = new int[r];
        doCombine(arr, res, 0, 0, r);
    }


  static int val=0;
    private static void doCombine(int[] arr, int[] res, int currIndex, int level, int r) {
        if(level == r){
            printArray(res);
            val++;
            System.out.println("returning function" +val);
            return;
        }
        for (int i = currIndex; i < arr.length; i++) {
            res[level] = arr[i];
            System.out.println("level is "+ level   );
            System.out.println("i is "+   i);
            doCombine(arr, res, i+1, level+1, r);
            if(i < arr.length-1 && arr[i] == arr[i+1]){
                i++;
            }
        }
    }

    private static void printArray(int[] res) {
        for (int i = 0; i < res.length; i++) {
            System.out.print(res[i] + " ");
        }
        System.out.println();
    }
}