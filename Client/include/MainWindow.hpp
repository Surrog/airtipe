#ifndef			MAINWINDOW_HPP_
# define		MAINWINDOW_HPP_

#include <QtGui/QApplication>
#include <QtGui/QWidget>
#include <QtGui/QPushButton>
#include <QtGui/QLineEdit>
#include <QtGui/QCheckBox>
#include <QtGui/QLabel>
#include "Client.hpp"

class MainWindow : public QWidget
{
	Q_OBJECT

    public:
    MainWindow(Client * client);
	~MainWindow();
 
    private:
    QPushButton* _start;
	QPushButton* _exit;
	QLineEdit* _ip;
	QLineEdit* _port;
	QCheckBox* _fullScreen;

	QLabel* _SplashImage;
	QLabel* _ipLabel;
	QLabel* _portLabel;

	Client* _client;

	public slots:
	void formValidation();

};

#endif