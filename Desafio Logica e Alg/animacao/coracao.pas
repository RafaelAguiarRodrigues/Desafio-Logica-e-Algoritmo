Program coracaoanimado ;
const  X= 100;   
var Y,Z,K,H,W,P,COL,LIN:integer;  
PROCEDURE name;
begin
clrscr;  
P:=0;
for Z:= 1 to 9 do
  begin
    for Y:= 1 to 24 do
      begin
      
        if (z = 1) and (P = 0) then
         begin
           for W:= 1 to 24 do
		   begin
		     gotoxy(z,w);
		     K:=random(7);
               while k = 0 do 
	            begin   
	              K:=random(7);  
	            end;
	            
		     textcolor(k);
               write('SOU DE TI ');
               gotoxy(1,1); delay(20);
             end;
           P:=1;  
	    end;	     
           
      
        Gotoxy(Z*8+1,Y);
        K:=random(7);
        while k = 0 do 
	     begin   
	       K:=random(7);  
		end;
        Textcolor(K);
        Write('Bem Vindo ');
        gotoxy(1,1); delay(20);
      end;
  end; 

end;

 Begin
 name;
 
 for z:= 14 downto 9 do
 begin
 textcolor (z);
 
 if z = 9 then
   begin
     textcolor(lightred);
   end;
   
 if z = 12 then
   begin
     textcolor(white);
   end;  
 
 
 //Coração central
 gotoxy(40,5);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 gotoxy(39,4);
 write(#3);
 gotoxy(41,4); 
 write(#3); 
 Gotoxy(1,1);   delay (X); 
 
 gotoxy(38,3);
 write(#3);
 gotoxy(42,3);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 gotoxy(37,3);
 write(#3);
 gotoxy(43,3);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 gotoxy(36,3);
 write(#3);
 gotoxy(44,3);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 gotoxy(35,4);
 write(#3);
 gotoxy(45,4);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 gotoxy(34,5);
 write(#3);
 gotoxy(46,5);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 gotoxy(34,6);
 write(#3);
 gotoxy(46,6);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 gotoxy(34,7);
 write(#3);
 gotoxy(46,7);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 gotoxy(35,8);
 write(#3);
 gotoxy(45,8);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 gotoxy(36,9);
 write(#3);
 gotoxy(44,9);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 gotoxy(37,10);
 write(#3);
 gotoxy(43,10);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 gotoxy(38,11);
 write(#3);
 gotoxy(42,11);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 gotoxy(39,12);
 write(#3);
 gotoxy(41,12);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 gotoxy(40,13);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 
 
 
  //      TODOS
  
  
 //1a linha
 gotoxy(20,5);
 write(#3); 
 gotoxy(60,5);
 write(#3); 
 gotoxy(30,15);
 write(#3); 
 gotoxy(50,15);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 //2a linha
 
 gotoxy(19,4);
 write(#3);
 gotoxy(21,4); 
 write(#3); 
 gotoxy(59,4);
 write(#3);
 gotoxy(61,4); 
 write(#3); 
 gotoxy(49,14);
 write(#3);
 gotoxy(51,14); 
 write(#3);  
 gotoxy(29,14);
 write(#3);
 gotoxy(31,14); 
 write(#3); 
 Gotoxy(1,1);   delay (X); 
 
 
 //3a linha
 
 gotoxy(18,3);
 write(#3);
 gotoxy(22,3);
 write(#3); 
 gotoxy(58,3);
 write(#3);
 gotoxy(62,3);
 write(#3); 
 gotoxy(28,13);
 write(#3);
 gotoxy(32,13);
 write(#3); 
 gotoxy(48,13);
 write(#3);
 gotoxy(52,13);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 
 
 //4a linha 
 
 gotoxy(17,3);
 write(#3);
 gotoxy(23,3);
 write(#3); 
 gotoxy(57,3);
 write(#3);
 gotoxy(63,3);
 write(#3); 
 gotoxy(27,13);
 write(#3);
 gotoxy(33,13);
 write(#3); 
 gotoxy(47,13);
 write(#3);
 gotoxy(53,13);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 
 //5a linha
 
 gotoxy(16,3);
 write(#3);
 gotoxy(24,3);
 write(#3); 
 gotoxy(56,3);
 write(#3);
 gotoxy(64,3);
 write(#3); 
 gotoxy(26,13);
 write(#3);
 gotoxy(34,13);
 write(#3); 
 gotoxy(46,13);
 write(#3);
 gotoxy(54,13);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 
 
 
 
 //6a linha
 
 gotoxy(15,4);
 write(#3);
 gotoxy(25,4);
 write(#3); 
 gotoxy(55,4);
 write(#3);
 gotoxy(65,4);
 write(#3); 
 gotoxy(25,14);
 write(#3);
 gotoxy(35,14);
 write(#3); 
 gotoxy(45,14);
 write(#3);
 gotoxy(55,14);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 
 
 
 //7a linha
 gotoxy(14,5);
 write(#3);
 gotoxy(26,5);
 write(#3); 
 gotoxy(54,5);
 write(#3);
 gotoxy(66,5);
 write(#3); 
 gotoxy(24,15);
 write(#3);
 gotoxy(36,15);
 write(#3); 
 gotoxy(44,15);
 write(#3);
 gotoxy(56,15);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 
 
 
 //8a linha
 gotoxy(14,6);
 write(#3);
 gotoxy(26,6);
 write(#3); 
 gotoxy(54,6);
 write(#3);
 gotoxy(66,6);
 write(#3); 
 gotoxy(24,16);
 write(#3);
 gotoxy(36,16);
 write(#3); 
 gotoxy(44,16);
 write(#3);
 gotoxy(56,16);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 
 
 
 //9a linha 
 gotoxy(14,7);
 write(#3);
 gotoxy(26,7);
 write(#3); 
 gotoxy(54,7);
 write(#3);
 gotoxy(66,7);
 write(#3);
 gotoxy(24,17);
 write(#3);
 gotoxy(36,17);
 write(#3); 
 gotoxy(44,17);
 write(#3);
 gotoxy(56,17);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 
 
 //10a linha 
 gotoxy(15,8);
 write(#3);
 gotoxy(25,8);
 write(#3); 
 gotoxy(55,8);
 write(#3);
 gotoxy(65,8);
 write(#3); 
 gotoxy(25,18);
 write(#3);
 gotoxy(35,18);
 write(#3); 
 gotoxy(45,18);
 write(#3);
 gotoxy(55,18);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 
 
 
 //11a linha
 gotoxy(16,9);
 write(#3);
 gotoxy(24,9);
 write(#3); 
 gotoxy(56,9);
 write(#3);
 gotoxy(64,9);
 write(#3); 
 gotoxy(26,19);
 write(#3);
 gotoxy(34,19);
 write(#3); 
 gotoxy(46,19);
 write(#3);
 gotoxy(54,19);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 
 //12a linha 
 gotoxy(17,10);
 write(#3);
 gotoxy(23,10);
 write(#3); 
 gotoxy(57,10);
 write(#3);
 gotoxy(63,10);
 write(#3); 
 gotoxy(27,20);
 write(#3);
 gotoxy(33,20);
 write(#3); 
 gotoxy(47,20);
 write(#3);
 gotoxy(53,20);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 
 
 //13a linha 
 gotoxy(18,11);
 write(#3);
 gotoxy(22,11);
 write(#3); 
 gotoxy(58,11);
 write(#3);
 gotoxy(62,11);
 write(#3); 
 gotoxy(28,21);
 write(#3);
 gotoxy(32,21);
 write(#3); 
 gotoxy(48,21);
 write(#3);
 gotoxy(52,21);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 
 
 
 //14a linha
  
 gotoxy(19,12);
 write(#3);
 gotoxy(21,12);
 write(#3); 
 gotoxy(59,12);
 write(#3);
 gotoxy(61,12);
 write(#3); 
 gotoxy(29,22);
 write(#3);
 gotoxy(31,22);
 write(#3); 
 gotoxy(49,22);
 write(#3);
 gotoxy(51,22);
 write(#3); 
 Gotoxy(1,1);   delay (X);
 
 
 
 
 //15a linha
 
 gotoxy(20,13);
 write(#3); 
 gotoxy(60,13);
 write(#3); 
 gotoxy(30,23);
 write(#3); 
 gotoxy(50,23);
 write(#3); 
 Gotoxy(1,1);   delay (X);
  
   
 end;
 
 
 col:= 40;  //posicao do fim do coraçao principal
 lin:= 13;  //posicao do fim do coraçao principal
 
 //coraçao central
 gotoxy(col-1,lin-1);                            
 write(#3,#3,#3);
 Gotoxy(1,1);   delay (X);
 gotoxy(col-2,lin-2);                             
 write(#3,#3,#3,#3);
 Gotoxy(1,1);   delay (X);
 gotoxy(col-3,lin-3);                             
 write(#3,#3,#3,#3,#3,#3);
 Gotoxy(1,1);   delay (X);
 gotoxy(col-4,lin-4);                             
 write(#3,#3,#3,#3,#3,#3,#3,#3);
 Gotoxy(1,1);   delay (X);
 gotoxy(col-5,lin-5);                             
 write(#3,#3,#3,#3,#3,#3,#3,#3,#3,#3);
 Gotoxy(1,1);   delay (X);
 gotoxy(col-6,lin-6);                             
 write(#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3);
 Gotoxy(1,1);   delay (X);
 gotoxy(col-6,lin-7);                            
 write(#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3);
 Gotoxy(1,1);   delay (X);
 gotoxy(col-6,lin-8);                              
 write(#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3);
 Gotoxy(1,1);   delay (X);
 gotoxy(col-5,lin-9);                            
 write(#3,#3,#3,#3);
 Gotoxy(col+1,lin-9);                             
 write(#3,#3,#3,#3); 
 Gotoxy(1,1);   delay (X);
 
 
 
 // OUTROS 
 gotoxy(col-1-20,lin-1);                    
 write(#3,#3,#3);
gotoxy(col-1+20,lin-1);                    
 write(#3,#3,#3);
  gotoxy(col-1-10,lin-1+10);               
 write(#3,#3,#3);
  gotoxy(col-1+10,lin-1+10);                  
 write(#3,#3,#3);
 Gotoxy(1,1);   delay (X);
 
 
 gotoxy(col-2-20,lin-2);                    
 write(#3,#3,#3,#3);
  gotoxy(col-2+20,lin-2);                   
 write(#3,#3,#3,#3);
  gotoxy(col-2-10,lin-2+10);                  
 write(#3,#3,#3,#3);
  gotoxy(col-2+10,lin-2+10);                  
 write(#3,#3,#3,#3);
 Gotoxy(1,1);   delay (X);
 
 
 gotoxy(col-3-20,lin-3);                     
 write(#3,#3,#3,#3,#3,#3);
  gotoxy(col-3+20,lin-3);                      
 write(#3,#3,#3,#3,#3,#3);
  gotoxy(col-3-10,lin-3+10);                    
 write(#3,#3,#3,#3,#3,#3);
  gotoxy(col-3+10,lin-3+10);                  
 write(#3,#3,#3,#3,#3,#3);
 Gotoxy(1,1);   delay (X);
 
 
 gotoxy(col-4-20,lin-4);                      
 write(#3,#3,#3,#3,#3,#3,#3,#3);
  gotoxy(col-4+20,lin-4);                     
 write(#3,#3,#3,#3,#3,#3,#3,#3);
  gotoxy(col-4-10,lin-4+10);                    
 write(#3,#3,#3,#3,#3,#3,#3,#3);
  gotoxy(col-4+10,lin-4+10);                   
 write(#3,#3,#3,#3,#3,#3,#3,#3);
 Gotoxy(1,1);   delay (X);
 
 
 gotoxy(col-5-20,lin-5);                      
 write(#3,#3,#3,#3,#3,#3,#3,#3,#3,#3);
  gotoxy(col-5+20,lin-5);                        
 write(#3,#3,#3,#3,#3,#3,#3,#3,#3,#3);
  gotoxy(col-5-10,lin-5+10);                     
 write(#3,#3,#3,#3,#3,#3,#3,#3,#3,#3);
  gotoxy(col-5+10,lin-5+10);                    
 write(#3,#3,#3,#3,#3,#3,#3,#3,#3,#3);
 Gotoxy(1,1);   delay (X);
 
 
 gotoxy(col-6-20,lin-6);                      
 write(#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3);
  gotoxy(col-6+20,lin-6);                        
 write(#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3);
  gotoxy(col-6-10,lin-6+10);                     
 write(#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3);
  gotoxy(col-6+10,lin-6+10);                    
 write(#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3);
 Gotoxy(1,1);   delay (X);
 
 
 gotoxy(col-6-20,lin-7);                        
 write(#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3);
  gotoxy(col-6+20,lin-7);                        
 write(#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3);
  gotoxy(col-6-10,lin-7+10);                      
 write(#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3);
  gotoxy(col-6+10,lin-7+10);                 
 write(#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3);
 Gotoxy(1,1);   delay (X);
 
 
 gotoxy(col-6-20,lin-8);                        
 write(#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3);
  gotoxy(col-6+20,lin-8);                        
 write(#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3);
  gotoxy(col-6-10,lin-8+10);                     
 write(#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3);
  gotoxy(col-6+10,lin-8+10);                    
 write(#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3,#3);
 Gotoxy(1,1);   delay (X);
 
 
 gotoxy(col-5-20,lin-9);                       
 write(#3,#3,#3,#3);
 gotoxy(col-5+20,lin-9);                      
 write(#3,#3,#3,#3);
 Gotoxy(col+1+20,lin-9);                      
 write(#3,#3,#3,#3); 
 gotoxy(col-5-10,lin-9+10);                      
 write(#3,#3,#3,#3);
 Gotoxy(col+1-10,lin-9+10);                     
 write(#3,#3,#3,#3);
 gotoxy(col-5+10,lin-9+10);                    
 write(#3,#3,#3,#3);
 Gotoxy(col+1+10,lin-9+10);                    
 write(#3,#3,#3,#3); 
 Gotoxy(col+1-20,lin-9);                        
 write(#3,#3,#3,#3); 
 Gotoxy(1,1);   delay (X);
 
 
 
 
 


  textcolor(lightred);
  gotoxy(36,7); write(#3,#3,#3,#3,#3,#3,#3,#3,#3); gotoxy(1,1);  delay(500);

  Repeat
  
  for Y:= 10 to 14 do
  begin
  textcolor(Y);
  gotoxy(36,7); write('PROGRAMAR É BOM');  
  gotoxy(16,7); write('PROGRAMAR É BOM'); 
  gotoxy(56,7); write('PROGRAMAR É BOM'); 
  gotoxy(26,17); write('PROGRAMAR É BOM');  
  gotoxy(46,17); write('PROGRAMAR É BOM'); gotoxy(1,1);  delay(500); 
  
    textcolor(Y);
  gotoxy(36,7); write(' FUTURO ');  
  gotoxy(16,7); write(' FUTURO '); 
  gotoxy(56,7); write(' FUTURO '); 
  gotoxy(26,17); write(' FUTURO ');  
  gotoxy(46,17); write(' FUTURO '); gotoxy(1,1);  delay(500);
  end; 
  
  Until Keypressed;

 End.
