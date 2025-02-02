use std::alloc::{self, Layout};
fn main() {
    let total = current_allocated_memory();
    let my_data = vec![1, 2, 3, 4, 5]; // Heap allocation
    println!("Data: {:?}", my_data);

    let borrowed_data = &my_data; // Borrowing without taking ownership
    println!("Borrowed Data: {:?}", borrowed_data);

    let owned_data = my_data; // Ownership moves, `my_data` is no longer accessible
    println!("Owned Data: {:?}", owned_data);

    let used = current_allocated_memory() - total;
    println!("Memery used for garbage collection and initialize on heap: {} bytes", used);
}

// Function to track current allocated memory (using low-level system call)
fn current_allocated_memory() -> usize {
    let layout = Layout::new::<u8>();
    let ptr = unsafe { alloc::alloc(layout) };
    if !ptr.is_null() {
        unsafe { alloc::dealloc(ptr, layout) }; // Deallocate the memory after measurement
        layout.size() // Return the size of the allocation
    } else {
        0
    }
}