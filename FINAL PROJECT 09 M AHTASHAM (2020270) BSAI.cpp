#include<iostream>
#include<fstream>
using namespace std;
//Here are allthe variables globally declared that are going to be used in different functions
int pmango, amango, aoranges, poranges, aapple, papple, adates, pdates, pgrapes, agrapes, ppeer,apeer, pappri, aappri, aban, pban, agava, pgava, awatermellon, pwatermellon;
int alady, plady, ppotato, apotato, atomato, ptomato, acarrot, pcarrot, arad, prad, acucumber, pcucumber, agarlic, pgarlic, aginger, pginger, aonion, ponion, pcabbage, acabbage;
int alays, plays, akur, pkur, awaves, pwaves, psal, asal, akrinkles, pkrinkles, atortilla, ptortilla, apotatochip, ppotatochip, atostotia, ptostotia, aruffle, pruffle, apop, ppop;
int atutti, ptutti, avanila, pvanila, achoco, pchoco, adonet, pdonet, acor, pcor, aMegnum, pMegnum, aFeast, pFeast, akulfa, pkulfa, acoco, pcoco, akhoya, pkhoya;
int count=0, total;
int crpass=12345;
int noOfSalesman=1;
int Ttotal;
int mangoam, orangeam, appleam, dateam, grapeam, peeram, appriam, banam, gavaam, watermellonam;
int ladyam, potatoam, tomatoam, carrotam, radam, cucumberam, garlicam, gingeram, onionam, cabbageam;
int laysam, kuram, wavesam, salam, krinkleam, tortillaam, potatochipam, tostotiaam, ruffleam, popam;
int tuttiam, vanilam, chocoam, donetam, coram, megnumam, feastam, kulfaam, cocoam, khoyaam;	
	

void loop()
{
	//Loop for displaying please wait on the console screen for making a few seconds pause before displaying the next screen
	int i;
	for(i=0; i<50; i++)
		{
			cout<<"Please Wait For a while"<<endl;
			system("CLS");
		}
}
void cloop()
{
	//Loop for displaying please wait on the console screen for making a few seconds pause before displaying the next screen
	int i;
	for(i=0; i<30; i++)
		{
			cout<<"Please Wait For a while"<<endl;
			system("CLS");
		}
}
//User Defined Function For Mangoes
int mango()
{
	system("CLS");
	cloop();
	cout<<"Price of 1 KG Mangos is 150 \nHow nuch do You want???"<<endl;
	cin>>amango;
	
	if(amango<=mangoam)									//check whether the amount of demanded item is less than the total we have.
	{
		pmango=(amango*150);
		cout<<"The price of "<<amango<<" kg mangos is "<<pmango<<endl;
		total=total+pmango;
		system("pause");
		mangoam=mangoam-amango;
	}
	else
	{
		cout<<"we are sorry!!! We ran short of this item"<<endl;
		system("pause");
	}
}

//User Defined Function For Oranges
int oranges()
{
	system("CLS");
	cloop();
	cout<<"Price of 1 dozen Oranges is 100 \nHow nuch do You want???"<<endl;
	cin>>aoranges;
	
	if(aoranges<=orangeam)				//check whether the amount of demanded item is less than the total we have.
	{
		poranges=(aoranges*100);
		cout<<"The price of "<<aoranges<<" dozen oranges is "<<poranges<<endl;
		total=total+poranges;
		system("pause");
		orangeam=orangeam-aoranges;
	}
	else
	{
		cout<<"we are sorry!!! We ran short of this item"<<endl;
		system("pause");
	}
}


//User Defined Function For Apples
int apples()
{
		system("CLS");
		cloop();
		cout<<"Price of 1 KG Apples is 250 \nHow nuch do You want???"<<endl;
		cin>>aapple;
		
		if(aapple<=appleam)				//check whether the amount of demanded item is less than the total we have.
		{
			papple=(aapple*250);
			cout<<"The price of "<<aapple<<" kg apples is "<<papple<<endl;
			total=total+papple;
			system("pause");
			appleam=appleam-aapple;	
		}
		else
		{
			cout<<"we are sorry!!! We ran short of this item"<<endl;
			system("pause");
		}
}

//User Defined Function For Dates
int dates()
{	
	system("CLS");
	cloop();
	cout<<"Price of 1 KG Dates is 300 \nHow nuch do You want???"<<endl;
	cin>>adates;
	
	if(adates<=dateam)			//check whether the amount of demanded item is less than the total we have.
	{
		pdates=(adates*300);
		cout<<"The price of "<<adates<<" kg dates is "<<pdates<<endl;
		total=total+pdates;
		system("pause");
		dateam=dateam-adates;
	}
	else
		{
			cout<<"we are sorry!!! We ran short of this item"<<endl;
			system("pause");
		}
}

//User Defined Function For Grapes
int grapes()
{
	system("CLS");
	cloop();
	cout<<"Price of 1 KG Grapes is 150 \nHow nuch do You want???"<<endl;
	cin>>agrapes;
	
	if(agrapes<=grapeam)				//check whether the amount of demanded item is less than the total we have.
		{
			pgrapes=(agrapes*150);
			cout<<"The price of "<<agrapes<<" kg dates is "<<pgrapes<<endl;
			total=total+pgrapes;
			system("pause");
			grapeam=grapeam-agrapes;
		}
		else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

}
//User Defined Function For Peers
int peer()
{
	system("CLS");
	cloop();
	cout<<"Price of 1 KG Peer is 100 \nHow nuch do You want???"<<endl;
	cin>>apeer;
	
	if(apeer<=peeram)				//check whether the amount of demanded item is less than the total we have.
		{
			ppeer=(apeer*100);
			cout<<"The price of "<<apeer<<" kg peers is "<<ppeer<<endl;
			total=total+ppeer;
			system("pause");
			peeram=peeram-apeer;
		}
	else
		{
			cout<<"we are sorry!!! We ran short of this item"<<endl;
			system("pause");
		}
}

//User Defined Function For Appricot
int appricot()
{
	system("CLS");
	cloop();
	cout<<"Price of 1 KG Appricot is 150 \nHow nuch do You want???"<<endl;
	cin>>aappri;
	
	if(aappri<=appriam)				//check whether the amount of demanded item is less than the total we have.
		{
			pappri=(aappri*150);
			cout<<"The price of "<<aappri<<" kg peers is "<<pappri<<endl;
			total=total+pappri;
			system("pause");
			appriam=appriam-aappri;
		}
		else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}
}
//User Defined Function For Banana
int banana()
{
	system("CLS");
	cloop();
	cout<<"Price of 1 dozen Bananas is 120 \nHow nuch do You want???"<<endl;
	cin>>aban;
	
	if(aban<=banam)				//check whether the amount of demanded item is less than the total we have.
		{
			pban=(aban*120);
			cout<<"The price of "<<aban<<" dazen banana is "<<pban<<endl;
			total=total+pban;
			system("pause");
			banam=banam-aban;
		}
		else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}
}
//User Defined Function For Gava
int gava()
{
	system("CLS");
	cloop();
	cout<<"Price of 1 KG Gavas is 130 \nHow nuch do You want???"<<endl;
	cin>>agava;
	
	if(agava<=gavaam)			//check whether the amount of demanded item is less than the total we have.
		{
			pgava=(agava*130);
			cout<<"The price of "<<agava<<" KG gava is "<<pgava<<endl;
			total=total+pgava;
			system("pause");
			gavaam=gavaam-agava;
		}
		else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}
}
//User Defined Function For WaterMellons
int watermellon()
{
	system("CLS");
	cout<<"Price of 1 KG Watermellon is 100 \nHow nuch do You want???"<<endl;
	cin>>awatermellon;
	
	if(awatermellon<=watermellonam)				//check whether the amount of demanded item is less than the total we have.
		{
			pwatermellon=(awatermellon*100);
			cout<<"The price of "<<awatermellon<<" KG gava is "<<pwatermellon<<endl;
			total=total+pwatermellon;
			system("pause");
			watermellonam=watermellonam-awatermellon;
		}
		else
			{
			cout<<"we are sorry!!! We ran short of this item"<<endl;
			system("pause");
			}
}

