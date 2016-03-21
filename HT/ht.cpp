#include <QtGui>
#include "HT.h"
#include <stdlib.h>
#include <math.h>


QDialog_HT::QDialog_HT(QWidget *parent) : QDialog(parent)			//defaultne nastavenie okna
{
	int D;															// inicializacia premennych
    setupUi(this);
    QDate *cDate = new QDate();										
	QDateTime *DTime = new QDateTime();
    QTime *cTime = new QTime();

	D = comboBox_D->currentText().toInt();							//ziskanie udaju z komboboxu
	*DTime = DTime->currentDateTime();								//nastavenie datumu a casu na aktualnu
    QIntValidator *intVal = new QIntValidator(0, 1000, this);		//validator aby sa zadavali iba cisla

    lineEdit_N0->setValidator(intVal);								//nastavenie validatorov na vsetky kolonky
    lineEdit_N1->setValidator(intVal);
    lineEdit_N2->setValidator(intVal);
    lineEdit_N3->setValidator(intVal);
    lineEdit_NL->setValidator(intVal);
    lineEdit_P->setValidator(intVal);
	*cDate = DTime->date();
	*cTime = DTime->time();
    dateEdit->setDate(*cDate);										//nastavenie aktualneho datumu na riadok na zaciatku testu
	timeEdit_0->setTime(*cTime);									//nastavenie aktualneho casu na riadok na zaciatku testu
    
	
	*DTime = DTime->addSecs(D*3600);								//k aktualnemu casu sa pripocita pocet hodin, ktory bol vybrany 
	*cDate = DTime->date();											//z komboboxu
	*cTime = DTime->time();	
	dateEdit_2->setDate(*cDate);									//nastavenie datumu a casu na 1. kontrolu
    timeEdit_1->setTime(*cTime);    

	*DTime = DTime->addSecs(D*3600);								//k upravenemu casu sa pripocita pocet hodin, ktory bol vybrany
	*cDate = DTime->date();											//z komboboxu
	*cTime = DTime->time();
	dateEdit_3->setDate(*cDate);									//nastavenie upraveneho casu a datumu na 2. kontrolu
    timeEdit_2->setTime(*cTime);


	*DTime = DTime->addSecs(D*3600);								//k upravenemu casu sa pripocita pocet hodin, ktory bol vybrany
	*cDate = DTime->date();											//z komboboxu
	*cTime = DTime->time();
	dateEdit_4->setDate(*cDate);									//nastaveni upraveneho casu a datumu na 3. kontrolu
	timeEdit_3->setTime(*cTime);
}

void QDialog_HT::on_lineEdit_N0_textChanged()						//zmena hodnoty poctu prazdnych buniek na zaciatku testu
{
    int P, N0;
    P = lineEdit_P->text().toInt();									//nacitanie poctu buniek na testovanej ploche plastu z kolonky
    N0 = lineEdit_N0->text().toInt();								//nacitanie poctu prazdnych buniek na zaciatku testu
    if(N0 > P)														//testovanie 1. podmienky
    {
        QMessageBox::warning(this, tr("Upozornenie"), 
        tr("Nemôže by viac prázdnych buniek pri kontrole, ako je testovaná plocha."),
        QMessageBox::Ok);
        lineEdit_N0->clear();
    }
}

void QDialog_HT::on_lineEdit_N1_editingFinished()
{
        int N0, N1;
    N0 = lineEdit_N0->text().toInt();								//nacitanie poctu prazdnych buniek na zaciatku testu
    N1 = lineEdit_N1->text().toInt();								//a pri 1. kontrole
    if(N0 > N1)														//testovanie 2. podmienky
    {
        QMessageBox::warning(this, tr("Upozornenie"), 
        tr("Vami zadana hodnota je mensia ako pocet prazdnych buniek "
                "z predosleho dna"),
        QMessageBox::Ok);
        lineEdit_N1->clear();
    }
}

