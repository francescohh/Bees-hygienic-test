#ifndef _HT_H
#define	_HT_H

#include <QDialog>
#include "ui_HT.h"

class QDialog_HT : public QDialog, public Ui::QDialog_HT
{
    Q_OBJECT
            
    public:
        QDialog_HT(QWidget *parent = 0);
        
        private slots:
            void on_lineEdit_N0_textChanged();						//zmena hodnoty poctu prazdnych buniek na zaciatku testu
            void on_lineEdit_N1_editingFinished();					//zmena hodnoty poctu prazdnych buniek pri 1. kontrole
            void on_lineEdit_N2_editingFinished();					//zmena hodnoty poctu prazdnych buniek pri 2. kontrole
            void on_lineEdit_N3_editingFinished();					//zmena hodnoty poctu prazdnych buniek pri 3. kontrole
            void on_lineEdit_NL_editingFinished();					//zmena hodnoty poctu zvysnych zavieckovanych buniek
            void on_pushButton_vypocitaj_clicked();					//kliknutie tlacidla vypocitaj
			void on_comboBox_D_currentIndexChanged();				//zmena hodnoty komboboxu
			void on_dateEdit_dateChanged();							//zmena datumu na zaciatku testu
			void on_timeEdit_0_timeChanged();						//zmena casu na zaciatku testu
};

#endif	/* _HT_H */
