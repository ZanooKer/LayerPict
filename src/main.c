#include <gtk/gtk.h>
//#include "MainWindow.h"
#include "editor.h"
#include "PictPiece.h"
GtkBuilder      *builder;
GtkWidget       *window;


int main(int argc, char* argv[])
{

    gtk_init(&argc, &argv);

    builder = gtk_builder_new();
    gtk_builder_add_from_file (builder, "Layout.glade", NULL);

    window = GTK_WIDGET(gtk_builder_get_object(builder, "window1"));
    GtkWidget *lb = GTK_WIDGET(gtk_builder_get_object(builder, "pathImage"));
    gtk_builder_connect_signals(builder, NULL);
    gtk_widget_show(window);
    gtk_main();
    return 0;
}

void on_mainwindow_destroy()
{
    gtk_main_quit();
}

void on_browseButton_clicked()
{
    GtkWidget *lb = GTK_WIDGET(gtk_builder_get_object(builder, "pathImage"));
    gtk_entry_set_text(GTK_ENTRY(lb), "Hello, world!");
}

void on_textlayer_activate()
{

}

void on_b1_toggled()
{

}

void on_b2_toggled()
{

}

void on_b3_toggled()
{

}

void on_b4_toggled()
{

}

