`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:44:37 05/31/2021 
// Design Name: 
// Module Name:    main 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////



module main(cardnumber,pin,clk,start,transaction,amount);

	input[31:0] cardnumber;
	input[19:0] pin;
	input start;
	input clk;
	input[31:0] amount; 
	input[2:0] transaction;
	reg[31:0] cardset[0:4]; //={32'd11112222,32'd22221111,32'd33332222,32'd44442222,32'd00222233}
	reg[19:0] pinset[0:4] ;
	reg[2:0] current_state=0;
	reg[2:0] next_state=0;
	integer i,k,count=0;
	integer balance=0;
	
	parameter s0 = 3'b000, s1 = 3'b001, s2 = 3'b010, s3 = 3'b011, s4 = 3'b100,s5 = 3'b101,s6 = 3'b110,s7 = 3'b111;
	
	
	initial begin
	
	cardset[0]=32'd11112222;
	cardset[1]=32'd22221111;
	cardset[2]=32'd33332222;
	cardset[3]=32'd44442222;
	cardset[4]=32'd00222233;
	
	pinset[0]=20'd5432;
	pinset[1]=20'd7654;
	pinset[2]=20'd3210;
	pinset[3]=20'd9999;
	pinset[4]=20'd5544;
		
	end
		
	
		
	always @(*)
	begin
		//$display("hi=%d",current_state,s0);
		case(current_state)
			
			s0:  begin
						
						if(start==1'b1)
							next_state=s1;
						else
							next_state=s0;
						
				  end
			s1:  begin
						$display("hi=%d",cardnumber);
						if(cardnumber) begin	
							
						for(i=0;i<5;i=i+1) begin
							if(cardset[i]==cardnumber) begin
									$display("for loop changed.");
									next_state<=s2;
									k=i;
							end
							$display("****changed.");
						end
						end
						
						else
									next_state<=s1;
					end	
			s2: begin
						if(pin)	begin
								if(count>=3)
									next_state<=s0;								
								else if(pinset[k]==pin) 
									//$display("valid pin");
									next_state<=s3;
									
								else begin
									$display("invalid pin");
									count=count+1;
									$display("count=%d",count);
									next_state<=s2;
								end
								end
						else
								next_state<=s2;
								
						
				end
			s3:	begin
					$display("Select transaction(1,2,3,4):");
					$display("1.Deposit");
					$display("2.Withdraw");
					$display("3.Show Balance");
					$display("4.Exit");
					if(transaction==3'd1)
						next_state=s4;
					else if (transaction==3'd2)
						next_state=s5;
					else if (transaction==3'd3)
						next_state=s6;
					else 
						next_state=s0;
					end
			s4:begin
				assign balance=balance + amount;
				next_state=s3;
				end
			s5:begin
				assign balance=balance - amount;
				next_state=s3;
				end
			s6:begin
				$display("balance=%d",balance);
				next_state=s3;
				end
					
	endcase
	//current_state =next_state;
end

always @(posedge(clk))
	current_state =next_state;
endmodule