//User Defined Function For Fruits
int fruit()
{
			system("CLS");
			int c ;
			cout<<"What do you want to buy???"<<endl;
			cout<<"\n1 Mango \n2 Orange \n3 Apple \n4 Dates \n5 Grapes"<<endl;
			cout<<"6 Peer \n7 Appricot \n8 Banana \n9 Gava \n10 Watermellon "<<endl;
			cin>>c;
			if(c==1)
				{
					loop();
					mango();
				}
				else if(c==2)
				{
					loop();
					oranges();
				}
				else if(c==3)
				{
					loop();
					apples();
				}
				else if(c==4)
				{
					loop();
					dates();		
				}
				else if(c==5)
				{
					loop();
					grapes();	
				}
				else if(c==6)
				{
					loop();
					peer();		
				}
				else if(c==7)
				{
					loop();
					appricot();		
				}
				else if(c==8)
				{
					loop();
					banana();		
				}
				else if(c==9)
				{
					loop();
					gava();		
				}
				else if(c==10)
				{
					loop();
					watermellon();		
				}
				else
				{
					loop();
					cout<<"ENTER A VALID OPTION"<<endl;
					system("pause");
				}	
}
//User Defined Function For Lady Finger
int lady()
{
	system("CLS");
	cout<<"Price of 1 KG Lady Finger is 50 \nHow nuch do You want???"<<endl;
	cin>>alady;
	
	if(alady<=ladyam)				//check whether the amount of demanded item is less than the total we have.
		{
			plady=(alady*50);
			cout<<"The price of "<<alady<<" KG lady fingers is "<<plady<<endl;
			total=total+plady;
			system("pause");
			ladyam=ladyam-alady;
		}
		else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}	
}
//User Defined Function For Potatos
int potato()
{
	system("CLS");
	cout<<"Price of 1 Potato is 100 \nHow nuch do You want???"<<endl;
	cin>>apotato;
	
	if(apotato<=potatoam)				//check whether the amount of demanded item is less than the total we have.
		{
			ppotato=(apotato*100);
			cout<<"The price of "<<apotato<<" KG potato is "<<ppotato<<endl;
			total=total+ppotato;
			system("pause");
			potatoam=potatoam-apotato;
	}
		else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}
}
//User Defined Function For Tomatoes
int tomato()
{
	system("CLS");
	cout<<"Price of 1 KG Tomato is 100 \nHow nuch do You want???"<<endl;
	cin>>atomato;
	
	if(atomato<=tomatoam)				//check whether the amount of demanded item is less than the total we have.
		{
			ptomato=(atomato*100);
			cout<<"The price of "<<atomato<<" KG tomato is "<<ptomato<<endl;
			total=total+ptomato;
			system("pause");
			tomatoam=tomatoam-atomato;
		}
		else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}
}
//User Defined Function For Carrots
int carrot()
{
	system("CLS");
	cout<<"Price of 1 KG Carrots is 60 \nHow nuch do You want???"<<endl;
	cin>>acarrot;
	
	if(acarrot<=carrotam)			//check whether the amount of demanded item is less than the total we have.
		{
			pcarrot=(acarrot*60);
			cout<<"The price of "<<acarrot<<" KG carrot is "<<pcarrot<<endl;
			total=total+pcarrot;
			system("pause");
			carrotam=carrotam-acarrot;
		}
		else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}
}

//User Defined Function For Raddishs
int rad()
{
	system("CLS");
	cout<<"Price of 1 KG Radishs is 40 \nHow nuch do You want???"<<endl;
	cin>>arad;
	
	if(arad<=radam)			//check whether the amount of demanded item is less than the total we have.
		{
			prad=(arad*40);
			cout<<"The price of "<<arad<<" KG raddish is "<<prad<<endl;
			total=total+prad;
			system("pause");
			radam=radam-arad;
		}
		else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}
}
//User Defined Function For Cucumber
int cucumber()
{
	system("CLS");
	cout<<"Price of 1 KG Cucumber is 80 \nHow nuch do You want???"<<endl;
	cin>>acucumber;
	
	if(acucumber<=cucumberam)			//check whether the amount of demanded item is less than the total we have.
		{
			pcucumber=(acucumber*80);	
			cout<<"The price of "<<acucumber<<" KG cucumber is "<<pcucumber<<endl;
			total=total+pcucumber;
			system("pause");
			cucumberam=cucumberam-acucumber;
		}
		else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}
}
//User Defined Function For Garlic
int garlic()
{
	system("CLS");
	cout<<"Price of 1 KG Garlic is 100 \nHow nuch do You want???"<<endl;
	cin>>agarlic;
	
	if(agarlic<=garlicam)			//check whether the amount of demanded item is less than the total we have.
		{
			pgarlic=(agarlic*100);
			cout<<"The price of "<<agarlic<<" KG garlic is "<<pgarlic<<endl;
			total=total+pgarlic;
			system("pause");
			garlicam=garlicam-agarlic;
		}
		else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}
}
//User Defined Function For Gingers
int ginger()
{
	system("CLS");
	cout<<"Price of 1 KG Ginger is 80 \nHow nuch do You want???"<<endl;
	cin>>aginger;
	
	if(aginger<=gingeram)			//check whether the amount of demanded item is less than the total we have.
		{
			pginger=(aginger*80);
			cout<<"The price of "<<aginger<<" KG ginger is "<<pginger<<endl;
			total=total+pginger;
			system("pause");
			gingeram=gingeram-aginger;
		}
		else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}
}
//User Defined Function For Onions
int onion()
{
	system("CLS");
	cout<<"Price of 1 KG Onion is 80 \nHow nuch do You want???"<<endl;
	cin>>aonion;
	if(aonion<=onionam)
		{
			ponion=(aonion*80);
			cout<<"The price of "<<aonion<<" KG onions is "<<ponion<<endl;
			total=total+ponion;
			system("pause");
			onionam=onionam-aonion;
		}
		else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}
}
	
//User Defined Function For Cabbages
int cabbage()
{
	system("CLS");
	cout<<"Price of 1 KG Cabbage is 100 \nHow nuch do You want???"<<endl;
	cin>>acabbage;
	
	if(acabbage<=cabbageam)
		{
			pcabbage=(acabbage*100);
			cout<<"The price of "<<acabbage<<" KG cabbage is "<<pcabbage<<endl;
			total=total+pcabbage;
			system("pause");
			cabbageam=cabbageam-acabbage;
		}
		else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}
}	
//User Defined Function For Vegetables
int veg()
{
			system("CLS");
			int c;
			cout<<"What do you want to buy???"<<endl;
			cout<<"\n1 Lady Finger \n2 Potato \n3 Tomato \n4 Carrot \n5 Radish"<<endl;
			cout<<"6 Cucumber \n7 Garlic \n8 Ginger \n9 Onion \n10 Cabbage "<<endl;
			cin>>c;
			if(c==1)
				{
					loop();
					lady();					
				}
			else if(c==2)
				{
					loop();
					potato();
					
				}
			else if(c==3)
				{
					loop();
					tomato();					
				}
			else if(c==4)
				{
					loop();
					carrot();
					
				}
			else if(c==5)
				{
					loop();
					rad();					
				}
			else if(c==6)
				{
					loop();
					cucumber();
					
				}
			else if(c==7)
				{
					loop();
					garlic();					
				}
			else if(c==8)
				{
					loop();
					ginger();
				}
			else if(c==9)
				{
					loop();
					onion();					
				}
			else if(c==10)
				{
					loop();
					cabbage();					
				}
			else
				{
					loop();
					cout<<"ENTER A VALID OPTION"<<endl;
					system("pause");
				}
}


