/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol OS_dispatch_queue;
@class NSArray, Alarm, NSString, NSObject, UNUserNotificationCenter;

@interface MTLegacyManager : NSObject {

	BOOL _loaded;
	BOOL _purged;
	NSArray* _alarms;
	Alarm* _sleepAlarm;
	double _defaultDuration;
	NSString* _defaultSound;
	NSObject*<OS_dispatch_queue> _serializer;
	UNUserNotificationCenter* _notificationCenter;
	NSArray* _scheduledNotifications;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serializer;                    //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) UNUserNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) NSArray * scheduledNotifications;                           //@synthesize scheduledNotifications=_scheduledNotifications - In the implementation block
@property (nonatomic,retain) NSArray * alarms;                                           //@synthesize alarms=_alarms - In the implementation block
@property (nonatomic,retain) Alarm * sleepAlarm;                                         //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
@property (assign,nonatomic) double defaultDuration;                                     //@synthesize defaultDuration=_defaultDuration - In the implementation block
@property (nonatomic,copy) NSString * defaultSound;                                      //@synthesize defaultSound=_defaultSound - In the implementation block
@property (assign,nonatomic) BOOL loaded;                                                //@synthesize loaded=_loaded - In the implementation block
@property (assign,nonatomic) BOOL purged;                                                //@synthesize purged=_purged - In the implementation block
+(id)_bundleIDForUNSchedule;
+(id)sharedManager;
+(unsigned long long)repeatScheduleFromOldAlarm:(id)arg1 ;
+(id)soundFromOldAlarm:(id)arg1 ;
+(id)_numberFromString:(id)arg1 ;
+(id)alarmFromOldAlarm:(id)arg1 ;
-(void)setSerializer:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)alarms;
-(void)setPurged:(BOOL)arg1 ;
-(void)setNotificationCenter:(UNUserNotificationCenter *)arg1 ;
-(Alarm *)sleepAlarm;
-(void)setDefaultDuration:(double)arg1 ;
-(void)setSleepAlarm:(Alarm *)arg1 ;
-(void)_loadAlarms;
-(id)init;
-(void)_loadUserPreferences;
-(void)_loadScheduledNotifications;
-(void)_upgradeFromSpringboardDefaults;
-(void)_reconcileAlarmsAndNotifications;
-(void)_loadTimerDefaults;
-(BOOL)_upgradeIfNeverAttempted;
-(BOOL)_discardOldVersion;
-(BOOL)_upgradeAlarms;
-(UNUserNotificationCenter *)notificationCenter;
-(BOOL)loaded;
-(BOOL)_upgradeTimers;
-(id)_copyLegacyAlarmsFromPreferences;
-(BOOL)_discardOldAlarms;
-(BOOL)_discardOldTimers;
-(id)_copyLegacySleepAlarmFromPreferences;
-(void)_purgeAlarmsAndTimers;
-(void)_cancelNotifications;
-(void)setDefaultSound:(NSString *)arg1 ;
-(NSArray *)scheduledNotifications;
-(void)setScheduledNotifications:(NSArray *)arg1 ;
-(BOOL)purged;
-(NSObject*<OS_dispatch_queue>)serializer;
-(double)defaultDuration;
-(void)setAlarms:(NSArray *)arg1 ;
-(void)setLoaded:(BOOL)arg1 ;
-(void)loadLegacyData;
-(void)purgeLegacyData;
-(void)cancelNotifications;
-(BOOL)_upgrade;
-(NSString *)defaultSound;
@end

