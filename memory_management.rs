fn main() {
    let data = Box::new(42); // Box allocates memory on the heap
    println!("Value: {}", data);

    // `data` goes out of scope here, Rust automatically frees memory (RAII)
}