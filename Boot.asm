[BITS 16]
[ORG 0x7C00]

start:
    mov rax, 'A'      ; simple placeholder
    jmp $             ; infinite loop

times 510-($-$$) db 0
dw 0xAA55
