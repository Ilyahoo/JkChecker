
#include <avr/io.h>
#include <util/delay.h>


class JK{

	public:
		JK(); // Cons yekhwa

		JK(uint8_t J, uint8_t  K, uint8_t H, uint8_t Q); // rahwayaj i podha anfitcha
		JK(uint8_t J, uint8_t  K, uint8_t H, uint8_t Q, uint8_t Qb); // mara anahdhaj ra dh lbar
		JK(uint8_t J, uint8_t  K, uint8_t H, uint8_t Q, uint8_t Qb, uint8_t  Set, uint8_t  Clear); // anid kis ra dh PRE
		
		void init(); 		// assendi n degga marra
		void clkType();		// ma Raising ma Falling edge
		void set();		// atsita s pre
		void clear();		// atclira s pre
		void JKing();		/* J dh K sthnayan ghasent 1 <<-- ikhessa ra mara togah wanazu bu jking ***/
		void raising();		// an raisa l clock
		void falling();		// an falla l clock
		
		uint8_t itschanged();
		uint8_t cleared();
		uint8_t setted();

		uint8_t Q();		// anagh tkessi 
		uint8_t Qn();
		uint8_t Qb();
		uint8_t Qbn();






	private:
		uint8_t J;
		uint8_t K;
		uint8_t H;
		uint8_t Q;
		uint8_t Qb;
		uint8_t Set;
		uint8_t Clear;
		clkType;
















}



