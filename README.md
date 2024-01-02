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
</details>

# Week 1

## Task 1

### Day 1 - Introduction to RISC-V ISA and GNU compiler toolchain
<details>
  <summary>Introduction to RISC-V basic keywords</summary>
</details>

<details>
  <summary>Labwork for RISC-V software toolchain</summary>
  1 ) Write a C program for finding the sum of integers from 1 to n and name it as sum1ton.c 
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
