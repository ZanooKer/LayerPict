#ifndef EDITOR_H
#define EDITOR_H
#include <gtk/gtk.h>
typedef int bool;
#define true 1
#define false 0

typedef struct {
    char* pathOriImg;

    GtkImage *gi;
    GdkPixbuf *pixels;
    int mode;
}editor;

bool load_editor(editor e,char* pathToOri);
void draw_img(editor e);
void switch_mode(editor e,int t);


#endif // EDITOR_H
