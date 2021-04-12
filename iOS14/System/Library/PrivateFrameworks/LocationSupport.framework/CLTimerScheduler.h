/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