//User Defined Function For Lays
int lays()
{
	int d;
	system("CLS");
	cout<<"Which Pack do you want??? \n1 Small Pack: 50Rs \n2 Medium Pack: 100 Rs \n3 Large Pack: 150"<<endl;
	cin>>d;
		if(d==1)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>alays;
			if(alays<=laysam)
			{
				plays=(alays*50);
				cout<<"The price of "<<alays<<" lays is "<<plays<<endl;
				total=total+plays;
				system("pause");
				laysam=laysam-alays;
			}
				else
					{
						cout<<"we are sorry!!! We ran short of this item"<<endl;
						system("pause");
					}
		}
		else if(d==2)
			{
					system("CLS");
					cout<<"How Many Packs do You want??"<<endl;
					cin>>alays;
					if(alays<=laysam)
					{
						plays=(alays*100);
						cout<<"The price of "<<alays<<" lays is "<<plays<<endl;
						total=total+plays;
						system("pause");
						laysam=laysam-alays;
					}
					else
					{
						cout<<"we are sorry!!! We ran short of this item"<<endl;
						system("pause");
					}
					
			}
		else if(d==3)
			{
				system("CLS");
				cout<<"How Many Packs do You want??"<<endl;
				cin>>alays;
				if(alays<=laysam)
					{
						plays=(alays*150);
						cout<<"The price of "<<alays<<" lays is "<<plays<<endl;
						total=total+plays;
						system("pause");
						laysam=laysam-alays;
					}
				else
					{
						cout<<"we are sorry!!! We ran short of this item"<<endl;
						system("pause");
					}
			}
		else
			{
				system("CLS");
				cout<<"Choose A Valid Option"<<endl;
			}
	
}

//User Defined Function For Kurkures
int kur()
{
	int d;
	system("CLS");
	cout<<"Which Pack do you want??? \n1 Small Pack: 50Rs \n2 Medium Pack: 100 Rs \n3 Large Pack: 150"<<endl;
	cin>>d;
		if(d==1)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>akur;
			if(akur<=kuram)
				{
					pkur=(akur*50);
					cout<<"The price of "<<akur<<" Kurkures is "<<pkur<<endl;
					total=total+pkur;
					system("pause");
					kuram=kuram-akur;
				}
				else
				{
					cout<<"we are sorry!!! We ran short of this item"<<endl;
					system("pause");
				}
		}
		else if(d==2)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>akur;
			if(akur<=kuram)
			{
				
				pkur=(akur*100);
				cout<<"The price of "<<akur<<" Kurkures is "<<pkur<<endl;
				total=total+pkur;
				system("pause");
				kuram=kuram-akur;
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}
		
		}
		else if(d==3)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>akur;
			if(akur<=kuram)
			{
				pkur=(akur*150);
				cout<<"The price of "<<akur<<" Kurkures is "<<pkur<<endl;
				total=total+pkur;
				system("pause");
				kuram=kuram-akur;
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}
		}
		else
		{
			system("CLS");
			cout<<"Choose A Valid Option"<<endl;
		}

}

//User Defined Function For Salanty
int salanty()
{
	int d;
	system("CLS");
	cout<<"Which Pack do you want??? \n1 Small Pack: 50Rs \n2 Medium Pack: 100 Rs \n3 Large Pack: 150"<<endl;
	cin>>d;
		if(d==1)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>asal;
			if(asal<=salam)
			{
				
				psal=(asal*50);
				cout<<"The price of "<<asal<<" salanty is "<<psal<<endl;
				total=total+psal;
				system("pause");
				salam=salam-asal;
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}
		}
		else if(d==2)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>asal;
			if(asal<=salam)
			{
				
				psal=(asal*100);
				cout<<"The price of "<<asal<<" salanty is "<<psal<<endl;
				total=total+pkur;
				system("pause");
				salam=salam-asal;
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}
		}
		else if(d==3)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>asal;
			if(asal<=salam)
			{
				
				psal=(asal*150);
				cout<<"The price of "<<asal<<" salanty is "<<psal<<endl;
				total=total+psal;
				system("pause");
				salam=salam-asal;
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

		}
		else
		{
			system("CLS");
			cout<<"Choose A Valid Option"<<endl;
		}
}

//User Defined Function For Waves
int waves()
{
	int d;
	system("CLS");
	cout<<"Which Pack do you want??? \n1 Small Pack: 50Rs \n2 Medium Pack: 100 Rs \n3 Large Pack: 150"<<endl;
	cin>>d;
		if(d==1)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>awaves;
			if(awaves<=wavesam)
			{
				
				pwaves=(awaves*50);
				cout<<"The price of "<<awaves<<" waves is "<<pwaves<<endl;
				total=total+pwaves;
				system("pause");
				wavesam=wavesam-awaves;
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

		}
		else if(d==2)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>awaves;
			if(awaves<=wavesam)
			{
				
				pwaves=(awaves*100);
				cout<<"The price of "<<awaves<<" waves is "<<pwaves<<endl;
				total=total+pwaves;
				system("pause");
				wavesam=wavesam-awaves;
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

		}
		else if(d==3)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>awaves;
			if(awaves<=wavesam)
			{
				
				pwaves=(awaves*150);
				cout<<"The price of "<<awaves<<" waves is "<<pwaves<<endl;
				total=total+pwaves;
				system("pause");
				wavesam=wavesam-awaves;
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

		}
		else
		{
			system("CLS");
			cout<<"Choose A Valid Option"<<endl;
			system("pause");
		}

}
//User Defined Function For Pop Chips
int pop()
{
	int d;
	system("CLS");
	cout<<"Which Pack do you want??? \n1 Small Pack: 50Rs \n2 Medium Pack: 100 Rs \n3 Large Pack: 150"<<endl;
	cin>>d;
		if(d==1)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>apop;
			if(apop<=popam)
			{
				ppop=(apop*50);
				cout<<"The price of "<<apop<<" pops is "<<ppop<<endl;
				total=total+ppop;
				system("pause");
				popam=popam-apop;
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

			
		}
		else if(d==2)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>apop;
			if(apop<=popam)
			{
				
				ppop=(apop*100);
				cout<<"The price of "<<apop<<" pops is "<<ppop<<endl;
				total=total+ppop;
				system("pause");
				popam=popam-apop;
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

		}
		else if(d==3)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>apop;
			if(apop<=popam)
			{
				
				ppop=(apop*150);
				cout<<"The price of "<<apop<<" pops is "<<ppop<<endl;
				total=total+ppop;
				system("pause");
				popam=popam-apop; 
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

		}
		else
		{
			system("CLS");
			cout<<"Choose A Valid Option"<<endl;
			system("pause");
		}

	
}
//User Defined Function For Ruffles
int ruffle()
{
	int d;
	system("CLS");
	cout<<"Which Pack do you want??? \n1 Small Pack: 50Rs \n2 Medium Pack: 100 Rs \n3 Large Pack: 150"<<endl;
	cin>>d;
		if(d==1)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>aruffle;
			if(aruffle<=ruffleam)
			{
				pruffle=(aruffle*50);
				cout<<"The price of "<<aruffle<<" ruffle is "<<pruffle<<endl;
				total=total+pruffle;
				system("pause");
				ruffleam=ruffleam-aruffle;
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

		}
		else if(d==2)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>aruffle;
			if(aruffle<=ruffleam)
			{
				pruffle=(aruffle*100);
				cout<<"The price of "<<aruffle<<" ruffle is "<<pruffle<<endl;
				total=total+pruffle;
				system("pause");
				ruffleam=ruffleam-aruffle;
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

			
		}
		else if(d==3)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>aruffle;
			if(aruffle<=ruffleam)
			{
				pruffle=(aruffle*150);
				cout<<"The price of "<<aruffle<<" ruffle is "<<pruffle<<endl;
				total=total+pruffle;
				system("pause");	
				ruffleam=ruffleam-aruffle;
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

			
		}
		else
		{
			system("CLS");
			cout<<"Choose A Valid Option"<<endl;
			system("pause");
		}	
}

