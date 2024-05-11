## 3. Comparison between algorithms A and B

#### The algorithm for adding a new element to the beginning of an array (Algorithm A) has a time complexity of O(n), where n is the current size of the array. This is because it needs to shift all elements in the array to the right for each insertion, which takes O(n) time.

#### On the other hand, the algorithm for adding a new element to the beginning of a linked list (Algorithm B) has a time complexity of O(1), which is constant time. This is because it only needs to create a new node and update the head pointer, which are constant-time operations.


#### Therefore, Algorithm B (adding to the beginning of a linked list) performs better than Algorithm A (adding to the beginning of an array), especially for large input sizes. As the input size grows, the time complexity of Algorithm A becomes increasingly worse compared to Algorithm B, which maintains a constant time complexity regardless of the input size.