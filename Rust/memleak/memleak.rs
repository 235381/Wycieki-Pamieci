use std::{i8, i16, i32, i64, u8, u16, u32, u64, isize, usize, f32, f64};

use std::io::stdin;

fn main() {
    let mut vec = vec![Box::new(0); 4];

    {
        // start draining, vec can no longer be accessed
        let mut drainer = vec.drain(..);

        // pull out two elements and immediately drop them
        drainer.next();
        drainer.next();

        // get rid of drainer, but don't call its destructor
        std::mem::forget(drainer);
    }

    // Oops, vec[0] was dropped, we're reading a pointer into free'd memory!
    println!("{}", vec[0]);
}