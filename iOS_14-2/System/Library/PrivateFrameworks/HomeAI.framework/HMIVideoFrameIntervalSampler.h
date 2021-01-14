/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoFrameSampler.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMIVideoFrameIntervalSampler : HMIVideoFrameSampler <HMFLogging> {

	SCD_Struct_HM3 _interval;
	SCD_Struct_HM3 _firstPTS;
	long long _lastIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)initWithFrameRate:(float)arg1 ;
-(id)initWithInterval:(SCD_Struct_HM3)arg1 ;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

