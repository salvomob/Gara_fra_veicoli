#include<iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include"veicolo.h"
#include<cstdlib>

bool playMusicForFiveSeconds();

int main(){
    float target = 150.0f;
    sf::RenderWindow window(sf::VideoMode(1500,700), "GARA TRE VEICOLI!");//default close,resize and tilebar
	sf::RectangleShape rettangolo(sf::Vector2f(100.f,50.f));//rettangolo(100x50)
	sf::RectangleShape rettangolo1(sf::Vector2f(100.f,50.f));//rettangolo(100x50)
	sf::RectangleShape rettangolo2(sf::Vector2f(100.f,50.f));//rettangolo(100x50)
	sf::RectangleShape rettangolo3(sf::Vector2f(100.f,50.f));//rettangolo(100x50)
	sf::RectangleShape rettangolo4(sf::Vector2f(100.f,50.f));//rettangolo(100x50)
	sf::RectangleShape rettangolo5(sf::Vector2f(100.f,50.f));//rettangolo(100x50)
	sf::RectangleShape rettangolo6(sf::Vector2f(100.f,50.f));//rettangolo(100x50)
	//rettangolo.setFillColor(sf::Color::Yellow);//imposto il colore giallo
	sf::Texture text;
	sf::Texture text2;
	sf::Texture text3;
	sf::Texture text4;
	sf::Texture text5;
	sf::Texture text6;
	sf::Texture text7;
	text.loadFromFile("car.png");
	text2.loadFromFile("car2.png");
	text3.loadFromFile("car3.png");
	text4.loadFromFile("moto.png");
	text5.loadFromFile("moto2.jpeg");
	text6.loadFromFile("truck.png");
	text7.loadFromFile("truck2.png");
	rettangolo.setTexture(&text);
	rettangolo.setOrigin(sf::Vector2f(0.0f,0.0f));
	
	rettangolo1.setTexture(&text2);
	rettangolo1.setOrigin(sf::Vector2f(0.0f,50.0f));
	
	rettangolo2.setTexture(&text3);
	rettangolo2.setOrigin(sf::Vector2f(0.0f,100.0f));
	
	rettangolo3.setTexture(&text4);
	rettangolo3.setOrigin(sf::Vector2f(0.0f,150.0f));
	
	rettangolo4.setTexture(&text5);
	rettangolo4.setOrigin(sf::Vector2f(0.0f,200.0f));
	
	rettangolo5.setTexture(&text6);
	rettangolo5.setOrigin(sf::Vector2f(0.0f,250.0f));
	
	rettangolo6.setTexture(&text7);
	rettangolo6.setOrigin(sf::Vector2f(0.0f,300.0f));
	
	//rettangolo.setPosition(sf::Vector2f(window.getSize().x/2-rettangolo.getSize().x/2,window.getSize().y/2-rettangolo.getSize().y/2));
	sf::Event evento;
	
	Veicolo v(4);
	v.setAccM(2.5f);
	v.setVelM(20.0f);
	
	Veicolo v1(4);
	v1.setAccM(2.5f);
	v1.setVelM(20.0f);
	
	Veicolo v2(4);
	v2.setAccM(2.5f);
	v2.setVelM(20.0f);
	
	Veicolo v3(4);
	v3.setAccM(2.5f);
	v3.setVelM(20.0f);
	
	Veicolo v4(4);
	v4.setAccM(2.5f);
	v4.setVelM(20.0f);
	
	Veicolo v5(4);
	v5.setAccM(2.5f);
	v5.setVelM(20.0f);
	
	Veicolo v6(4);
	v6.setAccM(2.5f);
	v6.setVelM(20.0f);
	
	while(window.isOpen()){	 
		srand(time(NULL));
		int scelta = rand()%2;
		if(scelta == 1){
			v.accelera();
			v.move();
			rettangolo.setPosition(sf::Vector2f(v.getPosF()/100,0.0f));
		}
		else{
			v.decelera();
			v.move();
			rettangolo.setPosition(sf::Vector2f(v.getPosF()/100,0.0f));
		}
		
		int scelta1 = rand()%10;
		if(scelta1 >= 3){
			v1.accelera();
			v1.move();
			rettangolo1.setPosition(sf::Vector2f(v1.getPosF()/100,100.0f));
		}
		else{
			v1.decelera();
			v1.move();
			rettangolo1.setPosition(sf::Vector2f(v1.getPosF()/100,100.0f));
		}

		int scelta2 = rand()%100;
		if(scelta2 >= 50){
			v2.accelera();
			v2.move();
			rettangolo2.setPosition(sf::Vector2f(v2.getPosF()/100,200.0f));
		}
		else{
			v2.decelera();
			v2.move();
			rettangolo2.setPosition(sf::Vector2f(v2.getPosF()/100,200.0f));
		}
		
		int scelta3 = rand()%200;
		if(scelta3 >= 100){
			v3.accelera();
			v3.move();
			rettangolo3.setPosition(sf::Vector2f(v3.getPosF()/100,300.0f));
		}
		else{
			v3.decelera();
			v3.move();
			rettangolo3.setPosition(sf::Vector2f(v3.getPosF()/100,300.0f));
		}
		
		int scelta4 = rand()%300;
		if(scelta4 >= 150){
			v4.accelera();
			v4.move();
			rettangolo4.setPosition(sf::Vector2f(v4.getPosF()/100,400.0f));
		}
		else{
			v4.decelera();
			v4.move();
			rettangolo4.setPosition(sf::Vector2f(v4.getPosF()/100,400.0f));
		}
		
		int scelta5 = rand()%400;
		if(scelta5 >= 200){
			v5.accelera();
			v5.move();
			rettangolo5.setPosition(sf::Vector2f(v5.getPosF()/100,500.0f));
		}
		else{
			v5.decelera();
			v5.move();
			rettangolo5.setPosition(sf::Vector2f(v5.getPosF()/100,500.0f));
		}
		
		int scelta6 = rand()%500;
		if(scelta6 >= 250){
			v6.accelera();
			v6.move();
			rettangolo6.setPosition(sf::Vector2f(v6.getPosF()/100,600.0f));
		}
		else{
			v6.decelera();
			v6.move();
			rettangolo6.setPosition(sf::Vector2f(v6.getPosF()/100,600.0f));
		}
		/*while(window.pollEvent(evento)){
			switch (evento.type){
				case sf::Event::Closed:
					window.close();
					break;
				case sf::Event::Resized:
					std::cout << "sto resizando la finestra x = " << evento.size.width << " y = " << evento.size.height << "\n";
					break;
				case sf::Event::TextEntered:
					std::cout << "hai premuto : " << (char)evento.text.unicode << "\n";	
					
			}*/
		
		if(v.getPosF()/100 >= target){ 
			std::cout <<"GARA TERMINATA, IL VINCITORE E' IL PRIMO VEICOLO!" << std::endl;
			playMusicForFiveSeconds();
			window.close();
		} 
		if(v1.getPosF()/100 >= target) {
			std::cout <<"GARA TERMINATA, IL VINCITORE E' IL SECONDO VEICOLO!" << std::endl;
			playMusicForFiveSeconds();
			window.close();
		}
		if(v2.getPosF()/100 >= target) {
			std::cout <<"GARA TERMINATA, IL VINCITORE E' IL TERZO VEICOLO!" << std::endl;
			playMusicForFiveSeconds();
			window.close();
		}
		if(v3.getPosF()/100 >= target) {
			std::cout <<"GARA TERMINATA, IL VINCITORE E' IL QUARTO VEICOLO!" << std::endl;
			playMusicForFiveSeconds();
			window.close();
		}
		if(v4.getPosF()/100 >= target) {
			std::cout <<"GARA TERMINATA, IL VINCITORE E' IL QUINTO VEICOLO!" << std::endl;
			window.close();
		}
		if(v5.getPosF()/100 >= target){
			std::cout <<"GARA TERMINATA, IL VINCITORE E' IL PRIMO VEICOLO!" << std::endl;
			playMusicForFiveSeconds();
			window.close();
		}
		if(v6.getPosF()/100 >= target) {
			std::cout <<"GARA TERMINATA, IL VINCITORE E' IL SETTIMO VEICOLO!" << std::endl;
			playMusicForFiveSeconds();
			window.close();
		}
		
		window.clear(sf::Color(250,250,250));
		window.draw(rettangolo);
		window.draw(rettangolo1);
		window.draw(rettangolo2);
		window.draw(rettangolo3);
		window.draw(rettangolo4);
		window.draw(rettangolo5);
		window.draw(rettangolo6);
		window.display();
		
	}
	
	//return EXIT_SUCCESS;
}

bool playMusicForFiveSeconds(){
    sf::Music music;
    if (!music.openFromFile("ALARMCLOCK.WAV"))
        return false;
    music.play();
    sf::sleep(sf::seconds(5.0f));
    return true;
    // since music is a local variable, it is destroyed here (thus stopping playback)
}
