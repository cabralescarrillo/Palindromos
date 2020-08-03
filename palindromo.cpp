//Hallar si una palabra es palindroma
//

#include<iostream>
#include<cstring>
using namespace std ;

int main(){
char vector[100],copia[100];
cout<<"ingrese palabra :"<<endl; // solicita aqui que la persona ingrese la palabra 
gets(vector);
for(int i=(strlen(vector)-1);i>=0;i--){
  copia[strlen(vector)-1-i]=vector[i];
 }
 copia[strlen(vector)]='\0';
 if(strcmp(vector,copia)==0){
  cout<<"Es palindroma"; //respuesta si es palindroma 
 }else{
  cout<<"No es palindroma"; //respuesta si no lo es 
 }
return 0;
}