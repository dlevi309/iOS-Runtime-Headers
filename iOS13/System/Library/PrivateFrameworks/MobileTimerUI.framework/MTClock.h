/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
*/


@protocol MTClock
@property (nonatomic,readonly) long long runMode; 
@optional
-(double)updateInterval;
-(void)updateFlutter;
-(void)updateTimeContinuously:(long long)arg1;
-(double)coarseUpdateInterval;

@required
-(void)stop;
-(void)start;
-(void)updateTime;
-(long long)runMode;

@end

