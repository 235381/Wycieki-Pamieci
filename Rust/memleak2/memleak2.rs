use std::{i8, i16, i32, i64, u8, u16, u32, u64, isize, usize, f32, f64};

use std::io::stdin;

fn main() {
    
    let mut circle = Circle {
        x: 10.0,
        y: 10.0,
        radius: 10.0
    };

    std::mem::forget(circle);
}

struct Circle {
    x: f64,
    y: f64,
    radius: f64,
}