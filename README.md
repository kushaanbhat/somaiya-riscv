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

Each base integer set is characterized by the  width  of the register (XLEN) and the size of the user address space. The most important advantage of RISC-V is that it is an open standard instruction which is easily available for academics and commercial purposes free of cost.
</details>

<details>
  <summary>Labwork for RISC-V software toolchain</summary>
  1 ) Write a C program for finding the sum of integers from 1 to n and name it as sum1ton.c 
  Following is the C program:
  #Note: Install Leafpad a code editor using following command 
  
```bash
    
```
  
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
 2 ) Compile the Program using the following command on terminal
```bash
    gcc sum1ton.c
```

 3 ) Then run the Program using the following command on terminal
```bash
    ./a.out
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
