/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class CMSedentaryTimer_Internal;

@interface CMSedentaryTimer : NSObject {

	CMSedentaryTimer_Internal* _internal;

}

@property (nonatomic,readonly) CMSedentaryTimer_Internal * _internal;              //@synthesize internal=_internal - In the implementation block
+(BOOL)isAvailable;
-(CMSedentaryTimer_Internal *)_internal;
-(id)init;
-(BOOL)isActive;
-(void)queryAlarmDataSince:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)registerForAlarmsWithHandler:(/*^block*/id)arg1 ;
-(void)startTimerWithStartTime:(id)arg1 periodInterval:(double)arg2 reminderInterval:(double)arg3 autoReschedule:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
-(void)stopTimerWithHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

