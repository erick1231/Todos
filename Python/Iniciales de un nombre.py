import string


cadena = string
cadena=input("Ingrese el nombre: \n")
palabras = cadena.split()
print(palabras)
['', '', '']
palabras = cadena.split()
nueva_cadena = ""
for p in palabras:
    nueva_cadena = nueva_cadena + p[0]

print(nueva_cadena)