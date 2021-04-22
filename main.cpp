#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int selection{};
    cout<<"--------------------Welcome to India Currency convertor----------";
            cout<<"\t\t\t\t\t\t\t::Menu::"<<endl;
            cout<<"\n\t\t\t\t\t\t\t1.US Dollars to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t2.Australian Dollars to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t3.Bangladesh Taka to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t4.Bermuda Dollar to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t5.Bhutan currency to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t6.Brazilian real to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t7.Canadian Dollar to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t8.Chinese Yuan to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t9.Egyptian Pound to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t10.Euro to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t11.Hong kong Dollar to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t12.Indonesian Rupiah to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t13.Iranian real to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t14.Iraqi Dinar to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t15.Israeli New Shekel to Indian Rupees "<<endl;
            cout<<"\t\t\t\t\t\t\t16.Jamaican Dollar to Indian Rupees "<<endl;
            cout<<"\t\t\t\t\t\t\t17.Japanese yen to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t18.Kenyan Shilling to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t19.liberian Dollar to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t20.Malaysian Ringgit to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t21.Mexican Peso to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t22.Myanmar kyat to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t23.Nepalese Rupee to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t24.Netherlands Antillean Guilder to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t25.New Zealand Dollar to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t26.Pakistani Rupee to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t27.Qatari Real to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t28.Saudi Riyal to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t29.Serbian Dinar to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t30.Singapore Dollar to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t31.South-African Rand to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t32.South-Korean Won to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t33.Sri-lankan Rupee to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t34.Tanzanian Shilling to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t35.Turkish Lira to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t36.United Arab Emirates Dirham to Indian Rupees"<<endl;
            cout<<"\t\t\t\t\t\t\t37.Uruguayan Peso to Indian Rupees"<<endl;


            cout<<"\nPlease select from the following menu given:"<<endl;
            cin>>selection;

            if(selection == 1){
                const double USD_per_INDIAN_RUPEE{74.23};
                double US_DOLLARS{};
                double total{};
                cout<<"\nEnter the value in US DOLLARS to convert them into INDIAN RUPEES:";
                cin>>US_DOLLARS;
                total = USD_per_INDIAN_RUPEE * US_DOLLARS;
                //cout<<fixed<<setprecision(2);
                cout<<"The "<<US_DOLLARS<<" "<<" Dollars in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 2){
                const double Australia_dollar_per_Indian_Rupee{54.15};
                double Aus_Dollar{};
                double total{};
                cout<<"\nEnter the value in Australian Dollar to convert them into Indian Rupees:";
                cin>>Aus_Dollar;
                total =Australia_dollar_per_Indian_Rupee * Aus_Dollar;
               // cout<<fixed<<setprecision(2);
                cout<<"The "<<Aus_Dollar<<" "<<" Dollars in Indian Rupees is "<<total<<" Rupees"<<endl;
            }else if(selection == 3){
                const double Bangladesh_taka_to_Indian_Rupee{0.87};
                double Ban_taka{};
                double total{};
                cout<<"\nEnter the value in Bangladesh Taka to convert them into Indian Rupees: ";
                cin>>Ban_taka;
                total = Bangladesh_taka_to_Indian_Rupee * Ban_taka;
                //cout<<fixed<<setprecision(2);
                cout<<"The "<<Ban_taka<<" "<<" Taka in Indian rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 4){
                const double Bermuda_Dollar_to_Indian_Rupee{74.23};
                double Ber_dollar{};
                double total{};
                cout<<"\nEnter the value in Bermuda Dollar to convert them into Indian Rupees: ";
                cin>>Ber_dollar;
                total =  Bermuda_Dollar_to_Indian_Rupee * Ber_dollar;
               // cout<<fixed<<setprecision(2);
                cout<<"The "<< Ber_dollar<<" "<<" Dollar in Indian Rupees is "<<total<<" Rupees"<<endl;


            }else if(selection == 5){
                const double Bhutan_currency_to_Indian_Rupee{1.00};
                double Bhutan_currency{};
                double total{};
                cout<<"\nEnter the value in Bhutan currency to convert them into Indian Rupees: ";
                cin>>Bhutan_currency;
                total = Bhutan_currency_to_Indian_Rupee * Bhutan_currency;
                 //cout<<fixed<<setprecision(2);
                 cout<<"The "<<Bhutan_currency<<" "<<" currency in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 6){
                const double Brazilian_real_to_Indian_Rupee{13.84};
                double Brazil_real{};
                double total{};
                cout<<"\nEnter the value in Brazilian Real to convert them into Indian Rupees: ";
                cin>>Brazil_real;
                total = Brazilian_real_to_Indian_Rupee *  Brazil_real;
                //cout<<fixed<<setprecision(2);
                cout<<"The "<<Brazil_real<<" "<<" Real in Indian Rupees is "<<total<<" Rupees"<<endl;
            }else if(selection == 7){
                const double Canadian_Dollar_to_Indian_Rupee{56.74};
                double Can_Dollar{};
                double total{};
                cout<<"\nEnter the value in Canadian Dollar to convert them into Indian Rupees:";
                cin>>Can_Dollar;
                total = Canadian_Dollar_to_Indian_Rupee * Can_Dollar;
                //cout<<fixed<<setprecision(2);
                cout<<"The "<<Can_Dollar<<" "<<" Dollar in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 8){
                const double Chinese_yuan_to_Indian_Rupee{11.29};
                double chinese_yuan{};
                double total{};
                cout<<"\nEnter the value in Chinese Yuan to convert them into Indian Rupees:";
                cin>>chinese_yuan;
                total = Chinese_yuan_to_Indian_Rupee * chinese_yuan;
                //cout<<fixed<<setprecision(2);
                cout<<"The "<<chinese_yuan<<" "<<" yuan in Indian Rupees is "<<total<<" Rupees"<<endl;


            }else if(selection == 9){
                const double Egypt_Pound_to_Indian_Rupee{4.75};
                double Egypt_Pound{};
                double total{};
                cout<<"\nEnter the value in Egyptian Pound to convert them into Indian Rupees:";
                cin>>Egypt_Pound;
                total = Egypt_Pound_to_Indian_Rupee *Egypt_Pound;
                //cout<<fixed<<setprecision(2);
                cout<<"The "<<Egypt_Pound<<" "<<" Pound in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 10){
                const double Euro_to_Indian_Rupee{87.99};
                double Euro{};
                double total{};
                cout<<"\nEnter the value in Euros to convert them into Indian Rupees:";
                cin>>Euro;
                total = Euro_to_Indian_Rupee * Euro;
                //cout<<fixed<<setprecision(2);
                cout<<"The "<<Euro<<" "<<" Euro in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 11){
                const double Hong_kong_dollar_to_Indian_Rupee{9.58};
                double Hong_kong_Dollar{};
                double total{};
                cout<<"\nEnter the value in Hong kong Dollars to convert them into Indian Rupees:";
                cin>>Hong_kong_Dollar;
                total = Hong_kong_dollar_to_Indian_Rupee *  Hong_kong_Dollar;
                //cout<<fixed<<setprecision(2);
                cout<<"The "<< Hong_kong_Dollar<<" "<<" Dollar in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 12){
                const double Indonesia_Rupiah_to_Indian_Rupee{0.0053};
                double Indonesia_Rupiah{};
                double total{};
                cout<<"\nEnter the value in Indonesia Rupiah to convert them into Indian Rupees:";
                cin>>Indonesia_Rupiah;
                total = Indonesia_Rupiah_to_Indian_Rupee * Indonesia_Rupiah;
                //cout<<fixed<<setprecision(2);
                cout<<"The "<<Indonesia_Rupiah<<" "<<" Rupiah in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 13){
                const double Iranian_real_to_Indian_Rupee{0.0018};
                double Iranian_Real{};
                double total{};
                cout<<"\nEnter the value in Iranian Real to convert them into Indian Rupees:";
                cin>>Iranian_Real;
                total = Iranian_real_to_Indian_Rupee * Iranian_Real;
                //cout<<fixed<<setprecision(2);
                cout<<"The "<<Iranian_Real<<" "<<" Real in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 14){
                const double Iraqi_Dinar_to_Indian_rupee{0.062};
                double Iraqi_Dinar{};
                double total{};
                cout<<"\nEnter the value in Iraqi Dinar to convert them into Indian Rupees:";
                cin>>Iraqi_Dinar;
                total = Iraqi_Dinar_to_Indian_rupee * Iraqi_Dinar;
                cout<<"The "<<Iraqi_Dinar<<" "<<" Dinar in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 15){
                const double Israel_New_shekel_to_Indian_Rupee{22.04};
                double Israel_New_shekel{};
                double total{};
                cout<<"\nEnter the value in Israel Shekel to convert them into Indian Rupees:";
                cin>>Israel_New_shekel;
                total = Israel_New_shekel_to_Indian_Rupee * Israel_New_shekel;
                cout<<"The "<<Israel_New_shekel<<" "<<" shekel in Indian Rupees is "<<total<<" Rupees"<<endl;
            }else if(selection == 16){
                const double Jamaican_Dollar_to_Indian_Rupee{0.51};
                double Jamaican_Dollar{};
                double total{};
                cout<<"\nEnter the value in Jamaican Dollar to convert them into Indian Rupees:";
                cin>>Jamaican_Dollar;
                total = Jamaican_Dollar_to_Indian_Rupee * Jamaican_Dollar;
                cout<<"The "<<Jamaican_Dollar<<" "<<" Dollar in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 17){
                const double Japanese_yen_to_Indian_Rupee{0.72};
                double Japanese_yen{};
                double total{};
                cout<<"\nEnter the value in japanese Yen to convert them into Indian Rupees:";
                cin>>Japanese_yen;
                total = Japanese_yen_to_Indian_Rupee * Japanese_yen;
                cout<<"The "<<Japanese_yen<<" "<<" yen in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 18){
                const double Kenyan_Shilling_to_Indian_Rupee{0.68};
                double Kenyan_Shilling{};
                double total{};
                cout<<"\nEnter the value in Kenyan Shilling to convert them into Indian Rupees:";
                cin>>Kenyan_Shilling;
                total = Kenyan_Shilling_to_Indian_Rupee * Kenyan_Shilling;
                cout<<"The "<<Kenyan_Shilling<<" "<<" Shilling in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 19){
                const double Liberian_Dollar_to_Indian_Rupee{0.48};
                double Liberian_Dollar{};
                double total{};
                cout<<"\nEnter the value in Liberian Dollar to convert them into Indian Rupees:";
                cin>>Liberian_Dollar;
                total = Liberian_Dollar_to_Indian_Rupee * Liberian_Dollar;
                cout<<"The "<<Liberian_Dollar<<" "<<" Dollar in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 20){
                const double Malaysian_Ringgit_to_Indian_Rupee{18.14};
                double Malaysian_Ringgit{};
                double total{};
                cout<<"\nEnter the value in Malaysian Ringgit to convert them into Indian Rupees:";
                cin>>Malaysian_Ringgit;
                total = Malaysian_Ringgit_to_Indian_Rupee * Malaysian_Ringgit;
                cout<<"The "<<Malaysian_Ringgit<<" "<<" Ringgit in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 21){
                const double Mexican_peso_to_Indian_Rupee{3.65};
                double Mexican_peso{};
                double total{};
                cout<<"\nEnter the value in Mexican Peso to convert them into Indian Rupees:";
                cin>>Mexican_peso;
                total = Mexican_peso_to_Indian_Rupee * Mexican_peso;
                cout<<"The "<<Mexican_peso<<" "<<" peso in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 22){
                const double Myanmar_kyat_to_Indian_Rupee{0.057};
                double Myanmar_kyat{};
                double total{};
                cout<<"\nEnter the value in Myanmar_kyat to convert them into Indian Rupees:";
                cin>>Myanmar_kyat;
                total = Myanmar_kyat_to_Indian_Rupee * Myanmar_kyat;
                cout<<"The "<< Myanmar_kyat<<" "<<" Kyat in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 23){
                const double Nepalese_Rupee_to_Indian_Rupee{0.62};
                double Nepalese_Rupee{};
                double total{};
                cout<<"\nEnter the value in Nepalese Rupee to convert them into Indian Rupees:";
                cin>>Nepalese_Rupee;
                total = Nepalese_Rupee_to_Indian_Rupee * Nepalese_Rupee;
                cout<<"The "<<Nepalese_Rupee<<" "<<" Rupee in India Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 24){
                const double Netherlands_Antillean_Guilder_to_Indian_Rupee{41.29};
                double Netherlands_Antillean_Guilder{};
                double total{};
                cout<<"\nEnter the value in Netherlands Antillean Guilder to convert them into Indian Rupees:";
                cin>>Netherlands_Antillean_Guilder;
                total = Netherlands_Antillean_Guilder_to_Indian_Rupee * Netherlands_Antillean_Guilder;
                cout<<"The "<<Netherlands_Antillean_Guilder<<" "<<" Antillean Guilder in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 25){
                const double New_Zealand_Dollar_to_Indian_Rupee{51.31};
                double New_Zealand_Dollar{};
                double total{};
                cout<<"\nEnter the value in New Zealand Dollar to convert them into Indian Rupees:";
                cin>>New_Zealand_Dollar;
                total = New_Zealand_Dollar_to_Indian_Rupee * New_Zealand_Dollar;
                cout<<"The "<<New_Zealand_Dollar<<" "<< " Dollar in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 26){
                const double Pakistan_rupee_to_Indian_Rupee{0.47};
                double Pakistan_Rupee{};
                double total{};
                cout<<"\nEnter the value in Pakistani Rupee to convert them into Indian Rupees:";
                cin>>Pakistan_Rupee;
                total = Pakistan_rupee_to_Indian_Rupee * Pakistan_Rupee;
                cout<<"The "<<Pakistan_Rupee<<" "<<" Rupee in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 27){
                const double Qatari_Rial_to_Indian_rupee{20.39};
                double Qatari_Rial{};
                double total{};
                cout<<"\nEnter the value in Qatari Rial to convert them into Indian Rupees:";
                cin>>Qatari_Rial;
                total = Qatari_Rial_to_Indian_rupee * Qatari_Rial;
                cout<<"The "<< Qatari_Rial << " "<<" Rial in Indian rupees is "<<total<<" Rupees"<<endl;
            }else if(selection == 28){
                const double Saudi_Riyal_to_Indian_rupee{19.80};
                double Saudi_Riyal{};
                double total{};
                cout<<"\nEnter the value in Saudi Riyal to convert them into Indian Rupees:";
                cin>>Saudi_Riyal;
                total = Saudi_Riyal_to_Indian_rupee * Saudi_Riyal;
                cout<<"The "<<Saudi_Riyal<<" "<<" Riyal in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 29){
                const double Serbian_Dinar_to_Indian_Rupees{0.75};
                double Serbian_Dinar{};
                double total{};
                cout<<"\nEnter he value in Serbian Dinar to convert them into Indian Rupees:";
                cin>>Serbian_Dinar;
                total = Serbian_Dinar_to_Indian_Rupees * Serbian_Dinar;
                cout<<"The "<<Serbian_Dinar<<" "<<" Riyal in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 30){
                const double Singapore_Dollar_to_Indian_Rupees{55.26};
                double Singapore_Dollar{};
                double total{};
                cout<<"\nEnter the value in Singapore Dollar to convert them into Indian Rupees:";
                cin>>Singapore_Dollar;
                total = Singapore_Dollar_to_Indian_Rupees * Singapore_Dollar;
                cout<<"The "<< Singapore_Dollar<<" "<<" Dollar in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 31){
                const double South_Africa_Rand_to_Indian_Rupees{4.79};
                double South_Africa_Rand{};
                double total{};
                cout<<"\nEnter the value in South African Rand to convert  them into Indian Rupees:";
                cin>>South_Africa_Rand;
                total = South_Africa_Rand_to_Indian_Rupees * South_Africa_Rand;
                cout<<"The "<<South_Africa_Rand<<" "<<" Rand in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 32){
                const double South_korean_won_to_Indian_Rupees{0.067};
                double South_korean_won{};
                double total{};
                cout<<"\nEnter the value in South-korean Won to convert them into Indian Rupees:";
                cin>>South_korean_won;
                total = South_korean_won_to_Indian_Rupees * South_korean_won;
                cout<<"The "<<South_korean_won<<" "<<" Won in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 33){
                const double Sri_lanka_Rupee_to_Indian_Rupees{0.40};
                double Sri_lanka_Rupee{};
                double total{};
                cout<<"\nEnter the value in Sri-lankan Rupee to convert them into Indian Rupees:";
                cin>>Sri_lanka_Rupee;
                total = Sri_lanka_Rupee_to_Indian_Rupees * Sri_lanka_Rupee;
                cout<<"The "<<Sri_lanka_Rupee<<" "<<" Rupee in Indian Rupees is "<<total<<" Rupees"<<endl;

            }else if(selection == 34){
                const double Tanzanian_Shilling_to_Indian_Rupees{0.032};
                double Tanzanian_Shilling{};
                double total{};
                cout<<"\nEnter the value in Tanzanian-Shilling to convert them into Indian Rupees:";
                cin>>Tanzanian_Shilling;
                total = Tanzanian_Shilling_to_Indian_Rupees * Tanzanian_Shilling;
                cout<<"The "<<Tanzanian_Shilling<<" "<<" Shilling in Indian Rupees is "<<total<<" Rupees"<<endl;
            }else if(selection == 35){
                const double Turkish_Lira_to_Indian_Rupees{0.10};
                double Turkish_Lira{};
                double total{};
                cout<<"\nEnter the value in Turkish lira to convert them into Indian Rupees:";
                cin>>Turkish_Lira;
                total = Turkish_Lira_to_Indian_Rupees * Turkish_Lira;
                cout<<"The "<<Turkish_Lira<<" "<<" Lira in Indian Rupees is "<<total<<" Rupees"<<endl;
            }else if(selection == 36){
                const double United_Arab_Emirates_Dirham_to_Indian_Rupees{0.049};
                double United_Arab_Emirates_Dirham{};
                double total{};
                cout<<"\nEnter the value in United Arab Emirates Dirham to convert them into Indian Rupees:";
                cin>>United_Arab_Emirates_Dirham;
                total = United_Arab_Emirates_Dirham_to_Indian_Rupees * United_Arab_Emirates_Dirham;
                cout<<"The "<<United_Arab_Emirates_Dirham<<" "<<" Dirham in Indian Rupees is "<<total<<" Rupees"<<endl;
            }else if(selection == 37){
                const double Uruguayan_Peso_to_Indian_Rupees{0.58};
                double Uruguayan_Peso{};
                double total{};
                cout<<"\nEnter the value in Uruguayan Peso to convert them into Indian Rupees:";
                cin>>Uruguayan_Peso;
                total = Uruguayan_Peso_to_Indian_Rupees * Uruguayan_Peso;
                cout<<"The "<<Uruguayan_Peso<<" "<<" Peso in Indian Rupees is "<<total<<" Rupees"<<endl;
            }
}
