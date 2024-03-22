#include<iostream>
#include<string>
using namespace std;
class vehicle
{
private:
    int numWheels;
    int maxGears;
    int curGears;
    string color;
    int maxSpeed;
    int curSpeed;
    bool started;
    bool stop; 
public:
    vehicle();
    int increaseSpeed();
    int decreaseSpeed();
    void increaseGear();
    void decreaseGear();
    void startVehicle();
    void stopVehicle();
    void display();
    void getWheels();
    void getmaxGears();
    void getmaxSpeed();
    void getcolor();

};

vehicle::vehicle()
{
    numWheels=4;
    maxGears=6;
    curGears=0;
    color="black";
    maxSpeed=200;
    curSpeed=0;
    started=true;
    stop=false;
}

int vehicle::increaseSpeed()
{
    if(started==true)
    {
        if(curSpeed+5<maxSpeed)
        {
            curSpeed=curSpeed+5;
            return 1;
        }
        //cout<<"current speed="<<curSpeed<<endl;
    }
    //cout<<"current speed="<<curSpeed<<endl;
}
int vehicle::decreaseSpeed()
{
    if(started==true)
    {
        if(curSpeed-5>0)
        {
            curSpeed=curSpeed-5;
            return 1;
        }
    }
}
void vehicle::increaseGear()
{
    if(started==true)
    {
        if(curGears+1<maxGears)
        {
            curGears=curGears+1;
        }
    }
}
void vehicle::decreaseGear()
{
    if(started==true)
    {
        if(curGears-1<maxGears)
        {
            curGears=curGears-1;
            
        }
    }
}
void vehicle::startVehicle()
	{
		if(started==false)
		{
			started=true;
			stop=false;
		}
		else
		{
			cout<<"already vehicle is start "<<endl;
			
		}
	}
	void vehicle::stopVehicle()
	{
		if(started==true)
		{
				started=false;
			stop=true;
		}
		else
		{
			cout<<"already vehicle is stopped "<<endl;

		}
	}
    void vehicle::display()
    {
        cout<<"Current speed="<<curSpeed<<endl;
        cout<<"Current gears="<<curGears<<endl;
    }
    void vehicle::getWheels()
    {
        cout<<"wheels = "<<numWheels<<endl;
        //cout<<"Wheels= "<<numWheels<<endl;

    }
    void vehicle::getmaxGears()
    {
        cout<<"max gears = "<<maxGears<<endl;

    }
    void vehicle::getmaxSpeed()
    {
        cout<<"max speed = "<<maxSpeed<<endl;

    }
    void vehicle::getcolor()
    {
        cout<<"color = "<<color<<endl;

    }

    int main()
    {
        vehicle v;
       // v.startVehicle();
      //  v.stopVehicle();
       // v.increaseSpeed();
        v.display();
        v.getWheels();
        v.getmaxGears();
        v.getmaxSpeed();
        v.getcolor();

         int choice;
    do {
        cout << "\nChoose an option:\n";
        cout << "1. Increase Speed\n";
        cout << "2. Decrease Speed\n";
        cout << "3. Next Gear\n";
        cout << "4. Previous Gear\n";
        cout << "5. Start\n";
        cout << "6. Stop\n";
        cout << "7. Exit\n";
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                v.increaseSpeed();
                break;
            case 2:
                v.decreaseSpeed();
                break;
            case 3:
                v.increaseGear();
                break;
             case 4:
                v.decreaseGear();
                break;
             case 5:
                v.startVehicle();
                break;
             case 6:
                v.stopVehicle();
                break;
            case 7:
                break;
            default:
              cout<<"Enter valid choice "<<endl;

        }
        v.display();
    }
    while(choice!=7);

    }


