/*
 * Complete the function below.
 */


int hex_alphabets_to_numbers(char &c){
    int i = 0;
    char temp;
    if(c >= '0' && c <= '9') {

            i =  (c - '0');

    }
    else if(c >= 'a' && c <= 'f'){

            i =  (c - 'W');

    }
    else {

            i = (c - '7');

    }
    return i;
}
int css_string_to_color(const string &color_string) {
     int retVal, Comp[6], red, green, blue;
     string temp_color_string = color_string;

         if(color_string.at(0) != '#'){
             //std::cerr<<"Error";
             //exit(0);
            //throw std::invalid_argument("Received invalid format of string as input");

        }

        for(int i = 1; i < color_string.length(); i++){
                if (!((color_string.at(i) >= '0' && color_string.at(i) <= '9') || (color_string.at(i) >= 'a' && color_string.at(i) <= 'f') || (color_string.at(i) >= 'A' && color_string.at(i) <= 'F'))){                               //std::cerr<<"Error";
                        //exit(0);
                      //throw std::invalid_argument("Received invalid format of string as input");
                }
            }

            if(color_string.length() == 4){
                Comp[0] = hex_alphabets_to_numbers(temp_color_string.at(1));
                Comp[1] = hex_alphabets_to_numbers(temp_color_string.at(1));
                    red = Comp[1]*(pow(16, 0)) + Comp[0]*(pow(16, 1));
                Comp[2] = hex_alphabets_to_numbers(temp_color_string.at(2));
                Comp[3] = hex_alphabets_to_numbers(temp_color_string.at(2));
                    green = Comp[3]*(pow(16, 0)) + Comp[2]*(pow(16, 1));
                Comp[4] = hex_alphabets_to_numbers(temp_color_string.at(3));
                Comp[5] = hex_alphabets_to_numbers(temp_color_string.at(3));
                    blue = Comp[5]*(pow(16, 0)) + Comp[4]*(pow(16, 1));

            }
             if(color_string.length() == 7){
                Comp[0] = hex_alphabets_to_numbers(temp_color_string.at(1));
                Comp[1] = hex_alphabets_to_numbers(temp_color_string.at(2));
                 red = Comp[1]*(pow(16, 0)) + Comp[0]*(pow(16, 1));
                Comp[2] = hex_alphabets_to_numbers(temp_color_string.at(3));
                Comp[3] = hex_alphabets_to_numbers(temp_color_string.at(4));
                 green = Comp[3]*(pow(16, 0)) + Comp[2]*(pow(16, 1));
                Comp[4] = hex_alphabets_to_numbers(temp_color_string.at(5));
                Comp[5] = hex_alphabets_to_numbers(temp_color_string.at(6));
                 blue = Comp[5]*(pow(16, 0)) + Comp[4]*(pow(16, 1));
            }
            retVal = blue*65536 + green*256 + red;

//}
    return retVal;
}
