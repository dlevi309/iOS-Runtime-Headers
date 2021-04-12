/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@interface BWMeaningfulSubjectTrackingContext : NSObject {

	SCD_Struct_BW18 result;
	TtTrkRpnContextRef handle;
	SCD_Struct_BW20 control;
	SCD_Struct_BW21 config;
	SCD_Struct_BW22 state;
	SCD_Struct_BW23 params;
	SCD_Struct_BW24* networkBufferPointers;
	SCD_Struct_BW26 networkInputCropControls;
	SCD_Struct_BW28* networkBuffers;
	SCD_Struct_BW29* networkCropBuffer;
	void* examplePlan;
	SCD_Struct_BW30* exampleNetwork;
	SCD_Struct_BW31* exampleRegressionOutputTensor;
	SCD_Struct_BW31* exampleClassificationOutputTensor;
	void* trackingPlan;
	SCD_Struct_BW30* trackingNetwork;
	SCD_Struct_BW31* trackingRegressionInputTensor;
	SCD_Struct_BW31* trackingClassificationInputTensor;
	SCD_Struct_BW31* trackingRegressionOutputTensor;
	SCD_Struct_BW31* trackingClassificationOutputTensor;

}
+(void)initialize;
-(id)initWithExampleNetworkURL:(id)arg1 trackingNetworkURL:(id)arg2 context:(void*)arg3 priority:(int)arg4 sharedIntermediateBufferPlan:(void*)arg5 cropBuffer:(SCD_Struct_BW29*)arg6 ;
-(void)dealloc;
@end

