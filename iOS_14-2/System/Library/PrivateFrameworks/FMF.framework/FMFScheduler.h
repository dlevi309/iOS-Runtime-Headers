/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
*/


@protocol FMFSchedulerDelegate;
@class NSArray, FMXPCTimer;

@interface FMFScheduler : NSObject {

	id<FMFSchedulerDelegate> _delegate;
	NSArray* _schedules;
	FMXPCTimer* _timer;

}

@property (nonatomic,retain) FMXPCTimer * timer;                               //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) id<FMFSchedulerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * schedules;                              //@synthesize schedules=_schedules - In the implementation block
@property (nonatomic,readonly) NSArray * currentSchedules; 
+(id)_nextStartOrEndDateFrom:(id)arg1 forSchedules:(id)arg2 ;
-(FMXPCTimer *)timer;
-(void)setTimer:(FMXPCTimer *)arg1 ;
-(id<FMFSchedulerDelegate>)delegate;
-(void)_updateScheduleTimer;
-(void)_significantTimeChange:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)scheduleTimerFired;
-(void)_registerForSignificantTimeChangeNotifications;
-(void)setSchedules:(NSArray *)arg1 ;
-(NSArray *)schedules;
-(NSArray *)currentSchedules;
@end

