#pragma once
#include <iostream>


class Car {

public:
	Car() = default;

	virtual void start();
	virtual void stop();
	virtual void drive();

	//virtual ~Car() = default;
};

class Mercedes : public Car {
public:
	void start()override;
	void stop()override;
	void drive()override;

};

class Fiat : public Car {
public:
	void start()override;
	void stop()override;
	void drive()override;

};

class Renault : public Car {
public:
	void start()override;
	void stop()override;
	void drive()override;

};

class BMW : public Car {
public:
	void start()override;
	void stop()override;
	void drive()override;

};
