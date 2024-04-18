#Zmiena
z = 0
#Pentla while do kiedy "z" > 5
while z<5
    print"Wartość Licznika\n", z
    z = z+1
    odpowiedz=input("Kontynuować? tak/nie?")
    if odpowiedz.lower()=="nie":
	break
print("Koniec pentli")