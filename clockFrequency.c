#include "clockFrequency.h"

void changeFrequencyOneMhz(){
	BCSCTL1 = CALBC1_1MHZ;       // Set range
	DCOCTL = CALDCO_1MHZ;        // Set DCO step and modulation
}

void changeFrequencyEightMhz(){
	BCSCTL1 = CALBC1_8MHZ;       // Set range
	DCOCTL = CALDCO_8MHZ;        // Set DCO step and modulation
}

void changeFrequencyTwelveMhz(){
	BCSCTL1 = CALBC1_12MHZ;       // Set range
	DCOCTL = CALDCO_12MHZ;        // Set DCO step and modulation
}

void changeFrequencySixteenMhz(){
	BCSCTL1 = CALBC1_12MHZ;       // Set range
	DCOCTL = CALDCO_12MHZ;        // Set DCO step and modulation
}
