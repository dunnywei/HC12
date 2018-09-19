https://www.youtube.com/watch?v=nKD5UFDiBtk&index=3&list=PL-k1KoUHjKI2u4ZfzewZy_UZ8MZrg1FDq
->Arrays
eg.
Iunno DB/DW 5
Hello rmb/rmw 14
Array fill $25,100 

  -(0:03)
  -DB gives a sapce of 1 byte (0:39)
  -DW gives a sapce of 2 bytes(0:43) 
->What will be the difference between rmb/rmw vs db/dw?
   -(0:58)
  -In DB/DW it actually gives a value as 5 (1:00)
  -In rmb/rm, you reserve a byte/word (1:04)
  -so in "Hello rmb/rmw 14", it will allocate 14 bytes (1:26) with empty (no assigned value)
    -"Iunno DB/DW 5" the value of Iunno will be assigned as 5 (1:41)
  -You can use the command as "fill" to fill the value (1:49)
  -The 2nd value indicatges the number of bytes you want to fill (2:03). it is 100 bytes. (2:20)
  -The 1st value  is filled with 25d (2:06)
->Multiplication and division(3:00)
  -EMUL for unsigned 16 x unsigned 16 muliplication (3:90). DxY=Y:D
  eg,
  LDAA #2
  LDAB #7
  MUL
  -so I will get 14d in A:B (3:46)
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
->
