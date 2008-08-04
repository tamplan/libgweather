/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 4 -*- */

#ifndef GWEATHER_TIMEZONE_MENU_H
#define GWEATHER_TIMEZONE_MENU_H 1

#include <gtk/gtk.h>
#include <libgweather/gweather-location.h>

#define GWEATHER_TYPE_TIMEZONE_MENU            (gweather_timezone_menu_get_type ())
#define GWEATHER_TIMEZONE_MENU(object)         (G_TYPE_CHECK_INSTANCE_CAST ((object), GWEATHER_TYPE_TIMEZONE_MENU, GWeatherTimezoneMenu))
#define GWEATHER_TIMEZONE_MENU_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), GWEATHER_TYPE_TIMEZONE_MENU, GWeatherTimezoneMenuClass))
#define GWEATHER_IS_TIMEZONE_MENU(object)      (G_TYPE_CHECK_INSTANCE_TYPE ((object), GWEATHER_TYPE_TIMEZONE_MENU))
#define GWEATHER_IS_TIMEZONE_MENU_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GWEATHER_TYPE_TIMEZONE_MENU))
#define GWEATHER_TIMEZONE_MENU_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), GWEATHER_TYPE_TIMEZONE_MENU, GWeatherTimezoneMenuClass))

typedef struct {
    GtkComboBox parent;

    /*< private >*/
    GWeatherTimezone *zone;
} GWeatherTimezoneMenu;

typedef struct {
    GtkComboBoxClass parent_class;

} GWeatherTimezoneMenuClass;

GType       gweather_timezone_menu_get_type         (void);

GtkWidget  *gweather_timezone_menu_new              (GWeatherLocation     *top);

void        gweather_timezone_menu_set_tzid         (GWeatherTimezoneMenu *menu,
						     const char           *tzid);
const char *gweather_timezone_menu_get_tzid         (GWeatherTimezoneMenu *menu);

#endif
