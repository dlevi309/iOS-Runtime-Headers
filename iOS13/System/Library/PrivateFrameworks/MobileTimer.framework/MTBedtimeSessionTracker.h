/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <libobjc.A.dylib/MTBedtimeSessionTracker.h>

@protocol MTBedtimeSessionTracker <NSObject>
@property (assign,nonatomic,__weak) id<MTBedtimeSessionTrackerDelegate> bedtimeSessionTrackerDelegate; 
@property (nonatomic,readonly) BOOL trackingEnabled; 
@optional
-(id)processedSessionForSession:(id)arg1;

@required
+(BOOL)_trackingEnabledForSleepAlarm:(id)arg1;
-(void)startSession;
-(BOOL)trackingEnabled;
-(void)endSessionWithDate:(id)arg1 reason:(unsigned long long)arg2;
-(Class)sessionClass;
-(id<MTBedtimeSessionTrackerDelegate>)bedtimeSessionTrackerDelegate;
-(void)setBedtimeSessionTrackerDelegate:(id)arg1;

@end

#import <libobjc.A.dylib/MTSleepObserver.h>
#import <libobjc.A.dylib/MTAgentNotificationListener.h>

@protocol MTBedtimeSessionTrackerDelegate;
@class MTAlarm, MTAlarmStorage, NSString;

@interface MTBedtimeSessionTracker : NSObject <MTBedtimeSessionTracker, MTSleepObserver, MTAgentNotificationListener> {

	os_unfair_lock_s _alarmLock;
	id<MTBedtimeSessionTrackerDelegate> _bedtimeSessionTrackerDelegate;
	MTAlarm* _cachedAlarm;
	MTAlarmStorage* _alarmStorage;

}

@property (nonatomic,retain) MTAlarmStorage * alarmStorage;                                                         //@synthesize alarmStorage=_alarmStorage - In the implementation block
@property (nonatomic,retain) MTAlarm * cachedAlarm;                                                                 //@synthesize cachedAlarm=_cachedAlarm - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s alarmLock;                                                            //@synthesize alarmLock=_alarmLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MTBedtimeSessionTrackerDelegate> bedtimeSessionTrackerDelegate;              //@synthesize bedtimeSessionTrackerDelegate=_bedtimeSessionTrackerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL trackingEnabled; 
+(BOOL)_trackingEnabledForSleepAlarm:(id)arg1 ;
-(void)prepare;
-(void)startSession;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)sleepCoordinator:(id)arg1 bedtimeReminderWasConfirmed:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepCoordinator:(id)arg1 waketimeWasReached:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepCoordinator:(id)arg1 wakeUpAlarmWasDismissed:(id)arg2 dismissAction:(unsigned long long)arg3 sleepAlarm:(id)arg4 ;
-(void)sleepCoordinator:(id)arg1 sleepAlarmDidChange:(id)arg2 ;
-(MTAlarmStorage *)alarmStorage;
-(void)setAlarmStorage:(MTAlarmStorage *)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)setCachedAlarm:(MTAlarm *)arg1 ;
-(BOOL)trackingEnabled;
-(void)endSessionWithDate:(id)arg1 reason:(unsigned long long)arg2 ;
-(Class)sessionClass;
-(id<MTBedtimeSessionTrackerDelegate>)bedtimeSessionTrackerDelegate;
-(void)setBedtimeSessionTrackerDelegate:(id<MTBedtimeSessionTrackerDelegate>)arg1 ;
-(id)initWithAlarmStorage:(id)arg1 ;
-(MTAlarm *)cachedAlarm;
-(os_unfair_lock_s)alarmLock;
-(void)setAlarmLock:(os_unfair_lock_s)arg1 ;
@end

