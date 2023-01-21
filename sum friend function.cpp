#include <iostream>
using namespace std;
class osama{
	private:
		int a;
		friend void add(osama);
		public:
		 osama(int f){
		 	cout<<"hlo";
		 }
};
class shaban{
	private:
		int b;
		friend void add(shaban);
		public:
			shaban(int z){
				cout<<"hlo2";
			}
};
void add(osama oa,shaban sa){
	oa.osama(5);
	sa.shaban(6)
	cout<<"sum="<<oa.osama(5)+sa.shaban(6);
}

int main(int argc, char** argv) {
	osama oa;
	shaban sa;
	add(oa,sa);
	return 0;