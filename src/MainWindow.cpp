#include "MainWindow.h"

MainWindow::MainWindow(GtkBuilder *build)
{
    //ctor
    builder = build;
    initialSize();
}

MainWindow::~MainWindow()
{
    //dtor
}

void MainWindow::initialSize()
{
    GtkWidget *window = GTK_WIDGET(gtk_builder_get_object(builder, "window1"));
    gtk_window_set_default_size(GTK_WINDOW(window),1200, 980);
    gtk_builder_connect_signals(builder, NULL);
    g_object_unref(builder);
    gtk_widget_show(window);
    gtk_main();
}

