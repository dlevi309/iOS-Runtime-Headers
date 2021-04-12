/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <libobjc.A.dylib/MTSleepSessionTracker.h>

@protocol MTSleepSessionTracker <NSObject>
@property (assign,nonatomic,__weak) id<MTSleepSessionTrackerDelegate> sleepSessionTrackerDelegate; 
@property (nonatomic,readonly) BOOL trackingEnabled; 
@optional
-(id)processedSessionForSession:(id)arg1;

@required
+(BOOL)_trackingEnabledForSleepAlarm:(id)arg1;
-(BOOL)trackingEnabled;
-(void)endSessionWithDate:(id)arg1 reason:(unsigned long long)arg2;
-(id<MTSleepSessionTrackerDelegate>)sleepSessionTrackerDelegate;
-(void)setSleepSessionTrackerDelegate:(id)arg1;
-(void)startSession;
-(Class)sessionClass;

@end

#import <libobjc.A.dylib/MTSleepObserver.h>
#import <libobjc.A.dylib/MTAgentNotificationListener.h>

@protocol MTSleepSessionTrackerDelegate;
@class MTAlarm, MTAlarmStorage, NSString;

@interface MTSleepSessionTracker : NSObject <MTSleepSessionTracker, MTSleepObserver, MTAgentNotificationListener> {

	os_unfair_lock_s _alarmLock;
	id<MTSleepSessionTrackerDelegate> _sleepSessionTrackerDelegate;
	MTAlarm* _cachedAlarm;
	MTAlarmStorage* _alarmStorage;

}

@property (nonatomic,retain) MTAlarmStorage * alarmStorage;                                                     //@synthesize alarmStorage=_alarmStorage - In the implementation block
@property (nonatomic,retain) MTAlarm * cachedAlarm;                                                             //@synthesize cachedAlarm=_cachedAlarm - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s alarmLock;                                                        //@synthesize alarmLock=_alarmLock - In the implementation block
@property (assign,nonatomic,__weak) id<MTSleepSessionTrackerDelegate> sleepSessionTrackerDelegate;              //@synthesize sleepSessionTrackerDelegate=_sleepSessionTrackerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL trackingEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_trackingEnabledForSleepAlarm:(id)arg1 ;
-(BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2 ;
-(void)setCachedAlarm:(MTAlarm *)arg1 ;
-(MTAlarmStorage *)alarmStorage;
-(BOOL)trackingEnabled;
-(void)endSessionWithDate:(id)arg1 reason:(unsigned long long)arg2 ;
-(id<MTSleepSessionTrackerDelegate>)sleepSessionTrackerDelegate;
-(void)setSleepSessionTrackerDelegate:(id<MTSleepSessionTrackerDelegate>)arg1 ;
-(os_unfair_lock_s)alarmLock;
-(void)setAlarmLock:(os_unfair_lock_s)arg1 ;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)startSession;
-(id)initWithAlarmStorage:(id)arg1 ;
-(void)prepare;
-(void)setAlarmStorage:(MTAlarmStorage *)arg1 ;
-(void)sleepCoordinator:(id)arg1 bedtimeReminderWasConfirmed:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepCoordinator:(id)arg1 waketimeWasReached:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepCoordinator:(id)arg1 wakeUpAlarmWasDismissed:(id)arg2 dismissAction:(unsigned long long)arg3 sleepAlarm:(id)arg4 ;
-(void)sleepCoordinator:(id)arg1 sleepAlarmDidChange:(id)arg2 ;
-(MTAlarm *)cachedAlarm;
-(Class)sessionClass;
@end

