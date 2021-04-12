/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/


@class NSError, HKSPSleepEventTimelineResults;

@interface HDSPSleepScheduleModelValidationResult : NSObject {

	BOOL _success;
	NSError* _error;
	HKSPSleepEventTimelineResults* _timelineResults;

}

@property (nonatomic,readonly) BOOL success;                                                 //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) HKSPSleepEventTimelineResults * timelineResults;              //@synthesize timelineResults=_timelineResults - In the implementation block
-(BOOL)success;
-(NSError *)error;
-(HKSPSleepEventTimelineResults *)timelineResults;
-(id)initWithSuccess:(BOOL)arg1 timelineResults:(id)arg2 error:(id)arg3 ;
@end

