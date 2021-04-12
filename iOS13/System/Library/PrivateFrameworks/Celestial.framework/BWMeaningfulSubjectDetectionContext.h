/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@interface BWMeaningfulSubjectDetectionContext : NSObject {

	AcDetContextRef handle;
	SCD_Struct_BW88 state;
	SCD_Struct_BW90 params;
	SCD_Struct_BW91 control;
	void* detectionPlan;
	SCD_Struct_BW38* detectionNetwork;
	SCD_Struct_BW92* detectionOutputs[24];

}

@property (nonatomic,readonly) void* detectionPlan; 
+(void)initialize;
-(void)dealloc;
-(id)initWithDetectionNetworkURL:(id)arg1 context:(void*)arg2 priority:(int)arg3 ;
-(void*)detectionPlan;
@end

