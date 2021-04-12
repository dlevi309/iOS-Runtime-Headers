/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@class NSArray;

@interface DeepFusionDeferredProcessingPlist : NSObject {

	float modelSwitchEITThreshold;
	NSArray* addBackModulationBands;
	NSArray* noiseTuning;
	NSArray* fusionData;
	NSArray* highlightTuning;
	NSArray* chromaBoostMaskBands;
	NSArray* desaturationData;
	NSArray* haloSuppressionBands;

}
-(id)addBackModulationBandsForModel:(int)arg1 ;
-(id)fusionDataForModel:(int)arg1 ;
-(id)chromaBoostBandsForModel:(int)arg1 isSyntheticLongWithRealLong:(BOOL)arg2 ;
-(id)desaturationDataForModel:(int)arg1 ;
-(id)haloSuppressionBandsForModel:(int)arg1 ;
-(int)modelForEIT:(float)arg1 ;
-(id)noiseTuningForModel:(int)arg1 ;
-(int)readPlist:(id)arg1 ;
-(int)readBandData:(id)arg1 into:(id)arg2 ;
-(int)readChromaBoostBandData:(id)arg1 into:(id)arg2 key:(id)arg3 ;
-(int)readDesaturationData:(id)arg1 into:(id)arg2 ;
-(int)readHaloSuppressionBandData:(id)arg1 into:(id)arg2 ;
@end

