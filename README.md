# Náplň cvičenia
- zoznámenie sa s prerušeniami - NVIC
- konfigurácia externých prerušení od GPIO s EXTI

# Prerušenia
- "prerušenie" preruší vykonávania hlavnej slučky programu a vykoná sa fukcia, obsluha prerušenia, po ktorej vykonaní bude pokračovať beh hlavnej slučky programu

- ak nastane viacero prerušení, začne sa vykonávať prerušenie s najvyššou prioritou

- v MCU s ARM architektúrou má prerušenia na starosť NVIC

### NVIC - Nested Vector Interrupt Controller (stm32F303K8)
- 16 programovateľných úrovní priority prerušenia (4 bity)
<p align="center">
    <img src="https://community.arm.com/cfs-file/__key/communityserver-blogs-components-weblogfiles/00-00-00-21-42/4212.figure_5F00_2_5F00_nested_5F00_interrupt.jpg" width="600">
</p>

- 76 maskovateľných vektorov prerušení
<p align="center">
    <img src="https://community.arm.com/cfs-file/__key/communityserver-blogs-components-weblogfiles/00-00-00-21-42/6378.figure_5F00_3_5F00_nvic.jpg" width="400">
</p>

- tabulka vektorov prerušení a ich obsluha je definovaná v súbore "startup_stm32f303x8.s"

# Zadanie
- Podľa ukážkového programu z vetvy "master" nakonfigurujte MCU tak, aby tlačidlo pripojené ku vstupnému GPIO pinu bolo zdrojom externého prerušenia a LED pripojená ku výstupnému GPIO pinu zmenila svoj stav po každom stlačení tlačidla.
- Vetvy "zadanie_cv4" a "zadanie_cv_4_f302r8" obsahuju sablonu pre vypracovanie projektu. Vetva "zadanie_cv4" je urcena pre mikrokontroler F303k8 zatial co druha vetva je urcena pre mikrokontroler, ktory ma uvedeny v nazve.
- Znenie zadania je v kazdej sablone prisposobene vyvojovej doske. 

### Úlohy
- Stiahnúť/naklonovať vetvu "zadanie_cv4" alebo zadanie_cv_4_f302r8, ktorá predstavuje šablónu projektu, do ktorej je nutné vypracovať zadanie.
- Pre svoje zadanie si vtvoriť vlastný github repozitár, kam sa nahraje stiahnutá šablóná.

- Vypracovat zadanie podla pokynov v "README" vo vetve zadanie_cv4/zadanie_cv_4_f302r8 a pokynov v sablone.
