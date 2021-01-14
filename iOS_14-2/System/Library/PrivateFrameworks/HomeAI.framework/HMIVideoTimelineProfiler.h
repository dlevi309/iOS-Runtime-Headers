/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@class HMIVideoTimeline, HMITimeIntervalAverage;

@interface HMIVideoTimelineProfiler : HMFObject {

	HMIVideoTimeline* _timeline;
	HMITimeIntervalAverage* _average;

}
-(id)initWithMaxCapacity:(long long)arg1 ;
-(void)startedAtTime:(SCD_Struct_HM3)arg1 ;
-(void)endedAtTime:(SCD_Struct_HM3)arg1 ;
-(double)averageTime;
@end

