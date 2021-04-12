/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

@class CLTimer;


@protocol CLTimerScheduler
@property (assign,nonatomic,__weak) CLTimer * timer; 
@required
-(CLTimer *)timer;
-(void)setTimer:(id)arg1;
-(void)reflectNextFireDelay:(double)arg1 fireInterval:(double)arg2;

@end

