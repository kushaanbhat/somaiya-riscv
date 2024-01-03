# RISC-V Internship

This GitHub repository records the progress made during a 1-month internship under Mr. Kunal Ghosh, Founder, VSD.

# Weekwise Details

# Week 0

## Task 1 - Installation of vsdsquadron.vdi and Virtual Box (for Ubuntu)

<details>
  <summary>Resource & Snapshot of Successful Installation</summary>

  Resource for installation and Setup of vsdsquadron.vdi and Virtual Box (for Ubuntu)
  [StepsToSetupLabs.pdf](https://github.com/kushaanbhat/somaiya-riscv/files/13813451/StepsToSetupLabs.pdf)
  
  Snapshot: 
  ![Sucessful Installation and Launch of Workspace](https://github.com/kushaanbhat/somaiya-riscv/assets/109136280/c2c85475-a12c-493c-857a-a6aff015b31f)
  
</details>

# Week 1

## Task 1

### Day 1 - Introduction to RISC-V ISA and GNU compiler toolchain
<details>
  <summary>Introduction to RISC-V basic keywords</summary>
  RISC-V ISA is a base integer ISA and must be present in any implementation along with some optional extension. The RISC-V has been designed to support extensive customization and specialization which can be extended  with  one  or  more  optional  instruction-set  extensions,  but  the  base  integer instructions cannot be redefined. The different instructions included in RISC-V are listed below.

1. Pseudo instructions - For e.g- mv,li,ret etc
2. Base integer instruction (RV64I, RV32I)-For e.g-lui,addi etc
3. Multiply extension (RV64M) -For e.g- mulw,divw etc
4. Single and double floating point instruction (RV64F, RV64D) -For e.g- flw,fadd etc
5. Application binary instruction 
6. Memory allocation and stack pointer

The details of the RISC-V instructions set manual can be found [The RISC-V Instruction Set Manual](https://riscv.org/wp-content/uploads/2017/05/riscv-spec-v2.2.pdf).

Each base integer set is characterized by the  width  of the register (XLEN) and the size of the user address space. The most important advantage of RISC-V is that it is an open standard instruction that is easily available for academic and commercial purposes free of cost.
</details>

<details>
  <summary>Labwork for RISC-V software toolchain</summary>
  1 ) Write a C program for finding the sum of integers from 1 to n and name it sum1ton.c 
  Following is the C program:
  
  
  ```C
#include <stdio.h>

int main(){
    int i,  sum=0 , n=100;
    for(i=0, i<=n; i++){
        sum = sum  + i;
    }
    printf("Sum of numbers 0 to %d is %d ", n, sum);
    return 0;
}
  ```
#Note: Install Leafpad a code editor using the following command 
```bash
    sudo snap install leafpad
```

 2 ) Compile the Program using the following command on terminal
```bash
    gcc sum1ton.c
```

 3 ) Then run the Program using the following command on terminal
```bash
    ./a.out
```
![Screenshot 2024-01-03 104318](https://github.com/kushaanbhat/somaiya-riscv/assets/109136280/bb83236b-8ff7-435e-8c7c-59d12102c1c1)

 4 ) To view sum1ton.c on the terminal use the following command
```bash
    cat sum1ton.c
```

 5 ) To compile the program on RISC-V gcc use the following command (Option 1)
```bash
    riscv64-unknown-elf-gcc -O1 -mabi=lp64 -march=rv64i -o sum1ton.o sum1ton.c
```
Subsequently, use the following command (to create sum1ton.o)
```bash
    ls -ltr sum1ton.o
```
![Screenshot 2024-01-03 105320](https://github.com/kushaanbhat/somaiya-riscv/assets/109136280/57bd9a82-ff11-4439-936a-0a46c896f8e0)

 6 ) Now open a new tab of the terminal and use the following command
```bash
    riscv64-unknown-elf-objdump -d sum1ton.o
```
To filter instructions belonging to main() use the following command

```bash
    riscv64-unknown-elf-objdump -d sum1ton.o | less
```

To find instructions belonging to main() use the following command

```bash
    :/main
```
![Screenshot 2024-01-03 105706](https://github.com/kushaanbhat/somaiya-riscv/assets/109136280/ce7e8741-ca2e-484b-9530-90ff627a242f)

No of Instructions in main() = (101c0 - 10184)/4
                             = 3c
                             = f (15 in decimal)

To quit the filter use the following command
```bash
    :q
```

7 ) To compile the program on RISC-V gcc use the following command (Option fast)
```bash
    riscv64-unknown-elf-gcc -Ofast -mabi=lp64 -march=rv64i -o sum1ton.o sum1ton.c
```
![Screenshot 2024-01-03 105902](https://github.com/kushaanbhat/somaiya-riscv/assets/109136280/c591e3e6-3c63-4c84-94f6-3d1e7fb3bbc3)

 8 ) Again visit the other tab and use the following command

```bash
    riscv64-unknown-elf-objdump -d sum1ton.o | less
```
![Screenshot 2024-01-03 105914](https://github.com/kushaanbhat/somaiya-riscv/assets/109136280/b2abb0a9-85d8-4644-bf2f-585345ea3089)

To find instructions belonging to main() use the following command

```bash
    :/main
```
![Screenshot 2024-01-03 110001](https://github.com/kushaanbhat/somaiya-riscv/assets/109136280/8afbde47-c801-4086-a210-0858dc7609a5)

No of Instructions in main() = (100e0 - 100bo)/4
                             = 30
                             = c (12 in decimal)

To quit the filter use the following command
```bash
    :q
```

</details>

<details>
  <summary>Integer number representation</summary>
</details>

### Day 2 - Introduction to ABI and basic verification flow
<details>
  <summary>Application Binary interface (ABI)</summary>
</details>

<details>
  <summary>Lab work using ABI function calls</summary>
</details>

<details>
  <summary>Basic verification flow using verilog</summary>
</details>
