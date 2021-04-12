/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@protocol OS_dispatch_queue;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMSedentaryTimer_Internal : NSObject {

	NSObject*<OS_dispatch_queue> fClientQueue;
	NSObject*<OS_dispatch_queue> fDaemonQueue;
	CLConnectionClient* fLocationdConnection;
	BOOL _timerArmed;

}

@property (assign,getter=isTimerArmed,nonatomic) BOOL timerArmed;              //@synthesize timerArmed=_timerArmed - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)_isActive;
-(void)_teardown;
-(void)setTimerArmed:(BOOL)arg1 ;
-(BOOL)isTimerArmed;
-(void)_handleAlarmDataResponse:(shared_ptr<CLConnectionMessage>*)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_handleStartStopTimerResponse:(shared_ptr<CLConnectionMessage>*)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_registerForAlarmsWithHandler:(/*^block*/id)arg1 ;
@end

