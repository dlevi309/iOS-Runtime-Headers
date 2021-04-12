/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

@class MTAlarm, NSDate;


@protocol MTSleepCoordinatorStateMachineInfoProvider <MTStateMachineInfoProvider>
@property (nonatomic,readonly) MTAlarm * sleepAlarm; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) unsigned long long sleepTimeOutMinutes; 
@required
-(NSDate *)currentDate;
-(MTAlarm *)sleepAlarm;
-(unsigned long long)sleepTimeOutMinutes;

@end

