#include "SistemaEntrenamiento.h"

#include <stdexcept>
#include <string>

static void require(bool condition, const char* message) {
    if (!condition) {
        throw std::runtime_error(message);
    }
}

int main() {
    EjercicioCardio cardio(101, "Caminata", "Basico", 20, "Aerobico", 0);
    EjercicioFuerza fuerza(202, "Sentadilla", "Intermedio", 15, "Piernas", 1);

    // Evaluaciones explícitas: no desaparecen en builds Release con NDEBUG.
    require(cardio.getId() == 101, "ID de cardio incorrecto");
    require(cardio.getTipo() == "Cardiovascular", "Tipo de cardio incorrecto");
    require(cardio.getIntensidad() == "Basico", "Intensidad de cardio incorrecta");
    require(cardio.getTiempo() == 20, "Duracion de cardio incorrecta");
    require(cardio.getUltimaSemana() == 0, "Semana inicial incorrecta");

    cardio.setUltimaSemana(2);
    require(cardio.getUltimaSemana() == 2, "No se actualizo la semana");
    cardio.actualizarDatos("Caminar", "Intermedio", 25, "Aerobico moderado");
    require(cardio.getIntensidad() == "Intermedio", "No se actualizo la intensidad");
    require(cardio.getTiempo() == 25, "No se actualizo la duracion");

    require(fuerza.getTipo() == "Fuerza", "Tipo de fuerza incorrecto");
    require(fuerza.getUltimaSemana() == 1, "Semana de fuerza incorrecta");
    return 0;
}
