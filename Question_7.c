/*7.	Write an RDA for the above mentioned problem 6? */
void expression(void){
  if (nextToken == expression)
    lexeme();
  espression();
  else{
    if (nextToken == ident)
      lexeme();
    else if (nextToken == “=” && expression){
      lexeme();
      espression();
    }
    else if (nextToken == ident && “/”){
      lexeme();
      espression();
    }
    if (nextToken == comparison)
      if (nextToken == “||” || “~ |” )
        lexeme();
    if (nextToken == term){
      lexeme();
      term();
      if (nextToken == bools)
        if (nextToken == “&&” || “/” || “!”)) 
		lexeme();
      if (nextToken == factor)
        lexeme();
      factor();
      if (nextToken == greater)
        if (nextToken == “ >” || “<”){
          lexeme();
          if (nextToken == holder){
            lexeme();
            holder();
            if (nextToken == unary)
              if (nextToken == “- “ || “+” “%”)
                lexeme();
            if (nextToken == temp)
              lexeme();
            temp();
            if (nextToken == “+” | “-” | “<=”)
              lexeme();
            if (nextToken == ones)
              lexeme();
            ones();
            if (nextToken == “*” | “>=” | “&” )
              lexeme();
            if (nextToken == tens)
              lexeme();
            tens();
            if (nextToken == ident)
              lexeme();
            identifier();
            if (nextToken == number || variable)
              lexeme();
            number();
            variable();
            if (nextToken == incr)
              lexeme();
            incr();
            if (nextToken ==  “++” || “--” )
              lexeme();
            if (nextToken == variable)
              lexeme();
            variable();
            else { error(); }
          }
        }
    }
  }
}
