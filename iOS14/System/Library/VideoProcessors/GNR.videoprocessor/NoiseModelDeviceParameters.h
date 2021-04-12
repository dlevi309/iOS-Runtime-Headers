/*
* Generated on Thursday, January 14, 2021 at 2:29:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
*/


#import <GNR.videoprocessor/GNR.videoprocessor-Structs.h>
@class NSMutableArray;

@interface NoiseModelDeviceParameters : NSObject {

	float gammaY;
	float bandFactorY;
	float biasFactor;
	float slopeFactor;
	float gammaC;
	float bandFactorC;
	float lensShadingFactors[2];
	float chromaDemoireStrength;
	SCD_Struct_AM10 bluenessCb;
	SCD_Struct_AM10 bluenessCr;
	SCD_Struct_Ba25* high_gain_threshold;
	NSMutableArray* bands;
	float disableLGAThreshold;
	float highGainDenoiseThreshold;
	float highGainSharpenThreshold;

}
-(id)init;
-(void)dealloc;
@end

