touch firmware/application/jammer_view.cpp
touch firmware/application/jammer_view.hpp
#pragma once
#include "ui.hpp"
#include "transmitter_model.hpp"

namespace ui {
class JammerView : public View {
public:
    JammerView(NavigationView& nav);
    void on_frequency_changed();
    void focus() override;
private:
    Labels labels {
        { { 7 * 8, 4 * 16 }, "Frecuencia (MHz):", Color::light_grey() }
    };
    NumberField field_frequency {
        { 7 * 8, 6 * 16 },
        5,
        { 1, 6000 },  // Rango: 1MHz a 6GHz
        1,            // Paso: 1MHz
        ' '
    };
    TransmitterModel transmitter;
};
} // namespace ui
#pragma once
#include "ui.hpp"
#include "transmitter_model.hpp"

namespace ui {
class JammerView : public View {
public:
    JammerView(NavigationView& nav);
    void on_frequency_changed();
    void focus() override;
private:
    Labels labels {
        { { 7 * 8, 4 * 16 }, "Frecuencia (MHz):", Color::light_grey() }
    };
    NumberField field_frequency {
        { 7 * 8, 6 * 16 },
        5,
        { 1, 6000 },  // Rango: 1MHz a 6GHz
        1,            // Paso: 1MHz
        ' '
    };
    TransmitterModel transmitter;
};
} // namespace ui
#include "jammer_view.hpp"  // Añade esto al inicio

// Busca la función "app_settings" y añade:
views.emplace_back(new JammerView(*this));
