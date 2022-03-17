using namespace std;
#include "Student.h"
#include "DatabaseHandler.h"

typedef unsigned int uint;



int main(){
    Student student(20, "Petrov");
    DatabaseHandler db;

    int month = 10;
	string city = "Moscow";
	string homeAddress = "Izmailovo";
	string institute = "MIREA";
	string coffee = "Pizza";
	string cinema = "Pervomaisky";

    cout << "Студент " << student.getName() << " тратит "  << student.getCosts(month, city, homeAddress, institute, cinema, coffee, db) << " rubles в month"  << endl;
    return 0;
}
