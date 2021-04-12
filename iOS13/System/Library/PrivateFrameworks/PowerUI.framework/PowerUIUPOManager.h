/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)sortDescriptors;
-(NSBundle *)bundle;
-(NSUserDefaults *)defaults;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(NSObject*<OS_os_log>)log;
-(void)setBundle:(NSBundle *)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)dataProviderDidLoad;
-(UNUserNotificationCenter *)userNotificationCenter;
-(void)clearMitigationsEnabledNotificationRequestIfNecessary;
-(id)mitigationsEnabledNotificationRequest;
-(NSDate *)upoTime;
-(void)setUpoTime:(NSDate *)arg1 ;
-(void)registerForWithdrawalNotifications;
-(void)removeMitigationsEnabledNotification;
-(void)displayMitigationsEnabledNotification;
-(void)requestBulletin;
-(void)displayPostUPONotification;
-(void)displayBatteryServiceNotification;
-(void)setUserNotificationCenter:(UNUserNotificationCenter *)arg1 ;
-(BOOL)dataProviderLoaded;
-(void)setDataProviderLoaded:(BOOL)arg1 ;
-(id<_CDContext>)contextStore;
-(void)setContextStore:(id<_CDContext>)arg1 ;
-(int)unlockToken;
-(void)setUnlockToken:(int)arg1 ;
-(int)mitigationsDisabledToken;
-(void)setMitigationsDisabledToken:(int)arg1 ;
-(NSDate *)lastTimeLocked;
-(void)setLastTimeLocked:(NSDate *)arg1 ;
-(NSObject*<OS_dispatch_queue>)lockNotificationQueue;
-(void)setLockNotificationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)notificationResponseQueue;
-(void)setNotificationResponseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

