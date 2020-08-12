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

# Export a class from C++ DLL using declSpec
- Clone this repo
- Compile using VS2019
- Open Visual Studio Developer Command Prompt and run `dumpbin /EXPORTS Employee.dll`
- Output:
```
  Section contains the following exports for Employee.dll

    00000000 characteristics
    FFFFFFFF time date stamp
        0.00 version
           1 ordinal base
           6 number of functions
           6 number of names

    ordinal hint RVA      name

          1    0 00011005 ??0CEmployee@@QAE@HPBD@Z = @ILT+0(??0CEmployee@@QAE@HPBD@Z)
          2    1 000111CC ??1CEmployee@@QAE@XZ = @ILT+455(??1CEmployee@@QAE@XZ)
          3    2 000111C2 ??4CEmployee@@QAEAAV0@ABV0@@Z = @ILT+445(??4CEmployee@@QAEAAV0@ABV0@@Z)
          4    3 00011352 ?__autoclassinit2@CEmployee@@QAEXI@Z = @ILT+845(?__autoclassinit2@CEmployee@@QAEXI@Z)
          5    4 00011217 ?getId@CEmployee@@QAEHXZ = @ILT+530(?getId@CEmployee@@QAEHXZ)
          6    5 00011366 ?getName@CEmployee@@QAEPADXZ = @ILT+865(?getName@CEmployee@@QAEPADXZ)

```
