pub mod algorithms;
pub mod games;
pub mod utils;



use games::{
  find_number_with_binary_search,
  sort_vec_with_bubble_sort
};



fn main() {
  
  let menu: [&str; 2] = [
    "Binary Search - Find number in Vec<u32>",
    "Bubble Sort - Sort a &Vec<u32>"
  ];

  loop {
    utils::terminal::clear_screen();

    let choice: u8 = utils::terminal::show_menu("Algorithm Challenges", &menu, true);

    match choice {
      1 => find_number_with_binary_search::play(1, 100),
      2 => sort_vec_with_bubble_sort::play(),
      _ => break
    }
  }
}
