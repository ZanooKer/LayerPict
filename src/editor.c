#include "editor.h"

bool load_editor(editor e,char* pathToOri)
{
    e.pathOriImg = pathToOri;
    gtk_image_set_from_file(e.gi,pathToOri);
    e.pixels = gtk_image_get_pixbuf(e.gi);
}

void draw_img(editor e)
{

}

void switch_mode(editor e,int t)
{
    e.mode = t;
}
