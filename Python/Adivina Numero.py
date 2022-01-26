import random


class AdivinaNumero:

    def __init__(self):
        ## definir el rango
        self.LOWER = 1
        self.HIGHER = 50
    ## método para generar el número aleatorio
    def get_random_number(self):
        return random.randint(self.LOWER, self.HIGHER)

    ## método de inicio del juego
    def start(self):
        ## Generando el nmero aleatorio
        random_number = self.get_random_number()

        print(
            f"Adivina el número generado aleatoriamente de {self.LOWER} a {self.HIGHER}")

        ##juego
        chances = 0
        while True:
            user_number = int(input("Introduce el número adivinado: "))
            if user_number == random_number:
                print(
                    f"-> ¡Viva! lo tienes dentro {chances + 1} paso {'s' if chances > 1 else ''}!")
                break
            elif user_number < random_number:
                print("-> Tu número es menor que el número aleatorio.")
            else:
                print("-> Tu número es mayor que el número aleatorio.")
            chances += 1
numberGuessingGame = AdivinaNumero()
numberGuessingGame.start()