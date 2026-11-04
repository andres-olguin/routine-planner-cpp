# Evaluación y plan de ingeniería — routine-planner-cpp

**Fecha de revisión:** 2026-11-04. **Estado:** propuesta técnica basada en inventario y archivos consultados; no acredita pruebas ejecutadas ni producto comercial.

## Evidencia y contexto

Aplicación académica C++ de gestión de ejercicios y rutinas; código SistemaEntrenamiento.cpp/.h y main.cpp, coautoría Andrés Olguín y Miguel Margas.

## Cambios priorizados

1. Separar modelos Ejercicio, EjercicioCardio y EjercicioFuerza de la entrada por consola y la capa de presentación.
2. Definir reglas comprobables de creación, edición, rotación semanal y persistencia de rutinas sin pérdida de datos.
3. Agregar pruebas de lógica C++ (IDs duplicados, tiempos inválidos, memoria y destructor), compilación reproducible con CMake y sanitizers.

## Criterio de aceptación

Compilar con CMake en Windows y Linux; ejecutar pruebas de casos límite; documentar resultados y créditos de ambos autores.

## Protocolo Git y preservación

- Crear ramas temáticas y pull requests con cambios pequeños y pruebas; no publicar ejercicios o trabajos ajenos sin permisos.
- Conservar autoría, fechas, informes originales y licencia aplicable. Un derivado comercial requiere evaluación independiente de titularidad.
- No atribuir a MasterTech SpA automáticamente trabajos académicos previos.
- Documentar comandos ejecutados y resultados reales; no inventar métricas ni despliegues.
