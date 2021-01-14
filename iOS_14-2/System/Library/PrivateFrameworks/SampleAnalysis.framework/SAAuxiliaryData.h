/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class SAFanSpeed, SATimestamp;

@interface SAAuxiliaryData : NSObject {

	SAFanSpeed* _fanSpeed;
	/*function pointer*/void** _mountStatus;
	SATimestamp* _timestamp;

}
+(id)auxiliaryDataForTimestamp:(id)arg1 ;
-(void)dealloc;
@end

