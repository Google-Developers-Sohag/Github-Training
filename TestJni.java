public class TestJni {
    static{
        System.loadLibrary("TestJni");
    }
    public static void main(String[] args) {
        System.out.println(getName());
    }
    public static native String getName();
}
