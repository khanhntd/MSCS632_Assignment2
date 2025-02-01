let x = 10; // Global scope

function outer() {
  let x = 20; // Enclosing scope
  function inner() {
    let x = 30; // Local scope
    console.log('Inner x:', x);
  }
  inner();
  console.log('Outer x:', x);
}

outer();
console.log('Global x:', x);
