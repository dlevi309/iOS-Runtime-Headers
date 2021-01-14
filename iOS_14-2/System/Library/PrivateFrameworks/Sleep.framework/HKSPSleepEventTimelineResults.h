/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/


@class HKSPSleepEventTimeline, HKSPSleepSchedule, HKSPMutableSleepSchedule;

@interface HKSPSleepEventTimelineResults : NSObject {

	BOOL _sleepScheduleInvalid;
	BOOL _snoozeFireDateNeedsReset;
	HKSPSleepEventTimeline* _timeline;
	HKSPSleepEventTimeline* _unadjustedTimeline;
	HKSPSleepSchedule* _originalSleepSchedule;
	HKSPMutableSleepSchedule* _mutableValidSleepSchedule;

}

@property (nonatomic,retain) HKSPSleepEventTimeline * timeline;                                 //@synthesize timeline=_timeline - In the implementation block
@property (nonatomic,retain) HKSPSleepEventTimeline * unadjustedTimeline;                       //@synthesize unadjustedTimeline=_unadjustedTimeline - In the implementation block
@property (assign,nonatomic) BOOL sleepScheduleInvalid;                                         //@synthesize sleepScheduleInvalid=_sleepScheduleInvalid - In the implementation block
@property (assign,nonatomic) BOOL snoozeFireDateNeedsReset;                                     //@synthesize snoozeFireDateNeedsReset=_snoozeFireDateNeedsReset - In the implementation block
@property (nonatomic,retain) HKSPSleepSchedule * originalSleepSchedule;                         //@synthesize originalSleepSchedule=_originalSleepSchedule - In the implementation block
@property (nonatomic,retain) HKSPMutableSleepSchedule * mutableValidSleepSchedule;              //@synthesize mutableValidSleepSchedule=_mutableValidSleepSchedule - In the implementation block
@property (nonatomic,readonly) HKSPSleepSchedule * validSleepSchedule; 
-(BOOL)sleepScheduleInvalid;
-(void)setTimeline:(HKSPSleepEventTimeline *)arg1 ;
-(void)setSleepScheduleInvalid:(BOOL)arg1 ;
-(void)setSnoozeFireDateNeedsReset:(BOOL)arg1 ;
-(HKSPSleepEventTimeline *)unadjustedTimeline;
-(HKSPSleepEventTimeline *)timeline;
-(HKSPSleepSchedule *)validSleepSchedule;
-(void)setMutableValidSleepSchedule:(HKSPMutableSleepSchedule *)arg1 ;
-(void)setUnadjustedTimeline:(HKSPSleepEventTimeline *)arg1 ;
-(HKSPSleepSchedule *)originalSleepSchedule;
-(BOOL)snoozeFireDateNeedsReset;
-(void)setOriginalSleepSchedule:(HKSPSleepSchedule *)arg1 ;
-(HKSPMutableSleepSchedule *)mutableValidSleepSchedule;
@end

