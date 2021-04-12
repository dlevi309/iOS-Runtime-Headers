/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class SAFanSpeed, SATimestamp;

@interface SAAuxiliaryData : NSObject {

	SAFanSpeed* _fanSpeed;
	/*function pointer*/void** _mountStatus;
	SATimestamp* _timestamp;

}

@property (retain) SAFanSpeed * fanSpeed;                               //@synthesize fanSpeed=_fanSpeed - In the implementation block
@property (assign) /*function pointer*/void** mountStatus;              //@synthesize mountStatus=_mountStatus - In the implementation block
@property (retain) SATimestamp * timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
+(id)auxiliaryDataForTimestamp:(id)arg1 ;
-(void)dealloc;
-(SATimestamp *)timestamp;
-(void)setTimestamp:(SATimestamp *)arg1 ;
-(void)setFanSpeed:(SAFanSpeed *)arg1 ;
-(void)setMountStatus:(/*function pointer*/void**)arg1 ;
-(SAFanSpeed *)fanSpeed;
-(/*function pointer*/void**)mountStatus;
@end

