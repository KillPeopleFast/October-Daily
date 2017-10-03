#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
int main() {
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_BITMAP *bit = NULL;
	al_init();
	display = al_create_display(500, 400);
	al_init_primitives_addon();
	al_clear_to_color(al_map_rgb(0, 0, 0));
	
	al_draw_filled_circle(250, 200, 150, al_map_rgb(200, 100, 30));
	al_draw_filled_triangle(250, 180, 110, 180, 180, 90, al_map_rgb(0, 0, 0));
	al_draw_filled_triangle(255, 180, 390, 180, 325, 90, al_map_rgb(0, 0, 0));
	al_draw_filled_triangle(350, 300, 150, 300, 250, 200, al_map_rgb(0, 0, 0));
	al_draw_filled_rectangle(270, 10, 230, 60, al_map_rgb(0, 200, 0));
	al_flip_display();
	al_rest(20.0);
}