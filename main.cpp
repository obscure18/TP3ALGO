#include <iostream>
#include "coordonnees.h"
#include "reseau.h"
#include <vector>
#include "investigation.h"

using namespace std;



int main() {
    GestionnaireInvestigation rtc("RTC/");

    cout << "Temps moyen de dijsktra " << rtc.tester_n_paires_dijsktra(10) << endl << endl;

    cout << "Temps moyen de bellman " << rtc.tester_n_paires_bellman(10) << endl << endl;
    return 0;
}