void QDialog_HT::on_lineEdit_N2_editingFinished()
{
    int N1, N2;
    N1 = lineEdit_N1->text().toInt();								//nacitanie poctu prazdnych buniek pri 1. kontrole
    N2 = lineEdit_N2->text().toInt();								//a 2. kontrole
    if(N1 > N2)														//testovanie 2. podmienky
    {
        QMessageBox::warning(this, tr("Upozornenie"), 
        tr("Vami zadana hodnota je mensia ako pocet prazdnych buniek "
                "z predosleho dna"),
        QMessageBox::Ok);
        lineEdit_N2->clear();
    }
}

void QDialog_HT::on_lineEdit_N3_editingFinished()
{
    int N3, N2;
    N2 = lineEdit_N2->text().toInt();								//nacitanie poctu prazdnych buniek pri 2. kontrole
    N3 = lineEdit_N3->text().toInt();								//a 3. kontrole
    if(N2 > N3)														//testovanie 3. podmienky
    {
        QMessageBox::warning(this, tr("Upozornenie"), 
        tr("Vami zadana hodnota je mensia ako pocet prazdnych buniek "
                "z predosleho dna"),
        QMessageBox::Ok);
        lineEdit_N3->clear();
    }
}

void QDialog_HT::on_lineEdit_NL_editingFinished()	
{
    int P, N3, NL;
    N3 = lineEdit_N3->text().toInt();								//nacitanie poctu prazdnych buniek pri 3. kontrole a
    P = lineEdit_P->text().toInt();									//poctu buniek na testovanej ploche plastu
    NL = lineEdit_NL->text().toInt();								//poctu zvysnych zavieckovanych buniek
    if(NL > P - N3)													//testovanie 3. podmineky
    {
        QMessageBox::warning(this, tr("Upozornenie"), 
        tr("Nemôže by viac zvyšných zavieèkovaných buniek, "
                "ako je rozdiel medzi poètom testovaných buniek a 3.kontrolou. "),
        QMessageBox::Ok);
        lineEdit_NL->clear();
    }
}

void QDialog_HT::on_pushButton_vypocitaj_clicked()					//stlacenie tlacidla vypocitaj
{																	//testovanie 4. podmienky
    if(!(lineEdit_P->hasAcceptableInput()&&lineEdit_N0->hasAcceptableInput()&&
            lineEdit_N1->hasAcceptableInput()&&lineEdit_N2->hasAcceptableInput()&&
            lineEdit_N3->hasAcceptableInput()&&lineEdit_NL->hasAcceptableInput()))
    {
        QMessageBox::warning(this, tr("Upozornenie"),				
                tr("Musite vyplnit vsetky polia"),
                QMessageBox::Ok);
    }
    else
    {
        int P, N0, N1, N2, N3, NL, days;
        double T1, T2, T3, time, HT;
        
        P = lineEdit_P->text().toInt();
        N0 = lineEdit_N0->text().toInt();
        N1 = lineEdit_N1->text().toInt();
        N2 = lineEdit_N2->text().toInt();
        N3 = lineEdit_N3->text().toInt();
        NL = lineEdit_NL->text().toInt();

        days = (dateEdit->date()).daysTo(dateEdit_2->date());		//nacitani vsetkych zadanych hodnot z okna
        time = (timeEdit_1->time()).hour() + (double)(timeEdit_1->time()).minute()/60 -
                ((timeEdit_0->time()).hour() + (double)(timeEdit_0->time()).minute()/60);
        T1 = days*24 + time;


        days = (dateEdit->date()).daysTo(dateEdit_3->date());
        time = (timeEdit_2->time()).hour() + (double)(timeEdit_2->time()).minute()/60 -
                ((timeEdit_0->time()).hour() + (double)(timeEdit_0->time()).minute()/60);

        T2 = days*24 + time;

        days = (dateEdit->date()).daysTo(dateEdit_4->date());
        time = (timeEdit_3->time()).hour() + (double)(timeEdit_3->time()).minute()/60 -
                ((timeEdit_0->time()).hour() + (double)(timeEdit_0->time()).minute()/60);

        T3 = days*24 + time;

        HT = (((N1-N0)*(T1/2)+(N2-N1)*(T1+T2)/2+(N3-N2)*(T2+T3)/2+(P-N3-NL)*(T3+12))/(P-N0-NL))+
                ((NL*T3)/(N3-N0));									//vypocet HT
        HT *= 10;
        HT = (HT > floor(HT)+0.5)? floor(HT) : ceil(HT);			//zaokruhlovanie, cislo sa zaokruhli nadol pripocita sa 0.5
        HT /= 10;													//a ked toto cislo je ked je mensia ako neupravene cislo
																	//tak sa zaokruhli nadol a ked nie tak nahor
        label_HT->setNum(HT); 
        
    }
    
}

