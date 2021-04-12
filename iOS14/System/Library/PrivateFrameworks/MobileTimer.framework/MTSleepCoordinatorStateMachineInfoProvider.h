/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

@class MTAlarm, NSDate;


@protocol MTSleepCoordinatorStateMachineInfoProvider <MTStateMachineInfoProvider>
@property (nonatomic,readonly) MTAlarm * sleepAlarm; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) unsigned long long sleepTimeOutMinutes; 
@required
-(MTAlarm *)sleepAlarm;
-(NSDate *)currentDate;
-(unsigned long long)sleepTimeOutMinutes;

@end

