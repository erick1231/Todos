import random
from time import sleep
op = ["piedra","papel","tijera"]
sep = "-" * 15
while True:
    user=input("\n piedra, papel o tijera: ").lower()
    sleep(0.9)
    if user not in op:
        print("\n Movimiento Invalido")
        continue
    pc = random.choice(op)
    sleep(0.5)
    print(f"\n He seleccionado: {pc}")
    if user == pc:
        print(f"\nEmpate!,ambos eligieron {user}")
    elif user == "Piedra" and pc == "tijera":
        print(f"Ganaste!,{user}ganas en contra de {pc}")
    elif user == "Tijeras" and pc == "Papel":
            print(f"Ganaste!{user} ganas en contra de {pc}")
    elif user == "Papel" and pc == "Piedra":
            print(f"Ganaste!, {user} ganas en contra de {pc}")
    else:
        print(f"Perdiste,{pc}, pierde contra {user}")
        sleep(0.9)
        print("\n{sep} FIN DEL JUEGO")