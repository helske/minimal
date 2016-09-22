# minimal
minimal failing example

trying to track down some errors...

```
x <- list(y_vec=1:5, y_array = array(1L, c(3,3,1))) #copy in constructor (int/double)
test2(x)
x
x2 <- list(y_vec=1:5, y_array = array(1, c(3,3,1))) #no copy
test2(x2)
x2
```


