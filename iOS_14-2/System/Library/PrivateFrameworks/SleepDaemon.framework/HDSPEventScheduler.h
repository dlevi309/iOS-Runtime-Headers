/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/


@protocol HDSPEventScheduler <NSObject>
@property (assign,nonatomic,__weak) id<HDSPEventScheduleDelegate> delegate; 
@required
-(void)scheduleEventForDate:(id)arg1 options:(unsigned long long)arg2;
-(id<HDSPEventScheduleDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)unschedule;

@end

