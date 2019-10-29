.ORG $0080
ldi r19,0xFF
out $11,r19
ldi r20,0b00001111
ldi r16,0b01000000
ldi r18,0b00000000
;out $61,r18
lb1: 
in r17, $00
and r17,r16
cpi r17, 0
brne lb1
nop
out $12, r20


