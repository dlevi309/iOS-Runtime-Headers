/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/


@class HKSPResolvedSleepScheduleOccurrence;

@interface _HKSPSleepEventTimelineAdjustment : NSObject {

	HKSPResolvedSleepScheduleOccurrence* _originalOccurrence;
	HKSPResolvedSleepScheduleOccurrence* _adjustedOccurrence;

}

@property (nonatomic,retain) HKSPResolvedSleepScheduleOccurrence * originalOccurrence;              //@synthesize originalOccurrence=_originalOccurrence - In the implementation block
@property (nonatomic,retain) HKSPResolvedSleepScheduleOccurrence * adjustedOccurrence;              //@synthesize adjustedOccurrence=_adjustedOccurrence - In the implementation block
-(HKSPResolvedSleepScheduleOccurrence *)originalOccurrence;
-(void)setOriginalOccurrence:(HKSPResolvedSleepScheduleOccurrence *)arg1 ;
-(HKSPResolvedSleepScheduleOccurrence *)adjustedOccurrence;
-(void)setAdjustedOccurrence:(HKSPResolvedSleepScheduleOccurrence *)arg1 ;
@end

