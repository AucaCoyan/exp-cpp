# To compile

I use Zig to compile c and cpp projects:

```bash
# for C:
zig cc main.cpp -o hello.o
# for C++
zig c++ main.cpp -o hello.exe

# all in one
zig c++ main.cpp -o hello.exe ; ./hello.exe
```

