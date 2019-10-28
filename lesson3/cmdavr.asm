;init
ldi r19, 0x05
;
ldi r26, 0x50
ldi r27, 0x02
ldi r28, 0x60
ldi r29, 0x02
ldi r30, 0x70
ldi r31, 0x02
nop
nop
;operation
nop
onemore: 
nop
ld r20, X+
ld r21, Y+
add r20,r21
st Z+, r20
nop
dec r19
CPI R19, 0x00
BREQ M1
JMP onemore
nop
M1:
nop
nop


  





