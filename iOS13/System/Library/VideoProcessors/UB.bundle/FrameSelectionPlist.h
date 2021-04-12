/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


#import <UB/UB-Structs.h>
@interface FrameSelectionPlist : NSObject {

	BOOL enableReferenceSelectionWithCombinedWeight;
	BOOL enableBlurFrameDetection;
	SCD_Struct_Fr50 referenceSelectionRegressionWeightShortFrame;
	SCD_Struct_Fr50 referenceSelectionRegressionWeightLongFrame;
	SCD_Struct_Fr50 blurFrameRejectionRegressionWeightShortFrame;
	SCD_Struct_Fr50 blurFrameRejectionRegressionWeightLongFrame;
	float blurFrameWeightAdjustementLeftLimit;
	float blurFrameWeightAdjustementRightLimit;

}
-(int)readPlist:(id)arg1 ;
-(int)_setModelWeights:(id)arg1 weights:(SCD_Struct_Fr50*)arg2 ;
@end

