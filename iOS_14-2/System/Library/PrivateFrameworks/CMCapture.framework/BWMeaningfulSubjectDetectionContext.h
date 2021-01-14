/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@interface BWMeaningfulSubjectDetectionContext : NSObject {

	AcDetContextRef handle;
	SCD_Struct_BW103 state;
	SCD_Struct_BW105 params;
	SCD_Struct_BW106 control;
	void* detectionPlan;
	SCD_Struct_BW30* detectionNetwork;
	SCD_Struct_BW107* detectionOutputs[24];

}

@property (nonatomic,readonly) void* detectionPlan; 
+(void)initialize;
-(void*)detectionPlan;
-(id)initWithDetectionNetworkURL:(id)arg1 context:(void*)arg2 priority:(int)arg3 ;
-(void)dealloc;
@end

