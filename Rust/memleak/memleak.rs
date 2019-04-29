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
