#ifndef MEMBRE_H
#define MEMBRE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
class Membre
{public:
    Membre();
    Membre(int,int,int,QString,QString,QString,QString);
    QString get_nom();
    QString get_prenom();
    QString get_adr();
    QString get_mail();
    int get_id();
    int get_slr();
    int get_num();
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool modifier(int,int,int,QString,QString,QString,QString);
private:
    QString nom,prenom,adr,mail;
    int id,num,slr;
};

#endif // MEMBRE_H
