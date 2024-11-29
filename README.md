# Snake Game

Acesta este un proiect simplu de joc "Snake" scris în C++ utilizând biblioteca grafică SFML. Jocul urmează regulile clasice ale jocului Snake: controlul unui șarpe care se mișcă pe o tablă, mâncând mere pentru a crește și evitând coliziunile cu peretele și corpul propriu.

## Funcționalități

- Controlul șarpelui prin tastele `W`, `A`, `S`, `D` pentru mișcare în sus, stânga, jos și dreapta.
- Șarpele crește la fiecare măr pe care îl mănâncă.
- Jocul se oprește atunci când șarpele se lovește de corpul său sau de marginea tablei.
- Tabla de joc și poziția șarpelui sunt desenate utilizând SFML.

## Cum să rulezi jocul

### Prerequisites

Pentru a rula acest joc, trebuie să ai instalat SFML. Urmează acești pași pentru a instala SFML pe sistemul tău:

#### Pe Ubuntu (Linux)

```bash
sudo apt-get install libsfml-dev
