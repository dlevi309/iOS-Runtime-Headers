/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class CMSedentaryTimer_Internal;

@interface CMSedentaryTimer : NSObject {

	CMSedentaryTimer_Internal* _internal;

}

@property (nonatomic,readonly) CMSedentaryTimer_Internal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isAvailable;
-(id)init;
-(void)dealloc;
-(BOOL)isActive;
-(CMSedentaryTimer_Internal *)_internal;
-(void)startTimerWithStartTime:(id)arg1 periodInterval:(double)arg2 reminderInterval:(double)arg3 autoReschedule:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
-(void)stopTimerWithHandler:(/*^block*/id)arg1 ;
-(void)queryAlarmDataSince:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)registerForAlarmsWithHandler:(/*^block*/id)arg1 ;
@end

