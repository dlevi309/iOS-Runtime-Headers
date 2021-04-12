/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/


@protocol HDSPSleepTracker <HDSPEnvironmentAware>
@property (assign,nonatomic,__weak) id<HDSPSleepTrackerDelegate> delegate; 
@optional
-(id)processedSessionForSession:(id)arg1;
-(void)previousSessionFinished;

@required
-(id<HDSPSleepTrackerDelegate>)delegate;
-(void)setDelegate:(id)arg1;

@end

