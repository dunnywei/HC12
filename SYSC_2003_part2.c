link->https://www.youtube.com/watch?v=4gWCBDKHHW8&index=2&list=PL-k1KoUHjKI2u4ZfzewZy_UZ8MZrg1FDq

->ORG=used to store a block of code at a certain location
eg
org $800
   code
   LDAA #7
   
   
   
   memory map
   0x800 
   0x801
   0x802
   -(0:26) It means that you are able to store code segment at memory location 800 to start(0:39)
   -(0:59) 0x800 to 0x801 is a.k.a memory map (1:06)=memory w.r.t the location it stores (1:15)
->Define a constant
   db,dw
   -(1:22)db for defining a byte(8 bits) and dw for defining a word (16 bits) (1:52)
   eg
   org $10
   C db 5
   
   
   -memory map
   0x0010  05
   -(2:38) starts at memory location 10 (2:38)
->eg
Org $800
 xx db 5
 yy db 10

Org $1000
   LDAA  xx
   ADDA  yy
   STAA $802
swi

.end

-memory map
$800  05
$801  0A
%802  0F
   -(3:38) every program needs to end with swi is the software interrupt (5:24)
   -we also need to add ".end" as well (5:32)
