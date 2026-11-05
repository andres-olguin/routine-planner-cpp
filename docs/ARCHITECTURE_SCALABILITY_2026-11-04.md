# routine-planner-cpp — Evolución de ingeniería y capacidad

**Corte:** 2026-11-04 · **Clasificación:** investigación para proyecto académico/laboratorio, no producción ni certificación.

## Base observada

Sistema de ejercicios y rutinas académico C++ con clases Ejercicio/Cardio/Fuerza y GestorRutinas. Coautoría Andrés Olguín y Miguel Margas.

## Arquitectura, pruebas y documentación

Separar lógica de dominio, CLI e I/O; añadir CMake, tests para IDs únicos, fechas/rotación, duraciones y errores, y sanitizers para memoria. Considerar formatos de almacenamiento versionados.

## Escalabilidad proporcional al problema

Evaluar número de rutinas, operaciones en memoria, serialización y eficiencia algorítmica; no hay necesidad demostrada de un servicio en la nube.

## Protección de derechos y limitaciones

Conservar autores y entregables; explotación comercial solo con titularidad acordada y requisitos de usuario validados.

## Criterios de cierre

1. Clon limpio, comandos y dependencias versionadas.
2. Tests/casos negativos con evidencia de resultado, sin afirmar cobertura inexistente.
3. Revisión del README, atribución, licencias, entradas/salidas y ejemplos reales o explícitamente sintéticos.
4. Benchmark o test de uso únicamente cuando el problema tenga una dimensión medible.
5. Si se plantea derivado comercial, validar titularidad, necesidad y presupuesto por separado.

## Referencias de ingeniería (consultadas 04-11-2026)

[Google Cloud Well-Architected](https://docs.cloud.google.com/architecture/framework) · [AWS Well-Architected](https://docs.aws.amazon.com/wellarchitected/) · [NIST SSDF](https://csrc.nist.gov/pubs/sp/800/218/final).

El marco de referencia no significa que se haya realizado una auditoría, prueba física o aprobación de terceros.
