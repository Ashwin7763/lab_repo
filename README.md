# Vector Dot Product:
*This is a readme file for my github repo (this text is styled in italic)*

In the code we compute dot product for two given vectors and display the result.
[This is a link for information on dot product.](https://en.wikipedia.org/wiki/Dot_product)

The Method is[^1]:
- multiply each variable dimension wise.
+ add the products.


>[!NOTE]
>While multiplication ensure only correct parameters are multiplied.

![Here is a diagram for explanation](https://d138zd1ktt9iqe.cloudfront.net/media/seo_landing_files/matrix-representation-of-dot-product-1626103121.png)
## Mathematical Expression:
$$ A\cdot B=\sum_{i=1}^{n}A_{i}+B_{i} $$

where A<sub>i</sub> and B<sub>i</sub> are ith components of vectors.

## Implementation:

__We are using two different implementations:__
| Implementation  | Complexity |
| ------------- | ------------- |
| Using Library  | High, O(n).  |
| Using parallel Procession  | Low, O(n/p)  |

Following is the Main code that stores and updates a result variable:

```
for (int i = 0; i < v1.size(); i++)
{
    result+=v1[i]*v2[i];
}
```
> [!WARNING]
> Use long long data type for result variable as the sum might exceed integer limit.

### What is done so far:

- [x] Implement the function.
- [x] Created a more optimised function using a library.
- [x] Reduced Time Complexity.

[^1]: Method.
