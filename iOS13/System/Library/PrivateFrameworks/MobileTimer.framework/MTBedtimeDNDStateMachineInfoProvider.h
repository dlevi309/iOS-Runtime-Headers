/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

@class MTAlarm, NSDate;


@protocol MTBedtimeDNDStateMachineInfoProvider <MTStateMachineInfoProvider>
@property (nonatomic,readonly) MTAlarm * sleepAlarm; 
@property (nonatomic,readonly) NSDate * currentDate; 
@property (nonatomic,readonly) NSDate * keepOffUntilDate; 
@property (nonatomic,readonly) BOOL inUserDefinedSleepWindow; 
@required
-(NSDate *)currentDate;
-(MTAlarm *)sleepAlarm;
-(NSDate *)keepOffUntilDate;
-(BOOL)inUserDefinedSleepWindow;
-(BOOL)isBedtimeDNDEnabled:(BOOL*)arg1;

@end

