/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

@class NSArray, NAFuture;


@protocol HDSPSleepAlarmProvider <NSObject>
@property (nonatomic,readonly) NSArray * sleepAlarms; 
@property (nonatomic,readonly) NAFuture * sleepAlarmsFuture; 
@required
-(void)resetSleepAlarmSnoozeState;
-(void)updateSleepAlarms;
-(NSArray *)sleepAlarms;
-(id)sleepAlarmsIgnoringCache:(BOOL)arg1;
-(NAFuture *)sleepAlarmsFuture;

@end

