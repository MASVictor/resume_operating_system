#include "resume.h"
#include "video.h"

void buildFrame();
void civil();
void experiences();
void education();
void interests();

void firstPart(){
	cls();
	buildFrame();
	civil();
	interests();
	education();
}

void secondPart(){
	cls();
	experiences();
	chg_color(BG_WHITE | BLACK);
	locate(2, 24);
	print("checkout code and documentation at: https://github.com/MASVictor/resume_operating_system.git");
}

void buildFrame(){
	chg_color(BG_WHITE | BLACK);
	int i = 0;
	for (i = 0 ; i < 80 ; i++){
		locate(i, 0);
		print("-");
		locate(i, 6);
		print("-");
		locate(i, 24);
		print("-");
	}
	for (i = 0 ; i < 24 ; i++){
		locate(0, i);
		print("|");
	}

	for (i = 0 ; i < 6 ; i++) {
		locate(40, i);
		print("|");
	}

	locate(2, 24);
	print("press a key to continue reading");
}

void civil() {
	locate(3,1);
	chg_color(BG_WHITE |CYAN);
	print("Embedded Linux Git-Team\n");
	chg_color(BG_WHITE | BLACK );
	locate(3,2);
	print("First Project \n");
	locate(3,3);
	print("mvictr619@live.com.mx\n");
	locate(3,4);
	print("Just changing some lines\n");
}



void education() {
	locate(5, 7);
	chg_color(BG_WHITE | BLUE);
	print("EDUCATION");
	chg_color(BG_WHITE | BLACK);
	locate(3, 8);
	print("Engineer \"software engineering\"");
	locate(12, 9);
	chg_color(BG_WHITE | GRAY);
	print("(in progress) - UNAM");

	chg_color(BG_WHITE | BLACK);	
	locate(3, 11);
	print("Professional Degree - \"embedded systems\"");
	locate(12, 12);
	chg_color(BG_WHITE | GRAY);
	print("(2016) - National Autonomous University of Mexico");

	chg_color(BG_WHITE | BLACK);
	locate(3, 14);
	//print("University Technology Diploma \"software engineering\"");
	//locate(12, 15);
	//chg_color(BG_WHITE | GRAY);
	//print("(2009) - University of Caen");

	locate(4, 17);
	chg_color(BG_WHITE | RED);
	print("TEAM MEMBERS");
	
	chg_color(BG_WHITE | BLACK);
	locate(3, 18);
	print("\"Mauricio Quijada, Victor Garcia, Victor Mtz, Ricardo Balderas\"");
	locate(12, 19);
	chg_color(BG_WHITE | GRAY);
	print("(2016 - 6 months) Intel Laboratory");

	chg_color(BG_WHITE | BLACK);
	locate(3, 21);
	print("\"emails:mauricio.quijada@outlook.com,ejemplo@otro.com,  \"");
	locate(12, 22);
	chg_color(BG_WHITE | GRAY);
	print("please contact us");


}
void interests() {
	chg_color(BG_WHITE | GRAY);
	locate(47,1);
	print("INTERESTS");
	chg_color(BG_WHITE | GRAY);
	locate(43,2);
	print("automobile mechanic");
	locate(43,3);
	print("Writing some hacks on our blog");
	locate(43,4);
	print("Reading : biographies, experiences...");
}




void experiences() {
	int i = 0;
	for (i = 9 ; i < 18 ; i++){
		locate(39, i);
		print("|");
	}

	locate(0,0);
	chg_color(BG_RED | WHITE);
	print("Embedded Team - Fist Projecto");
	locate(0,1);
	chg_color(BG_WHITE | GRAY);
	print("-------- 2016 --------");
	locate(0,2);
	chg_color(BG_WHITE | BLACK);
	print("This is our fist project, but we fell so tired because we drank some tequilas \n\
    You can find our code and documentation at : https://github.com/MASVictor/resume_operating_system.git\n");
	chg_color(BG_GRAY | BLACK);
	print("Java - Jersey - Appengine - Bash - Chef - JQuery - JMeter - GCE - OpenStack");

	locate(0,9);
	chg_color(BG_RED | WHITE);
	print("Mauricio Quijada Jiménez");
	locate(0,10);
	chg_color(BG_WHITE | GRAY);
	print("-------- 2016 --------");
	locate(0,11);
	chg_color(BG_WHITE | BLACK);
	print("student \n\
A SaaS Service with internal servers, \n\
no loadbalancing, no scripts, root on \n\
servers, no HA...\n\
My work was to build things around that\n\
to insure a quality service.\n");
	chg_color(BG_GRAY | BLACK);
	print ("Java - bash - tomcat - Mysql - Apache");

	locate(40,9);
	chg_color(BG_RED | WHITE);
	print("Self employed - Cloud Architect");
	locate(40,10);
	chg_color(BG_WHITE | GRAY);
	print("-------- 2014-2015 --------");
	locate(41,11);
	chg_color(BG_WHITE | BLACK);
	print("Help companies start in the cloud");
	locate(41,12);
	print("Avoid typical bad architectures");
	locate(41,13);
	print("Optimizations, Proof Of Concept");
	locate(41,14);
	print("Projects are now in production :)");
	locate(41,16);
	chg_color(BG_GRAY | BLACK);
	print("Docker - Java - AppEngine - PERL");
	locate(41,17);
	chg_color(BG_GRAY | BLACK);
	print("C - Appscale - Openstack");

	locate(0,18);
	chg_color(BG_RED | WHITE);
	print("OVH Group - Dev Ops");
	locate(0,19);
	chg_color(BG_WHITE | GRAY);
	print("-------- 2015-2016 --------");
	locate(0,20);
	chg_color(BG_WHITE | BLACK);
	print("A quite interesting experience with S. Wallez (@bluxte). A fantastic engineering team built a PaaS Timeseries platform used for monitoring (Datacenters, Servers...)\n");
	chg_color(BG_GRAY | BLACK);
	print("		 Golang - REST API - Bash - PERL - Docker - Ansible");

	
}
