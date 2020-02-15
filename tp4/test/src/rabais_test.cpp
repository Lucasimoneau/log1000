#include "rabais_test.h"

void RabaisTest:: setUp(){
    this->objet_a_tester = new Rabais("data/clients.dat");
}

void RabaisTest:: tearDown(){
    delete this->objet_a_tester;
}

//test de cppunit
void RabaisTest::test_de_CPPUNIT(){
    CPPUNIT_ASSERT_EQUAL(1,1);
}

void RabaisTest::test_est_client(){
    Facture f = Facture();
    f.ajouterItem(1);
    tm date;
    date.tm_year = 119;
    date.tm_mon = 1;
    date.tm_mday = 30;

    Client* client = new Client(90001, "Maxime", "Meloche", 25, "H1K", date);
    this->objet_a_tester->ajouterClient(client);

    float rabais = this->objet_a_tester->getRabais(f, 90001);
    CPPUNIT_ASSERT_EQUAL(0.2f, rabais);
}

void RabaisTest::test_age(){
    Facture f = Facture();
    f.ajouterItem(550); 
     tm date;
     date.tm_year = 2010;
     date.tm_mon = 1;
     date.tm_mday = 30;

    Client* client = new Client(2, "Maxime", "Meloche", 78, "H2H", date);
    this->objet_a_tester->ajouterClient(client);

    float rabais = this->objet_a_tester->getRabais(f, 2);
    CPPUNIT_ASSERT_EQUAL(0.13f, rabais);
}

void RabaisTest::test_G0X(){
    Facture f = Facture();
    f.ajouterItem(100);
    tm date;
    date.tm_year = 2016;
    date.tm_mon = 10;
    date.tm_mday = 25;

    Client* client = new Client(12, "Maxime", "Meloche", 45, "G0X", date);
    this->objet_a_tester->ajouterClient(client);

    float rabais = this->objet_a_tester->getRabais(f, 12);
    CPPUNIT_ASSERT_EQUAL(0.04f, rabais);
}

void RabaisTest::test_H4L(){
    Facture f = Facture();
    f.ajouterItem(200);
    tm date;
    date.tm_year = 1998;
    date.tm_mon = 1;
    date.tm_mday = 3;

    Client* client = new Client(12345, "Maxime", "Meloche", 60, "H4L", date);
    this->objet_a_tester->ajouterClient(client);

    float rabais = this->objet_a_tester->getRabais(f, 12345);
    CPPUNIT_ASSERT_EQUAL(0.08f, rabais);
}

void RabaisTest::test_H2X(){
    Facture f = Facture();
    f.ajouterItem(300);
    tm date;
    date.tm_year = 2019;
    date.tm_mon = 1;
    date.tm_mday = 3;

    Client* client = new Client(88876, "Maxime", "Meloche", 20, "H2X", date);
    this->objet_a_tester->ajouterClient(client);

    float rabais = this->objet_a_tester->getRabais(f, 88876);
    CPPUNIT_ASSERT_EQUAL(0.04f, rabais);
}
