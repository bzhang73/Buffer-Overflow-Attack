1) gcc vuln_program.c -fno-stack-protector -z execstack -static -o vuln_program
2) sudo sysctl -w kernel.randomize_va_space=0
3) objdump -D ./vuln_program > read.txt
4) vi read.txt (find stack size, calculate the length of return address, find target address)
5) gcc attack-string.c -o attack-string
6) ./attack-string $'the 4th address' 'the 3th address' 'the 2nd addreth' '1st address' > attack.input
7) ./vuln_program <./attack.input
