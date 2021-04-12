/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@protocol _CDContext, OS_os_log, OS_dispatch_queue;
@class NSBundle, UNUserNotificationCenter, NSUserDefaults, NSDate, NSObject;

@interface PowerUIUPOManager : NSObject {

	BOOL _dataProviderLoaded;
	int _unlockToken;
	int _mitigationsDisabledToken;
	NSBundle* _bundle;
	UNUserNotificationCenter* _userNotificationCenter;
	NSUserDefaults* _defaults;
	id<_CDContext> _contextStore;
	NSDate* _lastTimeLocked;
	NSDate* _upoTime;
	NSObject*<OS_os_log> _log;
	NSObject*<OS_dispatch_queue> _lockNotificationQueue;
	NSObject*<OS_dispatch_queue> _notificationResponseQueue;

}

@property (nonatomic,retain) NSBundle * bundle;                                                   //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) UNUserNotificationCenter * userNotificationCenter;                   //@synthesize userNotificationCenter=_userNotificationCenter - In the implementation block
@property (assign,nonatomic) BOOL dataProviderLoaded;                                             //@synthesize dataProviderLoaded=_dataProviderLoaded - In the implementation block
@property (nonatomic,retain) NSUserDefaults * defaults;                                           //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,retain) id<_CDContext> contextStore;                                         //@synthesize contextStore=_contextStore - In the implementation block
@property (assign,nonatomic) int unlockToken;                                                     //@synthesize unlockToken=_unlockToken - In the implementation block
@property (assign,nonatomic) int mitigationsDisabledToken;                                        //@synthesize mitigationsDisabledToken=_mitigationsDisabledToken - In the implementation block
@property (nonatomic,retain) NSDate * lastTimeLocked;                                             //@synthesize lastTimeLocked=_lastTimeLocked - In the implementation block
@property (retain) NSDate * upoTime;                                                              //@synthesize upoTime=_upoTime - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                            //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> lockNotificationQueue;                  //@synthesize lockNotificationQueue=_lockNotificationQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notificationResponseQueue;              //@synthesize notificationResponseQueue=_notificationResponseQueue - In the implementation block
+(id)sharedInstance;
-(UNUserNotificationCenter *)userNotificationCenter;
-(NSBundle *)bundle;
-(void)setBundle:(NSBundle *)arg1 ;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)defaults;
-(void)setUnlockToken:(int)arg1 ;
-(id)init;
-(NSObject*<OS_os_log>)log;
-(void)setLastTimeLocked:(NSDate *)arg1 ;
-(int)mitigationsDisabledToken;
-(NSObject*<OS_dispatch_queue>)notificationResponseQueue;
-(void)setUserNotificationCenter:(UNUserNotificationCenter *)arg1 ;
-(id)mitigationsEnabledNotificationRequest;
-(void)displayMitigationsEnabledNotification;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)dataProviderDidLoad;
-(void)clearMitigationsEnabledNotificationRequestIfNecessary;
-(void)displayBatteryServiceNotification;
-(id)sortDescriptors;
-(void)removeMitigationsEnabledNotification;
-(void)setMitigationsDisabledToken:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)lockNotificationQueue;
-(id<_CDContext>)contextStore;
-(NSDate *)lastTimeLocked;
-(int)unlockToken;
-(void)requestBulletin;
-(void)registerForWithdrawalNotifications;
-(void)setLockNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDate *)upoTime;
-(void)setDataProviderLoaded:(BOOL)arg1 ;
-(void)setContextStore:(id<_CDContext>)arg1 ;
-(BOOL)dataProviderLoaded;
-(void)setNotificationResponseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)displayPostUPONotification;
-(void)setUpoTime:(NSDate *)arg1 ;
@end

