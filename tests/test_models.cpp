#include "SistemaEntrenamiento.h"

#include <cassert>
#include <string>

int main() {
    EjercicioCardio cardio(101, "Caminata", "Basico", 20, "Aerobico", 0);
    EjercicioFuerza fuerza(202, "Sentadilla", "Intermedio", 15, "Piernas", 1);

    assert(cardio.getId() == 101);
    assert(cardio.getTipo() == "Cardiovascular");
    assert(cardio.getIntensidad() == "Basico");
    assert(cardio.getTiempo() == 20);
    assert(cardio.getUltimaSemana() == 0);

    cardio.setUltimaSemana(2);
    assert(cardio.getUltimaSemana() == 2);
    cardio.actualizarDatos("Caminar", "Intermedio", 25, "Aerobico moderado");
    assert(cardio.getIntensidad() == "Intermedio");
    assert(cardio.getTiempo() == 25);

    assert(fuerza.getTipo() == "Fuerza");
    assert(fuerza.getUltimaSemana() == 1);
    return 0;
}
