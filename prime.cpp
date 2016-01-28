#include<iostream>

int main(){
  for(int i =3; i<10000; i++){
    bool t=true;
    for(int j=3; j<i; j++){
      if(i%j==0){
	std::cout<< i<< " is not prime\n";
	t=false;
	break;
      }
    }
    if(t){
      std::cout<< i << " is prime\n";
    }
  }
  return 0;
}
