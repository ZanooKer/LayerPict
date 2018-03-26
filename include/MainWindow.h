#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <gtk/gtk.h>

class MainWindow : public GtkWidget
{
    public:
        MainWindow(GtkBuilder *build);
        virtual ~MainWindow();

    protected:
    private:
        GtkBuilder *builder;

        void initialSize();
};

#endif // MAINWINDOW_H
