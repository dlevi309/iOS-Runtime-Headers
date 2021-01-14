/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol MTTimerClient <NSObject>
@required
-(void)timerFired:(id)arg1;
-(void)nextTimerChanged:(id)arg1;
-(void)timersRemoved:(id)arg1;
-(void)timersAdded:(id)arg1;
-(void)timersUpdated:(id)arg1;
-(void)timerDismissed:(id)arg1;

@end

