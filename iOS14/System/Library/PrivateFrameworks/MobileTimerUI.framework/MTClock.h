/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
*/


@protocol MTClock
@property (nonatomic,readonly) long long runMode; 
@optional
-(double)updateInterval;
-(double)coarseUpdateInterval;
-(void)updateTimeContinuously:(long long)arg1;
-(void)updateFlutter;

@required
-(void)updateTime;
-(void)start;
-(long long)runMode;
-(void)stop;

@end

