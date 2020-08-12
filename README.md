# Export function from C++ DLL using declSpec
- Clone this repo
- Compile using VS2019
- Open Visual Studio Developer Command Prompt and run `dumpbin /EXPORTS MyLib.dll`
- Output:
```
Section contains the following exports for MyLib.dll

    00000000 characteristics
    FFFFFFFF time date stamp
        0.00 version
           1 ordinal base
           1 number of functions
           1 number of names

    ordinal hint RVA      name

1    0 0001114F dosomething = @ILT+330(_dosomething)

```

