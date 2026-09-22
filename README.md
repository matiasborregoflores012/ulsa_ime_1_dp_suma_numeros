# Práctica 1: Suma de 5 números
## 1. Descripción del problema (Fase 1)
<!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->

_____el problema lo que busca es pedir al usuario 5 números los va a ir sumando uno por uno conforme el usuario los vaya introduciendo los va a ir sumando y al final muestre el total

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. _____decimal

**Salidas:**
1. _____decimal

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- _____El usuario debe introducir exactamente 5 números.
- _____Los datos deben ser numericos

**Decisión sobre negativos y decimales** (¿los acepto? ¿por qué?):
Sí se aceptan negativos, porque en la vida real se pueden sumar deudas o pérdidas.
Sí se aceptan decimales, porque se pueden sumar cantidades con punto decimal

**Invariante** (¿qué es verdad después de cada vuelta del ciclo?):
_____que el ciclo solo puede contar o repetir 5 numeros

## 4. Casos resueltos a mano (Fase 1)

| Caso | Números | Suma calculada a mano |
|---|---|---|
| 1 | __1,2,3,4,5___ | __15___ |
| 2 | ____0,0,0,0,0_ | ____0_ |
| 3 | __5,4,3,2,1___ | ____15_ |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las dos preguntas. -->

**¿Probé mi receta a mano con un caso?** si
**¿Tuve que corregirla?** ____no,todo

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o suma
./suma
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->

```
_____ ./main.exe
Suma de 5 numeros
Ingrese un numero: 1
La suma es: 1
Ingrese un numero: 2
La suma es: 3
Ingrese un numero: 3
La suma es: 6
Ingrese un numero: 4
La suma es: 10
Ingrese un numero: 5
La suma es: 15
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué pasó al no inicializar `suma`?**
_____obtendre un valor basura

**Experimento B (opcional): ¿qué pasó al usar `int` con 2.5?**
_____no guarda decimales int entonces se trunca

## 9. Tabla de pruebas (Fase 4)

| Caso | Números | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Del 1 al 5 | 1 a 5 | 15 | __15___ | ____si_ |
| Todos ceros | 0 ×5 | 0 | __0___ | _si____ |
| Con negativos | __-1, -2, -3, -4, -5___ | ___-15__ | ___-15__ | ____si_ |
| Decimales | 0.5 ×5 | 2.5 | _2.5____ | __si___ |
| Todos iguales | 7 ×5 | 35 | ___35__ | ____si_ |
| Caso propio 1 | __10, 20, 30, 40, 50__ | ___150__ | _150____ | __si___ |
| Caso propio 2 | ___-2.5, -2.5, -2.5, -2.5, -2.5__ | ___-12.5__ | _-12.5____ | ___si__ |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | _____ | _____ | _____ |
| 2 | _____ | _____ | _____ |

**Reto elegido (opcional):** _____

## 11. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| _____ | _____ |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
_____

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
_____

**¿Qué fue lo más difícil y cómo lo resolví?**
_____

**¿Qué pregunta me quedó sin responder?**
_____

## 13. Lista de verificación antes de entregar (Fase 5)

- [ ] Llené todas las secciones (no quedan `_____`)
- [ ] Mi programa compila sin advertencias
- [ ] Probé todos los casos de la tabla
- [ ] Hice al menos 3 commits con mensajes claros
- [ ] Hice `git push` y verifiqué mi fork en GitHub
- [ ] Entregué el enlace de mi fork en Classroom