void QDialog_HT::on_comboBox_D_currentIndexChanged()				//zmena hodnoty comboboxu
{
	int D;
	QDateTime *DTime = new QDateTime();
	QDate *Datum = new QDate();
	QTime *Cas = new QTime();

	D = comboBox_D->currentText().toInt();

	*Datum = dateEdit->date();										//nacitanie datumu a casu pri prvej kontrole
	*Cas = timeEdit_0->time();
	DTime->setDate(*Datum);
	DTime->setTime(*Cas);

	*DTime = DTime->addSecs(D*3600);								//pripocitanie hodnoty D k casu(v sekundach)
	dateEdit_2->setDate(DTime->date());								//nastavenie datumu a casu pri 1. kontrole
    timeEdit_1->setTime(DTime->time()); 

	*DTime = DTime->addSecs(D*3600);								//pripocitanie hodnoty D k casu(v sekundach)
	dateEdit_3->setDate(DTime->date());								//nastavenie datumu a casu pri 2. kontrole
    timeEdit_2->setTime(DTime->time()); 

	*DTime = DTime->addSecs(D*3600);								//pripocitanie hodnoty D k casu(v sekundach)
	dateEdit_4->setDate(DTime->date());								//nastavenie datumu a casu pri 2. kontrole
    timeEdit_3->setTime(DTime->time()); 
}

void QDialog_HT::on_dateEdit_dateChanged()							//zmena datumu na zaciatku testu
{
	int D;
	QDateTime *DTime = new QDateTime();
	QDate *Datum = new QDate();
	QTime *Cas = new QTime();

	D = comboBox_D->currentText().toInt();							//ziskanie hodnoty z komboboxu a prepocitanie ostatnych
																	//datumov a casov ako pri zmene hodnoty komboboxu
	*Datum = dateEdit->date();
	*Cas = timeEdit_0->time();
	DTime->setDate(*Datum);
	DTime->setTime(*Cas);

	*DTime = DTime->addSecs(D*3600);
	dateEdit_2->setDate(DTime->date());
    timeEdit_1->setTime(DTime->time()); 

	*DTime = DTime->addSecs(D*3600);
	dateEdit_3->setDate(DTime->date());
    timeEdit_2->setTime(DTime->time()); 

	*DTime = DTime->addSecs(D*3600);
	dateEdit_4->setDate(DTime->date());
    timeEdit_3->setTime(DTime->time());
}

void QDialog_HT::on_timeEdit_0_timeChanged()						//zmena casu na zaciatku testu
{
	int D;
	QDateTime *DTime = new QDateTime();
	QDate *Datum = new QDate();
	QTime *Cas = new QTime();

	D = comboBox_D->currentText().toInt();							//ziskanie hodnoty z komboboxu a prepocitanie ostatnych
																	//datumov a casov ako pri zmene hodnoty komboboxu
	*Datum = dateEdit->date();
	*Cas = timeEdit_0->time();
	DTime->setDate(*Datum);
	DTime->setTime(*Cas);

	*DTime = DTime->addSecs(D*3600);
	dateEdit_2->setDate(DTime->date());
    timeEdit_1->setTime(DTime->time()); 

	*DTime = DTime->addSecs(D*3600);
	dateEdit_3->setDate(DTime->date());
    timeEdit_2->setTime(DTime->time()); 

	*DTime = DTime->addSecs(D*3600);
	dateEdit_4->setDate(DTime->date());
    timeEdit_3->setTime(DTime->time());
}