//User Defined Function For Tostotias
int tostotia()
{
	int d;
	system("CLS");
	cout<<"Which Pack do you want??? \n1 Small Pack: 50Rs \n2 Medium Pack: 100 Rs \n3 Large Pack: 150"<<endl;
	cin>>d;
		if(d==1)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>atostotia;
			if(atostotia<=tostotiaam)
			{
				
				ptostotia=(atostotia*50);
				cout<<"The price of "<<atostotia<<" tostotia is "<<ptostotia<<endl;
				total=total+ptostotia;
				system("pause");
				tostotiaam=tostotiaam-atostotia;
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

		}
		else if(d==2)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>atostotia;
			if(atostotia<=tostotiaam)
			{
					
				ptostotia=(atostotia*100);
				cout<<"The price of "<<atostotia<<" tostotia is "<<ptostotia<<endl;
				total=total+ptostotia;
				system("pause");
				tostotiaam=tostotiaam-atostotia;
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

		}
		else if(d==3)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>atostotia;
			if(atostotia<=tostotiaam)
			{
				
				ptostotia=(atostotia*150);
				cout<<"The price of "<<atostotia<<" tostotia is "<<ptostotia<<endl;
				total=total+ptostotia;
				system("pause");
				tostotiaam=tostotiaam-atostotia;
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

		}
		else
		{
			system("CLS");
			cout<<"Choose A Valid Option"<<endl;
			system("pause");
		}	
	
}

//User Defined Function For Potato Chips
int potatochip()
{
	int d;
	system("CLS");
	cout<<"Which Pack do you want??? \n1 Small Pack: 50Rs \n2 Medium Pack: 100 Rs \n3 Large Pack: 150"<<endl;
	cin>>d;
		if(d==1)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>apotatochip;
			if(apotatochip<=potatochipam)
			{
				
				ppotatochip=(apotatochip*50);
				cout<<"The price of "<<apotatochip<<" potatochip is "<<ppotatochip<<endl;
				total=total+ppotatochip;
				system("pause");
				potatochipam=potatochipam-apotatochip;
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

		}
		else if(d==2)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>apotatochip;
			if(apotatochip<=potatochipam)
			{
					ppotatochip=(apotatochip*100);
				cout<<"The price of "<<apotatochip<<" potatochip is "<<ppotatochip<<endl;
				total=total+ppotatochip;
				system("pause");
				potatochipam=potatochipam-apotatochip;
		
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

		}
		
		else if(d==3)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>apotatochip;
			if(apotatochip<=potatochipam)
			{
				ppotatochip=(apotatochip*150);
				cout<<"The price of "<<apotatochip<<" potatochip is "<<ppotatochip<<endl;
				total=total+ppotatochip;
				system("pause");
				potatochipam=potatochipam-apotatochip;

			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

		}
		else
		{
			system("CLS");
			cout<<"Choose A Valid Option"<<endl;
			system("pause");
		}	
	
}

//User Defined Function For Tortilla
int tortilla()
{
	int d;
	system("CLS");
	cout<<"Which Pack do you want??? \n1 Small Pack: 50Rs \n2 Medium Pack: 100 Rs \n3 Large Pack: 150"<<endl;
	cin>>d;
		if(d==1)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>atortilla;
			if(atortilla<=tortillaam)
			{
				ptortilla=(atortilla*50);
				cout<<"The price of "<<atortilla<<" tortillas is "<<ptortilla<<endl;
				total=total+ptortilla;
				system("pause");
				tortillaam=tortillaam-atortilla;
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

		}
		else if(d==2)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>atortilla;
			if(atortilla<=tortillaam)
			{
				
				ptortilla=(atortilla*100);
				cout<<"The price of "<<atortilla<<" tortillas is "<<ptortilla<<endl;
				total=total+ptortilla;
				system("pause");
				tortillaam=tortillaam-atortilla;	
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

		
		}
		else if(d==3)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>atortilla;
			if(atortilla<=tortillaam)
			{
			
				ptortilla=(atortilla*150);
				cout<<"The price of "<<atortilla<<" tortillas is "<<ptortilla<<endl;
				total=total+ptortilla;
				system("pause");
				tortillaam=tortillaam-atortilla;	
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

		}
		else
		{
			system("CLS");
			cout<<"Choose A Valid Option"<<endl;
			system("pause");
		}	
	
}
//User Defined Function For Krinkles
int krinkles()
{
	int d;
	system("CLS");
	cout<<"Which Pack do you want??? \n1 Small Pack: 50Rs \n2 Medium Pack: 100 Rs \n3 Large Pack: 150"<<endl;
	cin>>d;
		if(d==1)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>akrinkles;
			if(akrinkles<krinkleam)
			{
				
				pkrinkles=(akrinkles*50);
				cout<<"The price of "<<akrinkles<<" krinkles is "<<pkrinkles<<endl;
				total=total+pkrinkles;
				system("pause");
				krinkleam=krinkleam-akrinkles;
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

		}
		else if(d==2)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>akrinkles;
			if(akrinkles<krinkleam)
			{
			
				pkrinkles=(akrinkles*100);
				cout<<"The price of "<<akrinkles<<" krinkles is "<<pkrinkles<<endl;
				total=total+pkrinkles;
				system("pause");
				krinkleam=krinkleam-akrinkles;	
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

		}
		else if(d==3)
		{
			system("CLS");
			cout<<"How Many Packs do You want??"<<endl;
			cin>>akrinkles;
			if(akrinkles<krinkleam)
			{
				
				pkrinkles=(akrinkles*150);
				cout<<"The price of "<<akrinkles<<" krinkles is "<<pkrinkles<<endl;
				total=total+pkrinkles;
				system("pause");
				krinkleam=krinkleam-akrinkles;	
			}
			else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

		}
		else
		{
			system("CLS");
			cout<<"Choose A Valid Option"<<endl;
			system("pause");
		}		
}

//User Defined Function For Chips
int chips()
{
			system("CLS");
			int c;
			cout<<"What do you want to buy???"<<endl;
			cout<<"\n1 Lays \n2 Kurkure \n3 Salanty \n4 Waves \n5 Pop Chips"<<endl;
			cout<<"6 Ruffle Chips \n7 Tostotia \n8 Tortilla \n9 Potato Chips \n10 Krinkles "<<endl;
			cin>>c;
				if(c==1)
				{
					loop();
					lays();
				}
				else if(c==2)
				{
					loop();
					kur();
				}
				else if(c==3)
				{
					loop();
					salanty();					
				}
				else if(c==4)
				{
					loop();
					waves();					
				}
				else if(c==5)
				{
					loop();
					pop();		
				}
				else if(c==6)
				{
					loop();
					ruffle();
					
				}
				else if(c==7)
				{
					loop();
					tostotia();										
				}
				else if(c==8)
				{
					loop();
					tortilla();
				}
				else if(c==9)
				{
					loop();
					potatochip();					
				}
				else if(c==10)
				{
					loop();
					krinkles();					
				}
				else
				{
					loop();
					cout<<"ENTER A VALID OPTION"<<endl;
					system("pause");
				}
}

//User Defined Function For Tutti fruity 
int tutti()
{
	system("CLS");
	cout<<"This item costs 100 \nHow much do you want ???"<<endl;
	cin>>atutti;
	if(atutti<=tuttiam)
	{
		ptutti=(atutti*100);
		cout<<"The price of "<<atutti<<" Tutti Fruities is "<<ptutti<<endl;
		total=total+ptutti;
		system("pause");
		tuttiam=tuttiam-atutti;
	}
	else
		{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
		}

}

//User Defined Function For Vanila
int Vanila()
{
	system("CLS");
	cout<<"This item costs 150 \nHow much do you want ???"<<endl;
	cin>>avanila;
	if(avanila<=vanilam)
	{
		pvanila=(avanila*150);
		cout<<"The price of "<<avanila<<" Vanilas is "<<pvanila<<endl;
		total=total+pvanila;
		system("pause");
		vanilam=vanilam-avanila;	
	}
	else
		{
			cout<<"we are sorry!!! We ran short of this item"<<endl;
			system("pause");
		}

}

