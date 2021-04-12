/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@interface SRLPlist : NSObject {

	float minFaceSizeT0;
	float minFaceSizeT1;
	float maxProfileFaceOrientation;
	float skinMaskMaybeT;
	float skinMaskDefinitelyT;
	float personMaskT0;
	float personMaskT1;
	float lumaSigmaMaskM;
	float lumaSigmaMaskC;
	float blueSigmaMaskM;
	float blueSigmaMaskC;
	float brightestFaceMaxLumaT0;
	float brightestFaceMaxLumaT1;
	float hazeMaxT0;
	float hazeMaxT1;
	float maxWhitePointSkinRedT0;
	float maxWhitePointSkinRedT1;
	float maxWhitePointNonSkinT0;
	float maxWhitePointNonSkinT1;
	float extraBoostRedBlueMedianSumT0;
	float extraBoostRedBlueMedianSumT1;
	float extraBoostRedMedianWeight;
	float extraBoostBlueMedianWeight;
	float extraBoostRedBlackPointT0;
	float extraBoostRedBlackPointT1;
	float extraBoostNonSkinLumaWhitePointT0;
	float extraBoostNonSkinLumaWhitePointT1;
	float boostModelA;
	float boostModelB;
	float globalLimitT0;
	float globalLimitT1;
	float globalLimitT2;
	float globalLimitT3;
	float globalLimitStr;
	float localLimitT0;
	float localLimitT1;
	float localLimitStr;
	float localExtraBoost;
	float saturationT0;
	float saturationT1;
	float saturationStr;

}
-(int)readPlist:(id)arg1 ;
@end

