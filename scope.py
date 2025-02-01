x = 10  # Global variable

def outer():
    x = 20  # Enclosing scope
    def inner():
        x = 30  # Local scope
        print("Inner x:", x)
    inner()
    print("Outer x:", x)

if __name__ == "__main__":
    outer()
    print("Global x:", x)