//User Defined Function For Chocolate
int chocolate()
{
	system("CLS");
	cout<<"This item costs 200 \nHow much do you want ???"<<endl;
	cin>>achoco;
	if(achoco<=chocoam)
	{
		pchoco=(achoco*200);
		cout<<"The price of "<<achoco<<" chocolates is "<<pchoco<<endl;
		total=total+pchoco;
		system("pause");
		chocoam=chocoam-achoco;
	}
	else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

}

//User Defined Function For Donet
int donet()
{
	system("CLS");
	cout<<"This item costs 300 \nHow much do you want ???"<<endl;
	cin>>adonet;
	if(adonet<=donetam)
	{	
		pdonet=(adonet*300);
		cout<<"The price of "<<adonet<<" donets is "<<pdonet<<endl;
		total=total+pdonet;
		system("pause");
		donetam=donetam-adonet;	
	}
	else
		{
			cout<<"we are sorry!!! We ran short of this item"<<endl;
			system("pause");
		}
	
}

//User Defined Function For Cornetto
int Cornetto()
{
	system("CLS");
	cout<<"This item costs 250 \nHow much do you want ???"<<endl;
	cin>>acor;
	if(acor<=coram)
	{
		pcor=(acor*250);
		cout<<"The price of "<<acor<<" Cornettos is "<<pcor<<endl;
		total=total+pcor;
		system("pause");	
		coram=coram-acor;
	}
	else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

}
//User Defined Function For Megnum
int Megnum()
{
	system("CLS");
	cout<<"This item costs 310 \nHow much do you want ???"<<endl;
	cin>>aMegnum;
	if(aMegnum<=megnumam)
	{
		pMegnum=(aMegnum*310);
		cout<<"The price of "<<aMegnum<<" Megnums is "<<pMegnum<<endl;
		total=total+pMegnum;
		system("pause");
		megnumam=megnumam-aMegnum;
	}
	else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

}

//User Defined Function For Feast 
int Feast()
{
	system("CLS");
	cout<<"This item costs 500 \nHow much do you want ???"<<endl;
	cin>>aFeast;
	if(aFeast<=feastam)
	{
		pFeast=(aFeast*500);
		cout<<"The price of "<<aFeast<<" Feasts is "<<pFeast<<endl;
		total=total+pFeast;
		system("pause");	
		feastam=feastam-aFeast;
	}
	else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

}
//User Defined Function For Kulfa
int kulfa()
{
	system("CLS");
	cout<<"This item costs 700 \nHow much do you want ???"<<endl;
	cin>>akulfa;
	if(akulfa<=kulfaam)
	{
		pkulfa=(akulfa*700);
		cout<<"The price of "<<akulfa<<" kulfas is "<<pkulfa<<endl;
		total=total+pkulfa;
		system("pause");	
		kulfaam=kulfaam-akulfa;
	}
	else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

}

//User Defined Function For Coconuuts
int coco()
{
	system("CLS");
	cout<<"This item costs 800 \nHow much do you want ???"<<endl;
	cin>>acoco;
	if(acoco<=cocoam)
	{
		pcoco=(acoco*800);
		cout<<"The price of "<<acoco<<" Coconuts is "<<pcoco<<endl;
		total=total+pcoco;
		system("pause");
		cocoam=cocoam-acoco;
	}
	else
		{
			cout<<"we are sorry!!! We ran short of this item"<<endl;
			system("pause");
		}

}

//User Defined Function For Khoya Khajur
int khoya()
{
	system("CLS");
	cout<<"This item costs 900 \nHow much do you want ???"<<endl;
	cin>>akhoya;
	if(akhoya<=khoyaam)
	{
		pkhoya=(akhoya*900);
		cout<<"The price of "<<akhoya<<" khoya Khajurs is "<<pkhoya<<endl;
		total=total+pkhoya;
		system("pause");
		khoyaam=khoyaam-akhoya;
	}
	else
		{
			cout<<"we are sorry!!! We ran short of this item"<<endl;
			system("pause");
		}

}

//User Defined Function For Ice Cream
int icecream()
{
			system("CLS");
			int c;
			cout<<"What do you want to buy???"<<endl;
			cout<<"\n1 Tutti Fruity \n2 Vanila \n3 Chocolate  \n4 Donet \n5 Cornetto"<<endl;
			cout<<"6 Megnum \n7 Feast \n8 Kulfa \n9 Coconut \n10 Khoya Khajur "<<endl;
			cin>>c;
				if(c==1)
				{
					loop();
					tutti();
					
				}
				else if(c==2)
				{
					loop();
					Vanila();
					
				}
				else if(c==3)
				{
					loop();
					chocolate();
					
				}
				else if(c==4)
				{
					loop();
					donet();
					
				}
				else if(c==5)
				{
					loop();
					Cornetto();					
				}
				else if(c==6)
				{
					loop();
					Megnum();
				}
				else if(c==7)
				{
					loop();
					Feast();
				}
				else if(c==8)
				{
					loop();
					kulfa();
					
				}
				else if(c==9)
				{
					loop();
					coco();
				}
				else if(c==10)
				{
					loop();
					khoya();
				}
				else
				{
					loop();
					cout<<"ENTER A VALID OPTION"<<endl;
					system("pause");
				}
}
int abis, pbis, bisam;

//User Defined Function For Biscuits 
int bis()
{
	int h;
	system("CLS");
	cout<<"Which Pack Do you want??? \n1 Small Pack \n2 Large Pack"<<endl;
	cin>>h;
	if(h==1)
	{
		system("CLS");
		cout<<"Small Pack Costs 20 \nHowmany do you want???"<<endl;
		cin>>abis;
		if(abis<=bisam)
		{
			pbis=(abis*20);
			cout<<"The price of "<<abis<<" biscuits is "<<pbis<<endl;
			total=total+pbis;	
			system("pause");
			bisam=bisam-abis;
		}
		else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

		
	}
	else if(h==2)
	{
		system("CLS");
		cout<<"Large Pack Costs 200 \nHow many do you want???"<<endl;
		cin>>abis;
		if(abis<=bisam)
		{
			pbis=(abis*200);
			cout<<"The price of "<<abis<<" biscuits is "<<pbis<<endl;
			total=total+pbis;	
			system("pause");
			bisam=bisam-abis;
		}
		else
			{
				cout<<"we are sorry!!! We ran short of this item"<<endl;
				system("pause");
			}

	}
	else
	{
		cout<<"Choose a valid option"<<endl;
	}
}

int biscuits()
{
		system("CLS");
		int c;
		cout<<"What do you want to buy???"<<endl;
		cout<<"\n1 Rio \n2 Bistics \n3 Super \n4 Peanut \n5 Butter Puffs"<<endl;
		cout<<"6 Chocolate Chip \n7 Chocolato \n8 Bravo \n9 Zera Plus \n10 Tuc "<<endl;
		cin>>c;
				if(c==1)
				{
					loop();
					bis();
				}
				else if(c==2)
				{
					loop();
					bis();
				}
				else if(c==3)
				{
					loop();
					bis();
				}
				else if(c==4)
				{
					loop();
					bis();
				}
				else if(c==5)
				{
					loop();
					bis();
				}
				else if(c==6)
				{
					loop();
					bis();
				}
				else if(c==7)
				{
					loop();
					bis();
				}
				else if(c==8)
				{
					loop();
					bis();
				}
				else if(c==9)
				{
					loop();
					bis();
				}
				else if(c==10)
				{
					loop();
					bis();
				}
				else
				{
					loop();
					cout<<"ENTER A VALID OPTION"<<endl;
					system("pause");
				}
}

