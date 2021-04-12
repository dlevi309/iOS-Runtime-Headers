/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


#import <UB/UB-Structs.h>
@class DenoiseAndSharpeningTuning;

@interface DenoiseAndSharpeningPlist : NSObject {

	DenoiseAndSharpeningTuning* tuningParameters;
	BOOL enableLumaDenoiseSharpening;
	BOOL enableChromaDenoiseSharpening;
	BOOL enableBilateralRegression;
	BOOL enableLowVarSharpening;
	BOOL enableGdFlatness;
	int gdNumDir;
	float gdFlatnessThreshold;
	int gdFilterSigma;
	BOOL enableLoGOffset;
	BOOL enableOPC;
	float OPCThresholdGain;
	NoiseModel bluenessCb;
	NoiseModel bluenessCr;

}
-(id)init;
-(int)readPlist:(id)arg1 ;
-(int)readBandData:(id)arg1 ;
@end

