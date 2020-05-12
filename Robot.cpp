#include <iostream>
#include <string>
using namespace std;

class Robot
{
public:
	Robot();
	Robot(string, int);
	Robot(const Robot&);
	~Robot();

	Robot& operator=(const Robot&);

	string GetName();
	void SetName(string);

	int GetData();
	void SetData(int);
private:
	string m_name;
	int* m_data;
};

Robot::Robot()
{
	m_name = "";
	m_data = new int;
}

Robot::Robot(string name, int data) {
	m_name = name;
	m_data = new int(data);
}

Robot::Robot(const Robot& source){
	m_name = source.m_name; 
	m_data = new int(*source.m_data); 
}

Robot& Robot::operator=(const Robot& source) {
	if (this != &source) {
		m_name = source.m_name; 
		m_data = new int(*source.m_data);
	}
	return *this; 
}

Robot::~Robot()
{
	delete m_data; 
}

string Robot::GetName() { return m_name; }

void Robot::SetName(string name) { m_name = name; }

int Robot::GetData() { return *m_data; }

void Robot::SetData(int data) { m_data = &data; }

int main() {

	return 0;
}