//User Defined Function For Customer
int customer()
{
	total=0;
	char opt;
	do
		{
			system("CLS");
			int b, temp;
			cout<<"What do u want to buy??"<<endl;
			cout<<"1 Fruit\n2 Vegetables\n3 Chips\n4 Icream \n5 Biscuits"<<endl;
			cin>>b;
			if(b==1)
			{
				loop();
				fruit();
			}
			else if (b==2)
			{
				loop();
				veg();
			}
			else if (b==3)
			{
				loop();
				chips();
			}
			else if(b==4)
			{
				loop();
				icecream();
			}
			else if(b==5)
			{
				loop();
				biscuits();
			}
			else 
			{
				loop();
				cout<<"ENTER A VALID OPTION"<<endl;
				system("pause");
			}
	system("cls");
	cout<<"Do you want to buy anything else??? (y/n)"<<endl;
	cin>>opt;
	if(opt=='n')
	{
		system("cls");
		cout<<"Your total bill is: RS "<<total<<endl;
		cout<<"Thanks for shopping "<<endl;
	}
	system("pause");
	} 
	while(opt!='n');
	
}

//User Defined Function For Salesman
int salesman()
{
	system("CLS");
	cout<<"Welcome Salesman "<<endl;
	system("pause");
	system("CLS");
	cout<<"You have served "<<count<<" Custumers for 2 minutes each and you are "<<noOfSalesman<<" in num."<<endl;
	cout<<"So today, your Pay is "<<(count*2*10)/noOfSalesman<<endl;
	system("pause");
}
int password();
int wrongpass()
{
	system("CLS");
	cout<<"Invalid Password!!!\nTry Again"<<endl;
	system("pause");
	password();
}

//User Defined Function For Sold Items
int SoldItems()
{
	char x;
	system("CLS");
	cout<<"\n\nThe Total sale for today is "<<Ttotal<<endl;
	cout<<"\n\nThe no of Customers visited shop are: "<<count<<"\n\n"<<endl;
	system("pause");
	system("CLS");
	cout<<"Do you want to delete the previous record(total sale)...?(y/n)"<<endl;
	cin>>x;
	if(x=='y')
	{
		count=0;
		Ttotal=0;
		cout<<"Data Erased Successfully "<<endl;
		system("pause");
	}
}
//User Defined Function For adding salesman 
int addsalesman()
{
	int add;
	cout<<"There are "<<noOfSalesman<<" no of salesman "<<endl;
	cout<<"how many salesman do you want to add"<<endl;
	cin>>add;
	noOfSalesman=noOfSalesman+add;
	cout<<"Now There are "<<noOfSalesman<<" no of salesman "<<endl;
	system("pause");

}

//User Defined Function For looking for the items falling down 
int itmesfall()
{
	system("CLS");
	int x=0;
	if(mangoam>=0&&mangoam<2)
	{
		cout<<"We ran short of Mangoes "<<endl;
		x=1;
	}
	if(orangeam>=0&&orangeam<2)
	{
		cout<<"We ran short of Oranges "<<endl;
		x=1;
	}
	if(appleam>=0&&appleam<2)
	{
		cout<<"We ran short of Apples "<<endl;
		x=1;
	}
	if(dateam>=0&&dateam<2)
	{
		cout<<"We ran short of Dates "<<endl;
		x=1;
	}
	if(grapeam>=0&&grapeam<2)
	{
		cout<<"We ran short of Grapes "<<endl;
		x=1;
	}
	if(peeram>=0&&peeram<2)
	{
		cout<<"We ran short of Peers "<<endl;
		x=1;
	}
	if(appriam>=0&&appriam<2)
	{
		cout<<"We ran short of Appricots "<<endl;
		x=1;
	}
	if(banam>=0&&banam<2)
	{
		cout<<"We ran short of Bananas "<<endl;
		x=1;
	}
	if(gavaam>=0&&gavaam<2)
	{
		cout<<"We ran short of gavas "<<endl;
		x=1;
	}
	if(watermellonam>=0&&watermellonam<2)
	{
		cout<<"We ran short of watermellons "<<endl;
		x=1;
	}
	if(ladyam>=0&&ladyam<2)
	{
		cout<<"We ran short of LADY FINGERS "<<endl;
		x=1;
	}
	if(potatoam>=0&&potatoam<2)
	{
		cout<<"We ran short of Potatoes "<<endl;
		x=1;
	}
	if(tomatoam>=0&&tomatoam<2)
	{
		cout<<"We ran short of Tomato "<<endl;
		x=1;
	}
	if(carrotam>=0&&carrotam<2)
	{
		cout<<"We ran short of Carrot "<<endl;
		x=1;
	}
	if(radam>=0&&radam<2)
	{
		cout<<"We ran short of RADISH "<<endl;
		x=1;
	}
	if(cucumberam>=0&&cucumberam<2)
	{
		cout<<"We ran short of Cucumber "<<endl;
		x=1;
	}
	if(garlicam>=0&&garlicam<2)
	{
		cout<<"We ran short of Garlic "<<endl;
		x=1;
	}
	if(gingeram>=0&&gingeram<2)
	{
		cout<<"We ran short of Ginger "<<endl;
		x=1;
	}
	if(onionam>=0&&onionam<2)
	{
		cout<<"We ran short of Onions "<<endl;
		x=1;
	}
	if(cabbageam>=0&&cabbageam<2)
	{
		cout<<"We ran short of Cabbages "<<endl;
		x=1;
	}
	if(laysam>=0&&laysam<2)
	{
		cout<<"We ran short of Lays "<<endl;
		x=1;
	}
	if(kuram>=0&&kuram<2)
	{
		cout<<"We ran short of Kurkures "<<endl;
		x=1;
	}
	if(wavesam>=0&&wavesam<2)
	{
		cout<<"We ran short of Waves "<<endl;
		x=1;
	}
	if(salam>=0&&salam<2)
	{
		cout<<"We ran short of Salanty "<<endl;
		x=1;
	}
	if(krinkleam>=0&&krinkleam<2)
	{
		cout<<"We ran short of Krinkles "<<endl;
		x=1;
	}
	if(tortillaam>=0&&tortillaam<2)
	{
		cout<<"We ran short of Tortillas "<<endl;
		x=1;
	}
	if(potatochipam>=0&&potatochipam<2)
	{
		cout<<"We ran short of Potato Chips "<<endl;
		x=1;
	}
	if(tostotiaam>=0&&tostotiaam<2)
	{
		cout<<"We ran short of Tostotias "<<endl;
		x=1;
	}
	if(ruffleam>=0&&ruffleam<2)
	{
		cout<<"We ran short of Ruffles "<<endl;
		x=1;
	}
	if(popam>=0&&popam<2)
	{
		cout<<"We ran short of POP CHIPS "<<endl;
		x=1;
	}
	if(tuttiam>=0&&tuttiam<2)
	{
		cout<<"We ran short of TUTTI FRUITY ICECREAM "<<endl;
		x=1;
	}
	if(vanilam>=0&&vanilam<2)
	{
		cout<<"We ran short of VANILA ICECREAM "<<endl;
		x=1;
	}
	if(chocoam>=0&&chocoam<2)
	{
		cout<<"We ran short of CHOCOLATE ICECREAM "<<endl;
		x=1;
	}
	if(donetam>=0&&donetam<2)
	{
		cout<<"We ran short of DONET ICECREAM "<<endl;
		x=1;
	}
	if(coram>=0&&peeram<2)
	{
		cout<<"We ran short of Peers "<<endl;
		x=1;
	}
	if(megnumam>=0&&megnumam<2)
	{
		cout<<"We ran short of MEGNUM ICECREAM "<<endl;
		x=1;
	}
	if(feastam>=0&&feastam<2)
	{
		cout<<"We ran short of FEAST ICECREAM "<<endl;
		x=1;
	}
	if(kulfaam>=0&&kulfaam<2)
	{
		cout<<"We ran short of KULFA ICECREAM "<<endl;
		x=1;
	}
	if(cocoam>=0&&cocoam<2)
	{
		cout<<"We ran short of COCONUT ICECREAM "<<endl;
		x=1;
	}
	if(khoyaam>=0&&khoyaam<2)
	{
		cout<<"We ran short of KHOYA KHAJUR ICECREAM "<<endl;
		x=1;
	}
	if(bisam>=0&&bisam<2)
	{
		cout<<"We ran short of Biscuits "<<endl;
		x=1;
	}
	if(x==0)
	{
		cout<<"\n\n\t\tNo item is falling down "<<endl;
	}
	system("pause");
	system("CLS");
}

