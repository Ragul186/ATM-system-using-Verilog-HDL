`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:45:53 06/05/2021
// Design Name:   main
// Module Name:   E:/ATM_system/tb_atm.v
// Project Name:  ATM_system
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_atm;

	// Inputs
	reg [31:0] cardnumber;
	reg [19:0] pin;
	reg clk;
	reg start;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.cardnumber(cardnumber), 
		.pin(pin), 
		.clk(clk), 
		.start(start)
	);

	initial begin
		clk=0;
		forever begin
			#5 clk=~clk;
		end
	end
	initial begin
		// Initialize Inputs
		
		
		cardnumber = 0;
		pin = 0;
		clk = 0;
		start = 0;
		// Wait 100 ns for global reset to finish
		#200;
		start = 1;
		
		#50 cardnumber=32'd11112222;
		#5	 pin=20'd1111;
		#5  pin=20'd1112;
		#5	 pin=20'd5432;
		#10 amount=500;
		#50 transaction=3'd1;
		#10 amount=300;
		#50 transaction=3'd2;
		#10 transaction=3'd3;
		#10 transaction=3'd4;
		
		
			 
		
        
		// Add stimulus here

	end
      
endmodule

