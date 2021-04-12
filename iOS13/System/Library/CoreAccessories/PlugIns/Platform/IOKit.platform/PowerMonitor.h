/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/IOKit.platform/IOKit
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <IOKit/IOKit-Structs.h>
@class NSObject, NSMutableArray;

@interface PowerMonitor : NSObject {

	BOOL _sleepNotificationsEnabled;
	BOOL _systemIsAsleep;
	BOOL _isExtChargerConnected;
	BOOL _isBatteryCharging;
	unsigned char _batteryChargeLevelPercent;
	unsigned _systemPowerPort;
	unsigned _systemPowerIterator;
	int _batteryCapacity;
	int _batteryCapacityOverride;
	int _batteryCapacityMax;
	unsigned _battery_iter;
	int _batteryChargingType;
	int _batteryChargingTypeExternal;
	NSObject*<OS_dispatch_queue> _systemPowerQueue;
	IONotificationPortRef _systemPowerNotifyPortRef;
	NSMutableArray* _sleepNotificationClients;
	NSMutableArray* _clientsPreventingSleep;
	NSObject*<OS_dispatch_semaphore> _sleepSemaphore;
	NSObject*<OS_dispatch_queue> _clientsPreventingSleepLock;
	IONotificationPortRef _batteryNotifyPortRef;
	NSMutableArray* _batteryNotificationClients;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> systemPowerQueue;                        //@synthesize systemPowerQueue=_systemPowerQueue - In the implementation block
@property (assign,nonatomic) unsigned systemPowerPort;                                             //@synthesize systemPowerPort=_systemPowerPort - In the implementation block
@property (assign,nonatomic) IONotificationPortRef systemPowerNotifyPortRef;                       //@synthesize systemPowerNotifyPortRef=_systemPowerNotifyPortRef - In the implementation block
@property (assign,nonatomic) unsigned systemPowerIterator;                                         //@synthesize systemPowerIterator=_systemPowerIterator - In the implementation block
@property (assign,nonatomic) BOOL sleepNotificationsEnabled;                                       //@synthesize sleepNotificationsEnabled=_sleepNotificationsEnabled - In the implementation block
@property (nonatomic,retain) NSMutableArray * sleepNotificationClients;                            //@synthesize sleepNotificationClients=_sleepNotificationClients - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientsPreventingSleep;                              //@synthesize clientsPreventingSleep=_clientsPreventingSleep - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> sleepSemaphore;                      //@synthesize sleepSemaphore=_sleepSemaphore - In the implementation block
@property (assign,nonatomic) BOOL systemIsAsleep;                                                  //@synthesize systemIsAsleep=_systemIsAsleep - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientsPreventingSleepLock;              //@synthesize clientsPreventingSleepLock=_clientsPreventingSleepLock - In the implementation block
@property (assign,nonatomic) BOOL isExtChargerConnected;                                           //@synthesize isExtChargerConnected=_isExtChargerConnected - In the implementation block
@property (assign,nonatomic) int batteryCapacity;                                                  //@synthesize batteryCapacity=_batteryCapacity - In the implementation block
@property (assign,nonatomic) int batteryCapacityOverride;                                          //@synthesize batteryCapacityOverride=_batteryCapacityOverride - In the implementation block
@property (assign,nonatomic) int batteryCapacityMax;                                               //@synthesize batteryCapacityMax=_batteryCapacityMax - In the implementation block
@property (assign,nonatomic) BOOL isBatteryCharging;                                               //@synthesize isBatteryCharging=_isBatteryCharging - In the implementation block
@property (assign,nonatomic) unsigned char batteryChargeLevelPercent;                              //@synthesize batteryChargeLevelPercent=_batteryChargeLevelPercent - In the implementation block
@property (assign,nonatomic) IONotificationPortRef batteryNotifyPortRef;                           //@synthesize batteryNotifyPortRef=_batteryNotifyPortRef - In the implementation block
@property (assign,nonatomic) unsigned battery_iter;                                                //@synthesize battery_iter=_battery_iter - In the implementation block
@property (nonatomic,retain) NSMutableArray * batteryNotificationClients;                          //@synthesize batteryNotificationClients=_batteryNotificationClients - In the implementation block
@property (assign,nonatomic) int batteryChargingType;                                              //@synthesize batteryChargingType=_batteryChargingType - In the implementation block
@property (assign,nonatomic) int batteryChargingTypeExternal;                                      //@synthesize batteryChargingTypeExternal=_batteryChargingTypeExternal - In the implementation block
+(id)sharedMonitor;
-(id)init;
-(void)dealloc;
-(void)setSystemPowerPort:(unsigned)arg1 ;
-(void)setSystemPowerIterator:(unsigned)arg1 ;
-(void)setSystemPowerNotifyPortRef:(IONotificationPortRef)arg1 ;
-(void)setSystemPowerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)systemPowerQueue;
-(unsigned)systemPowerPort;
-(IONotificationPortRef)systemPowerNotifyPortRef;
-(unsigned)systemPowerIterator;
-(BOOL)isExternalChargerConnected;
-(int)getBatteryChargingState;
-(unsigned char)getBatteryChargeLevel;
-(id)createBatteryNotificationClient;
-(void)destroyBatteryNotificationsForClient:(id)arg1 ;
-(id)createSleepNotificationClient;
-(void)destroySleepNotificationsForClient:(id)arg1 ;
-(void)clientHandledSleepNotification:(id)arg1 ;
-(int)getBatteryChargingType;
-(int)getExternalBatteryChargingType;
-(BOOL)getBatteryChargingTypeIsInductive;
-(BOOL)getExternalBatteryChargingTypeIsInductive;
-(BOOL)isExtChargerConnected;
-(BOOL)isBatteryCharging;
-(int)batteryCapacityOverride;
-(int)batteryCapacity;
-(int)batteryCapacityMax;
-(unsigned char)batteryChargeLevelPercent;
-(int)batteryChargingType;
-(int)batteryChargingTypeExternal;
-(BOOL)_getBatteryChargingTypeIsInductive:(int)arg1 ;
-(NSMutableArray *)batteryNotificationClients;
-(void)setBatteryNotifyPortRef:(IONotificationPortRef)arg1 ;
-(IONotificationPortRef)batteryNotifyPortRef;
-(unsigned)battery_iter;
-(NSMutableArray *)sleepNotificationClients;
-(void)setSleepNotificationsEnabled:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientsPreventingSleepLock;
-(NSMutableArray *)clientsPreventingSleep;
-(BOOL)systemIsAsleep;
-(NSObject*<OS_dispatch_semaphore>)sleepSemaphore;
-(void)_checkAndSendNotificationForOldConnected:(BOOL)arg1 oldIsBatteryCharging:(BOOL)arg2 oldBatteryChargeLevelPercent:(int)arg3 oldBatteryChargingType:(int)arg4 oldBatteryChargingTypeExt:(int)arg5 overrideChanged:(BOOL)arg6 ;
-(BOOL)sleepNotificationsEnabled;
-(void)setSleepNotificationClients:(NSMutableArray *)arg1 ;
-(void)setClientsPreventingSleep:(NSMutableArray *)arg1 ;
-(void)setSleepSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)setSystemIsAsleep:(BOOL)arg1 ;
-(void)setClientsPreventingSleepLock:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setIsExtChargerConnected:(BOOL)arg1 ;
-(void)setBatteryCapacity:(int)arg1 ;
-(void)setBatteryCapacityOverride:(int)arg1 ;
-(void)setBatteryCapacityMax:(int)arg1 ;
-(void)setIsBatteryCharging:(BOOL)arg1 ;
-(void)setBatteryChargeLevelPercent:(unsigned char)arg1 ;
-(void)setBattery_iter:(unsigned)arg1 ;
-(void)setBatteryNotificationClients:(NSMutableArray *)arg1 ;
-(void)setBatteryChargingType:(int)arg1 ;
-(void)setBatteryChargingTypeExternal:(int)arg1 ;
@end