//User Defined Function For firing a salesman if he is not needed 
int fire()
{
	system("CLS");
	int x;
	cout<<"How many salesman do you want to fire "<<endl;
	cin>>x;
	noOfSalesman=noOfSalesman-x;
	cout<<"Now you have "<<noOfSalesman<<" no of salesman "<<endl;
	system("pause");
	system("CLS");
}
int oldpass();
int wrpass()
{
	system("CLS");
	cout<<"Invalid Old Password!!!\nTry Again "<<endl;
	system("pause");
	oldpass();
}

int changepass()
{
	system("CLS");
	int x;
	cout<<"Enter New Password "<<endl;
	cin>>x;
	system("CLS");
	crpass=x;
	cout<<"Password Changed Successfully "<<endl;
	system("pause");
}

int oldpass()
{
	system("CLS");
	int x;
	cout<<"Enter Your old password "<<endl;
	cin>>x;
	if(x==crpass)
	{
		changepass();
	}
	else
	{
		wrpass();
	}
}

//User Defined Function For adding vegetables to the shop
int addveg()
{ 
	system("CLS");
	char opt;
	int x, j;
	cout<<"What do you want to add???\n"<<endl;
	cout<<"1 Lady Fingers\t1 Potatoes\t3 Tomatoes\t4 Carrotsz\t5 Raddish\n\n6 Cucumbers\t7 Garlic\t8 Ginger\t9 Onion\t\t10 Cabbages\n"<<endl;
	
	cin>>x;
	if (x==1)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<ladyam<<endl;
		ladyam=ladyam+j;
		cout<<"New Amount= "<<ladyam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if (x==2)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<potatoam<<endl;
		potatoam=potatoam+j;
		cout<<"New Amount= "<<potatoam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if (x==3)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<tomatoam<<endl;
		tomatoam=tomatoam+j;
		cout<<"New Amount= "<<tomatoam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==4)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<carrotam<<endl;
		carrotam=carrotam+j;
		cout<<"New Amount= "<<carrotam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==5)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<radam<<endl;
		radam=radam+j;
		cout<<"New Amount= "<<radam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==6)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<cucumberam<<endl;
		cucumberam=cucumberam+j;
		cout<<"New Amount= "<<cucumberam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==7)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<garlicam<<endl;
		garlicam=garlicam+j;
		cout<<"New Amount= "<<garlicam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==8)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<gingeram<<endl;
		gingeram=gingeram+j;
		cout<<"New Amount= "<<gingeram<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==9)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<onionam<<endl;
		onionam=onionam+j;
		cout<<"New Amount= "<<onionam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==10)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<cabbageam<<endl;
		cabbageam=cabbageam+j;
		cout<<"New Amount= "<<cabbageam<<endl;
		system("pause");
	}
	else
	{
		cout<<"Enter a Valid Option"<<endl;
		system("pause");
		addveg();
	}
	cout<<"Do you want to add more vegetables(y/n)??"<<endl;
	cin>>opt;
	if(opt=='y'&&opt!='n')
	{
		addveg();
	}
}


//User Defined Function For adding fruits to the shop
int addfruit()
{ 
	system("CLS");
	char opt;
	int x, j;
	cout<<"What do you want to add???\n\n1 Mangoes\t2 Oranges\t3 Apples\t4 Dates\t5 Grapes \n\n6 Peers\t\t7 Appricots\t8 Banana\t9 Gavas\t10 Water Mellons\n"<<endl;
	cin>>x;
	if (x==1)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<mangoam<<endl;
		mangoam=mangoam+j;
		cout<<"New Amount= "<<mangoam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if (x==2)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<orangeam<<endl;
		orangeam=orangeam+j;
		cout<<"New Amount= "<<orangeam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");	
	}
	else if (x==3)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<appleam<<endl;
		appleam=appleam+j;
		cout<<"New Amount= "<<appleam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==4)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<dateam<<endl;
		dateam=dateam+j;
		cout<<"New Amount= "<<dateam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==5)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<grapeam<<endl;
		grapeam=grapeam+j;
		cout<<"New Amount= "<<grapeam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==6)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<peeram<<endl;
		peeram=peeram+j;
		cout<<"New Amount= "<<peeram<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==7)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<appriam<<endl;
		appriam=appriam+j;
		cout<<"New Amount= "<<appriam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==8)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<banam<<endl;
		banam=banam+j;
		cout<<"New Amount= "<<banam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==9)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<gavaam<<endl;
		gavaam=gavaam+j;
		cout<<"New Amount= "<<gavaam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==10)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<watermellonam<<endl;
		watermellonam=watermellonam+j;
		cout<<"New Amount= "<<watermellonam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else
	{
		cout<<"Enter a Valid Option"<<endl;
		system("pause");
		addfruit();
	}
	cout<<"Do you want to add more fruit(y/n)??"<<endl;
	cin>>opt;
	if(opt=='y'&&opt!='n')
	{
		addfruit();
	}
}


//User Defined Function For adding chips to the shop
int addchips()
{ 
	system("CLS");
	char opt;
	int x, j;
	cout<<"1 Lays\t2 Kurkures\t3 Waves\t4 Salanty\t5 Krinkles\n\n6 Tortilla\t7 PotatoChips\t8 Tostotia\t9 Ruffles\t10 Pop Chips\n "<<endl;
	cin>>x;
	if (x==1)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<laysam<<endl;
		laysam=laysam+j;
		cout<<"New Amount= "<<laysam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if (x==3)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<wavesam<<endl;
		wavesam=wavesam+j;
		cout<<"New Amount= "<<wavesam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if (x==4)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<salam<<endl;
		salam=salam+j;
		cout<<"New Amount= "<<salam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==5)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<krinkleam<<endl;
		krinkleam=krinkleam+j;
		cout<<"New Amount= "<<krinkleam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==2)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<kuram<<endl;
		kuram=kuram+j;
		cout<<"New Amount= "<<kuram<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==6)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<tortillaam<<endl;
		tortillaam=tortillaam+j;
		cout<<"New Amount= "<<tortillaam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==7)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<potatochipam<<endl;
		potatochipam=potatochipam+j;
		cout<<"New Amount= "<<potatochipam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==8)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<tostotiaam<<endl;
		tostotiaam=tostotiaam+j;
		cout<<"New Amount= "<<tostotiaam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==9)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<ruffleam<<endl;
		ruffleam=ruffleam+j;
		cout<<"New Amount= "<<ruffleam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==10)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<popam<<endl;
		popam=popam+j;
		cout<<"New Amount= "<<popam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
		
	}
	else
	{
		cout<<"Enter a Valid Option"<<endl;
		system("pause");
		addchips();
	}
	cout<<"Do you want to add more chips(y/n) ???"<<endl;
	cin>>opt;
	if(opt=='y'&&opt!='n')
	{
		addchips();
	}
}

