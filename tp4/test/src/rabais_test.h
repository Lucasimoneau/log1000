// Classe qui teste la classe Diviseur
// Avec le framework CppUnit

// Librairies CppUnit nécessaires.
#include <cppunit/TestCase.h>
#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

// Le fichier à tester, qui se trouve dans un répertoire différent.
#include "../../src/rabais.h"

class RabaisTest :public CppUnit::TestFixture{
    CPPUNIT_TEST_SUITE(RabaisTest);
    	CPPUNIT_TEST(test_de_CPPUNIT);
        CPPUNIT_TEST(test_est_client);
        CPPUNIT_TEST(test_age);
        CPPUNIT_TEST(test_G0X);
        CPPUNIT_TEST(test_H4L);
        CPPUNIT_TEST(test_H2X);
    	CPPUNIT_TEST_SUITE_END();
        
	public:
		void setUp();
        void tearDown();
        void test_de_CPPUNIT();
        void test_est_client();
        void test_age();
        void test_G0X();
        void test_H4L();
        void test_H2X();
        
    private:
        Rabais* objet_a_tester;
        tm date;
};