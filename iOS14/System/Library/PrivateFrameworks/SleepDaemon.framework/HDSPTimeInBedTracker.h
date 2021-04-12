/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/HDSPSleepScheduleStateObserver.h>
#import <libobjc.A.dylib/HDSPSleepTracker.h>

@protocol HDSPSleepTrackerDelegate, HKSPQueueBackedScheduler;
@class HDSPEnvironment, HKSPSleepScheduleModel, NSString;

@interface HDSPTimeInBedTracker : NSObject <HDSPSleepScheduleStateObserver, HDSPSleepTracker> {

	HDSPEnvironment* _environment;
	id<HDSPSleepTrackerDelegate> _delegate;
	id<HKSPQueueBackedScheduler> _sleepIntervalScheduler;

}

@property (nonatomic,readonly) id<HKSPQueueBackedScheduler> sleepIntervalScheduler;              //@synthesize sleepIntervalScheduler=_sleepIntervalScheduler - In the implementation block
@property (nonatomic,readonly) BOOL isTimeInBedTrackingEnabled; 
@property (nonatomic,readonly) HKSPSleepScheduleModel * sleepScheduleModel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HDSPSleepTrackerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                             //@synthesize environment=_environment - In the implementation block
-(void)environmentWillBecomeReady:(id)arg1 ;
-(id<HKSPQueueBackedScheduler>)sleepIntervalScheduler;
-(id<HDSPSleepTrackerDelegate>)delegate;
-(HKSPSleepScheduleModel *)sleepScheduleModel;
-(id)_computeSessionMetadataForInterval:(id)arg1 ;
-(id)_createSleepSessionWithEndDate:(id)arg1 endReason:(unsigned long long)arg2 ;
-(void)_endSleepSessionWithReason:(unsigned long long)arg1 ;
-(id)processedSessionForSession:(id)arg1 ;
-(BOOL)isTimeInBedTrackingEnabled;
-(void)setDelegate:(id<HDSPSleepTrackerDelegate>)arg1 ;
-(void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3 ;
-(id)initWithEnvironment:(id)arg1 ;
-(id)computeSleepIntervalsForInterval:(id)arg1 ;
-(HDSPEnvironment *)environment;
-(id)_computeSleepSessionStartBeforeDate:(id)arg1 ;
@end

