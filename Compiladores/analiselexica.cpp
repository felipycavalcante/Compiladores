#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(int argc, char **argv){
	
	string line, aux, lin, xi;
	
	vector<string> c;
	vector<string> d;
				
	ifstream arqv("codigo.txt");
	
	if (arqv.is_open()){
		
		while(! arqv.eof() ){
			
			getline(arqv, line);
			
			for(int i = 0; i < line.length(); i++){
				
				//cout << line[i];
				// espaço				
				if(line[i] == ' '){ 
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				// operadores
				if(line[i] == ';'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == '"'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}	
				
				if(line[i] == '('){ 
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				
				if(line[i] == ')'){ 
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				
				if(line[i] == '<'){ 
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == '>'){ 
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == '#'){ 
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == '%'){ 
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				
				if(line[i] == '!'){ 
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				
				if(line[i] == '$'){ 
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
					
				if(line[i] == '+'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}	
				
				if(line[i] == '-'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}	
				
				if(line[i] == '%'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}	
				
				if(line[i] == '&'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}	
				
				if(line[i] == '.'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}	
				
				if(line[i] == '/'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}	
				
				if(line[i] == ':'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}	
				
				if(line[i] == '='){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}	
				
				if(line[i] == '?'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				
						// numeros
						if(line[i] == '0'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == '1'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == '2'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == '3'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == '4'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == '5'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == '6'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == '7'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == '8'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == '9'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				
						// palavras reservadas
				
				if(line[i] == 'alignas'){ 
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'alignof'){ 
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'and'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'and_eq'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'asm'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'auto'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'bitand'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'bitor'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'bool'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'break'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'case'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'catch'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'char'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'char_16t'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'char_32t'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'class'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'compl'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'const'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'constexpr'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'const_cast'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'continue'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'decltype'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'default'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'delete'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'do'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'double'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'dynamic_cast'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'else'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'enum'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'explicit'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'export'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'extern'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'false'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'float'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'for'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'friend'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'goto'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'if'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'inline'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'int'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'long'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'mutable'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'namespace'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'new'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'noexcept'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'not'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'not_eq'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'nullptr'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'operator'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'or'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'or_eq'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'private'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'protected'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'public'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'register'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'reinterpret_cast'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'return'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'short'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'signed'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'sizeof'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'static'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'static_assert'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'static_cast'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'struct'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'switch'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'template'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'this'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'thread_local'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'throw'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'true'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'try'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'typedef'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'typeid'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'typename'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'union'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'unsigned'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'using'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'virtual'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'void'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'volatile'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'wchar_t'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'while'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'xor'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}
				}
				if(line[i] == 'xor_eq'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}					
				}
				//comentario
				if(line[i] == '//'){
					
					if(aux.size() == 0){
						aux.erase();
					}
								
					else if(aux.size() != 0){
						c.push_back(aux); 
						aux.erase();
					}					
				}
							
				else{ 
					if(line[i] != ';'){ 
						aux.push_back(line.at(i));
					}
				}
				
			}
					
			
			for(int i = 0; i < c.size(); i++){
				cout << c[i] << endl;
			}
		}
		arqv.close();
	}
	
	else cout << "Impossivel abrir arquivo";
	
	return 0;
}
