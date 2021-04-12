/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@interface BWMeaningfulSubjectTrackingContext : NSObject {

	SCD_Struct_BW26 result;
	TtTrkRpnContextRef handle;
	SCD_Struct_BW28 control;
	SCD_Struct_BW29 config;
	SCD_Struct_BW30 state;
	SCD_Struct_BW31 params;
	SCD_Struct_BW32* networkBufferPointers;
	SCD_Struct_BW34 networkInputCropControls;
	SCD_Struct_BW36* networkBuffers;
	SCD_Struct_BW37* networkCropBuffer;
	void* examplePlan;
	SCD_Struct_BW38* exampleNetwork;
	SCD_Struct_BW39* exampleRegressionOutputTensor;
	SCD_Struct_BW39* exampleClassificationOutputTensor;
	void* trackingPlan;
	SCD_Struct_BW38* trackingNetwork;
	SCD_Struct_BW39* trackingRegressionInputTensor;
	SCD_Struct_BW39* trackingClassificationInputTensor;
	SCD_Struct_BW39* trackingRegressionOutputTensor;
	SCD_Struct_BW39* trackingClassificationOutputTensor;

}
+(void)initialize;
-(void)dealloc;
-(id)initWithExampleNetworkURL:(id)arg1 trackingNetworkURL:(id)arg2 context:(void*)arg3 priority:(int)arg4 sharedIntermediateBufferPlan:(void*)arg5 cropBuffer:(SCD_Struct_BW37*)arg6 ;
@end

