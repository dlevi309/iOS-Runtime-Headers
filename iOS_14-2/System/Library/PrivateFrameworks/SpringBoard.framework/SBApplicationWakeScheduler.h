/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol SBApplicationWakeLifecycleHandling, BSTimer;
@class SBApplication, NSDate, NSString;

@interface SBApplicationWakeScheduler : NSObject <BSInvalidatable> {

	id<SBApplicationWakeLifecycleHandling> _lifecycleTracker;
	SBApplication* _application;
	BOOL _invalidated;
	id<BSTimer> _wakeTimer;
	id<BSTimer> _wakeSuspendTimer;

}

@property (nonatomic,retain) id<BSTimer> wakeTimer;                     //@synthesize wakeTimer=_wakeTimer - In the implementation block
@property (nonatomic,retain) id<BSTimer> wakeSuspendTimer;              //@synthesize wakeSuspendTimer=_wakeSuspendTimer - In the implementation block
@property (nonatomic,readonly) NSDate * scheduledDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_applicationProcessStateDidChange:(id)arg1 ;
-(void)invalidate;
-(NSDate *)scheduledDate;
-(void)unschedule;
-(void)dealloc;
-(void)wakeImmediately;
-(void)scheduleWakeForDate:(id)arg1 ;
-(id<BSTimer>)wakeTimer;
-(id)_expectedFireDateForTimer:(id)arg1 ;
-(void)setWakeTimer:(id<BSTimer>)arg1 ;
-(id)_safelyScheduleTimerForDate:(id)arg1 persistent:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(void)endResumeIfAwoken;
-(void)setWakeSuspendTimer:(id<BSTimer>)arg1 ;
-(id<BSTimer>)wakeSuspendTimer;
-(id)_createPersistentTimerWithFireDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_createTimerWithFireDate:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)_initWithLifecycleTracker:(id)arg1 forApplication:(id)arg2 ;
-(id)suspensionDate;
-(void)_forceInvalidate;
@end

