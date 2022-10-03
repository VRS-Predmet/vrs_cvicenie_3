# Náplň cvičenia
- odovzdanie zadania 2
- zoznámenie sa s prerušeniami - NVIC
- konfigurácia externých prerušení od GPIO s EXTI
- oboznámenie sa a pracovanie na zadaní 3

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

# Zadanie 3 (2b)
- Nakonfigurujte MCU tak, aby tlačidlo pripojené ku vstupnému GPIO pinu (GPIOA-3) bolo zdrojom externého prerušenia a LED pripojená ku výstupnému GPIO pinu (GPIOA-4) zmenila svoj stav po každom stlačení tlačidla. Schéma zapojenia je totožná so schémou z predchádzajúceho zadania. 

### Úlohy
- Vytvoriť vlastný projekt s využitím grafického rozhrania CubeMX.
- Nakonfigurovať periférie MCU podľa potrieb tohto zadania (input/output/interrupt).
- V obsluhe prerušenia implementovať "debounce", aby sa predišlo falošnej detekcii (zo zadania 2).
- Po úspešnom detegovaní nábežnej/dobežnej hrany zmeniť stav LED (zvoľte si, ktorú hranu chcete detegovať).
