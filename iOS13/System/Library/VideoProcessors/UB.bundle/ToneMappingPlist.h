/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@class SRLPlist, ToneMapSmoothingPlist;

@interface ToneMappingPlist : NSObject {

	SRLPlist* srl;
	ToneMapSmoothingPlist* mstm;
	ToneMapSmoothingPlist* mstmWithSRL;
	BOOL enableLocalContrast;
	float detailEnhanceLeftLimit;
	float detailEnhanceRightLimit;
	float detailEnhanceStrength;
	BOOL enableSRL;
	BOOL enableMSTM;
	float chromaGainAdjustmentPower;
	BOOL enableGlobalContrast;
	float blackSubtractionClippingRatio;
	float blackSubtractionLowLimit;
	float maximumContrastStrength;
	BOOL GreenSkyFixEnabled;
	float GreenSkyFixEVZeroTargetGainThreshold;
	float GreenSkyFixCCTThreshold;
	BOOL YellowSatFixEnabled;

}
-(id)init;
-(int)readPlist:(id)arg1 ;
@end