//User Defined Function For adding ice creams
int addicecream()
{ 
	system("CLS");
	char opt;
	int x, j;
	cout<<"What do you want to add ??"<<endl;
	cout<<"\n1 Tutti Fruity\t2 Vanila\t3 Chocolate\t4 Donet\t5 Cornetto\n\n6 Megnum\t7 Feast\t\t8 Khulfa\t9 Coconut\t10 Khoya Khajjur\n"<<endl;
	cin>>x;
	if (x==1)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<tuttiam<<endl;
		tuttiam=tuttiam+j;
		cout<<"New Amount= "<<tuttiam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if (x==2)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<vanilam<<endl;
		vanilam=vanilam+j;
		cout<<"New Amount= "<<vanilam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if (x==3)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<chocoam<<endl;
		chocoam=chocoam+j;
		cout<<"New Amount= "<<chocoam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==4)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<donetam<<endl;
		donetam=donetam+j;
		cout<<"New Amount= "<<donetam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==5)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<coram<<endl;
		coram=coram+j;
		cout<<"New Amount= "<<coram<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==6)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<megnumam<<endl;
		megnumam=megnumam+j;
		cout<<"New Amount= "<<megnumam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==7)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<feastam<<endl;
		feastam=feastam+j;
		cout<<"New Amount= "<<feastam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==8)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<kulfaam<<endl;
		kulfaam=kulfaam+j;
		cout<<"New Amount= "<<kulfaam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==9)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<cocoam<<endl;
		cocoam=cocoam+j;
		cout<<"New Amount= "<<cocoam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else if(x==10)
	{
		cout<<"How much do you want to add???";
		cin>>j;
		cout<<"\nOld Amount= "<<khoyaam<<endl;
		khoyaam=khoyaam+j;
		cout<<"New Amount= "<<khoyaam<<endl;
		cout<<"\nItem has successfully been added \n"<<endl;
		system("pause");
	}
	else
	{
		cout<<"Enter a Valid Option"<<endl;
		system("pause");
		addicecream();
	}
	cout<<"Do you want to add more Icecreams(y/n)??"<<endl;
	cin>>opt;
	if(opt=='y'&&opt!='n')
	{
		addicecream();
	}
}
//User Defined Function For addintg biscuits to the shop
int addbis()
{
	system("CLS");
	int x;
	cout<<"How many biscuit packs do you want to add??? "<<endl;
	cin>>x;
	cout<<"\nOld Amount= "<<bisam<<endl;
	bisam=bisam+x;
	cout<<"\nNew Amount= "<<bisam<<"\n\nItems Added Successfully...\n"<<endl;
	system("pause");
}

//User Defined Function For adding new items to the shop
int addnewitems()
{
	int x;
	system("CLS");
	cout<<"What do you Want to add???\n\t1 Fruits\n\t2 Vegetables\n\t3 Chips\n\t4 Icecreams\n\t5 Biscuits"<<endl;
	cin>>x;
	if(x==1)
	{
		addfruit();
	}
	else if(x==2)
	{
		addveg();
	}
	else if(x==3)
	{
		addchips();
	}
	else if(x==4)
	{
		addicecream();
	}
	else if(x==5)
	{
		addbis();
	}
	else
	{
		cout<<"Enter A Valid Option "<<endl;
		system("pause");
		addnewitems();
	}

}

int password()
{
	system("CLS");
	int pass;
	cout<<"Enter your pin "<<endl;
	cin>>pass;
	if (pass==crpass)
	{
		char opt;
		do
		{
		int j;
		system("CLS");
		cout<<"\n\n\t***************************Welcome Sir*************************** "<<endl;
		system("pause");
		cout<<"\n\nWhat do u want sir?\n\n\t\t\t\t1 Report of Sold Items \n\t\t\t\t2 Items Falling Down \n\t\t\t\t3 Add Saleman \n\t\t\t\t4 Fire a salesman"<<endl;
		cout<<"\t\t\t\t5 View the No of Salesman\n\t\t\t\t6 Add New Items \n\t\t\t\t7 Change Password\n\t\t\t\t8 Exit"<<endl;
		cin>>j;
		if(j==1)
		{
			SoldItems();
		}
		else if(j==2)
		{
			itmesfall();
		}
		else if(j==3)
		{
			system("CLS");
			addsalesman();
		}
		else if(j==4)
		{
			fire();
		}
		else if(j==5)
		{
			system("CLS");
			cout<<"The no of salesman working are: "<<noOfSalesman<<endl;
			system("pause");
		}
		else if(j==6)
		{
			addnewitems();
		}
		else if(j==7)
		{
			oldpass();
		}
		else if(j==8)
		{
			system("CLS");
			cout<<"Are You sure, You want to exit (y/n) "<<endl;
			cin>>opt;
		}
		else
		{
			system("CLS");
			cout<<"Enter a Valid Option "<<endl;
			system("pause");
		}
		system("CLS");
		system("pause");
	}while(opt!='y');
	}
	else
	{
		wrongpass();
	}
}

//User Defined Function For the owner to log in to access his account 
int owner()
{
	password();
}
//User Defined Function For reading the data from the file 
int filehandle()
{
	ifstream obj;
	obj.open("atisham.txt");
	obj>>crpass;
	obj>>noOfSalesman;
	obj>>Ttotal;
	obj>>mangoam;
	obj>>orangeam;
	obj>>appleam;
	obj>>dateam;
	obj>>grapeam;
	obj>>peeram;
	obj>>appriam;
	obj>>banam;
	obj>>gavaam;
	obj>>watermellonam;
	obj>>ladyam;
	obj>>potatoam;
	obj>>tomatoam;
	obj>>carrotam;
	obj>>radam;
	obj>>cucumberam;
	obj>>garlicam;
	obj>>gingeram;
	obj>>onionam;
	obj>>cabbageam;
	obj>>laysam;
	obj>>kuram;
	obj>>wavesam;
	obj>>salam;
	obj>>krinkleam;
	obj>>tortillaam;
	obj>>potatochipam;
	obj>>tostotiaam;
	obj>>ruffleam;
	obj>>popam;
	obj>>tuttiam;
	obj>>vanilam;
	obj>>chocoam;
	obj>>donetam;
	obj>>coram;
	obj>>megnumam;
	obj>>feastam;
	obj>>kulfaam;
	obj>>cocoam;
	obj>>khoyaam;
	obj>>bisam;
	obj>>count;
	obj.close();
}
//User Defined Function For saving data in the file 
int outfile()
{
	ofstream file;
	file.open("atisham.txt");
	file<<crpass<<"\n"<<noOfSalesman<<"\n"<<Ttotal<<"\n"<<mangoam<<"\n"<<orangeam<<"\n"<<appleam<<"\n"
	<<dateam<<"\n"<<grapeam<<"\n"<<peeram<<"\n"<<appriam<<"\n"<<banam<<"\n"<<gavaam<<"\n"<<watermellonam
	<<"\n"<<ladyam<<"\n"<<potatoam<<"\n"<<tomatoam<<"\n"<<carrotam<<"\n"<<radam<<"\n"<<
	cucumberam<<"\n"<<garlicam<<"\n"<<gingeram<<"\n"<<onionam<<"\n"<<cabbageam<<"\n"<<laysam<<"\n"<<
	kuram<<"\n"<<wavesam<<"\n"<<salam<<"\n"<<krinkleam<<"\n"<<tortillaam<<"\n"<<potatochipam<<"\n"<<
	tostotiaam<<"\n"<<ruffleam<<"\n"<<popam<<"\n"<<tuttiam<<"\n"<<vanilam<<"\n"<<chocoam<<"\n"<<donetam<<"\n"<<
	coram<<"\n"<<megnumam<<"\n"<<feastam<<"\n"<<kulfaam<<"\n"<<cocoam<<"\n"<<khoyaam<<"\n"<<bisam<<"\n"<<count<<endl;
	file.close();
}

//The Main Function where the control goes when we run the program
int main()
{	
	filehandle();
	
	cout<<"\n\n\t\t\tW E L C O M E\n\n\t\t\t    T O\n\n\t\t      P R O J E C T__9"<<endl;
	cout<<"\n\t\t\t    B Y\n\n\t\tM U H A M M A D A H T A S H A M\n\n\t\t     ( 2 0 2 0 2 7 0 )\n\n\n\n\n"<<endl;
	system("pause");
	char opt;
	do
	{
	system("CLS");
	int a;
	cout<<"\t\tYou are a:\n\n\t\t1 Customer \n\t\t2 Saleman \n\t\t3 Owner\n\t\t4 Exit"<<endl;
	cin>>a;
	if(a==1)
	{
	loop();
	customer();
	count++;
	Ttotal=Ttotal+total;
	}
	else if(a==2)
	{
		loop();
		salesman();		
	}
	else if(a==3)
	{
		loop();
		owner();
	}
	else if(a==4)
	{
		loop();
		cout<<"Are You sure, you want to quit (y/n)"<<endl;
		cin>>opt;
		
	}
	else
	{
		loop();
		cout<<"ENTER A VALID OPTION"<<endl;
		system("pause");
	}
	}
	while(opt!='y');
	outfile();
	return 0;
}
