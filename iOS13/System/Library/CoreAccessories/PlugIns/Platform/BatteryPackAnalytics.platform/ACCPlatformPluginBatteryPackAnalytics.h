/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/BatteryPackAnalytics.platform/BatteryPackAnalytics
*/

#import <BatteryPackAnalytics/BatteryPackAnalytics-Structs.h>
#import <libobjc.A.dylib/ACCPlatformBatteryPackAnalyticsPluginProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSNumber, NSString, NSMutableDictionary, NSDictionary;

@interface ACCPlatformPluginBatteryPackAnalytics : NSObject <ACCPlatformBatteryPackAnalyticsPluginProtocol> {

	BOOL _isRunning;
	int _batteryPackConnectionState;
	unsigned _batteryPackIOService;
	CFRunLoopSourceRef _powerSourcesChangedRunLoopSource;
	CFRunLoopSourceRef _accessoriesChangedRunLoopSource;
	CFRunLoopSourceRef _accessoriesLimitedPowerRunLoopSource;
	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* _batteryPackCurrentCapacity;
	NSNumber* _batteryPackMaxCapacity;
	NSNumber* _deviceBatteryCurrentCapacity;
	NSNumber* _deviceBatteryMaxCapacity;
	NSString* _batteryPackAccessoryName;
	NSString* _batteryPackAccessoryManufacturer;
	NSString* _batteryPackAccessoryModel;
	NSString* _batteryPackAccessoryHardwareVersion;
	NSString* _batteryPackAccessorySoftwareVersion;
	NSString* _batteryPackPowerSource;
	NSString* _oldBatteryPackPowerSource;
	NSNumber* _batteryPackPowerSourceVoltage;
	NSNumber* _oldBatteryPackPowerSourceVoltage;
	NSString* _connectedBatteryPackKey;
	unsigned long long _batteryPackConnectedTimestamp;
	unsigned long long _batteryPackChargeSourceConnectedTimestamp;
	unsigned long long _wiredChargeTime;
	unsigned long long _qiChargeTime;
	unsigned long long _inductiveChargeTime;
	unsigned long long _onBatteryTime;
	NSObject*<OS_dispatch_source> _batteryPackPendingConnectionTimerSource;
	NSMutableDictionary* _batteryPackAnalyticsDictionary;
	NSNumber* _batteryPackChargeAmperage;
	NSDictionary* _batteryPackDetails;

}

@property (assign,nonatomic) BOOL isRunning;                                                                     //@synthesize isRunning=_isRunning - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef powerSourcesChangedRunLoopSource;                                //@synthesize powerSourcesChangedRunLoopSource=_powerSourcesChangedRunLoopSource - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef accessoriesChangedRunLoopSource;                                 //@synthesize accessoriesChangedRunLoopSource=_accessoriesChangedRunLoopSource - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef accessoriesLimitedPowerRunLoopSource;                            //@synthesize accessoriesLimitedPowerRunLoopSource=_accessoriesLimitedPowerRunLoopSource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSNumber * batteryPackCurrentCapacity;                                              //@synthesize batteryPackCurrentCapacity=_batteryPackCurrentCapacity - In the implementation block
@property (nonatomic,retain) NSNumber * batteryPackMaxCapacity;                                                  //@synthesize batteryPackMaxCapacity=_batteryPackMaxCapacity - In the implementation block
@property (nonatomic,retain) NSNumber * deviceBatteryCurrentCapacity;                                            //@synthesize deviceBatteryCurrentCapacity=_deviceBatteryCurrentCapacity - In the implementation block
@property (nonatomic,retain) NSNumber * deviceBatteryMaxCapacity;                                                //@synthesize deviceBatteryMaxCapacity=_deviceBatteryMaxCapacity - In the implementation block
@property (nonatomic,retain) NSString * batteryPackAccessoryName;                                                //@synthesize batteryPackAccessoryName=_batteryPackAccessoryName - In the implementation block
@property (nonatomic,retain) NSString * batteryPackAccessoryManufacturer;                                        //@synthesize batteryPackAccessoryManufacturer=_batteryPackAccessoryManufacturer - In the implementation block
@property (nonatomic,retain) NSString * batteryPackAccessoryModel;                                               //@synthesize batteryPackAccessoryModel=_batteryPackAccessoryModel - In the implementation block
@property (nonatomic,retain) NSString * batteryPackAccessoryHardwareVersion;                                     //@synthesize batteryPackAccessoryHardwareVersion=_batteryPackAccessoryHardwareVersion - In the implementation block
@property (nonatomic,retain) NSString * batteryPackAccessorySoftwareVersion;                                     //@synthesize batteryPackAccessorySoftwareVersion=_batteryPackAccessorySoftwareVersion - In the implementation block
@property (nonatomic,retain) NSString * batteryPackPowerSource;                                                  //@synthesize batteryPackPowerSource=_batteryPackPowerSource - In the implementation block
@property (nonatomic,retain) NSString * oldBatteryPackPowerSource;                                               //@synthesize oldBatteryPackPowerSource=_oldBatteryPackPowerSource - In the implementation block
@property (nonatomic,retain) NSNumber * batteryPackPowerSourceVoltage;                                           //@synthesize batteryPackPowerSourceVoltage=_batteryPackPowerSourceVoltage - In the implementation block
@property (nonatomic,retain) NSNumber * oldBatteryPackPowerSourceVoltage;                                        //@synthesize oldBatteryPackPowerSourceVoltage=_oldBatteryPackPowerSourceVoltage - In the implementation block
@property (nonatomic,retain) NSString * connectedBatteryPackKey;                                                 //@synthesize connectedBatteryPackKey=_connectedBatteryPackKey - In the implementation block
@property (assign,nonatomic) unsigned long long batteryPackConnectedTimestamp;                                   //@synthesize batteryPackConnectedTimestamp=_batteryPackConnectedTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long batteryPackChargeSourceConnectedTimestamp;                       //@synthesize batteryPackChargeSourceConnectedTimestamp=_batteryPackChargeSourceConnectedTimestamp - In the implementation block
@property (assign,nonatomic) int batteryPackConnectionState;                                                     //@synthesize batteryPackConnectionState=_batteryPackConnectionState - In the implementation block
@property (assign,nonatomic) unsigned long long wiredChargeTime;                                                 //@synthesize wiredChargeTime=_wiredChargeTime - In the implementation block
@property (assign,nonatomic) unsigned long long qiChargeTime;                                                    //@synthesize qiChargeTime=_qiChargeTime - In the implementation block
@property (assign,nonatomic) unsigned long long inductiveChargeTime;                                             //@synthesize inductiveChargeTime=_inductiveChargeTime - In the implementation block
@property (assign,nonatomic) unsigned long long onBatteryTime;                                                   //@synthesize onBatteryTime=_onBatteryTime - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> batteryPackPendingConnectionTimerSource;              //@synthesize batteryPackPendingConnectionTimerSource=_batteryPackPendingConnectionTimerSource - In the implementation block
@property (assign,nonatomic) unsigned batteryPackIOService;                                                      //@synthesize batteryPackIOService=_batteryPackIOService - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * batteryPackAnalyticsDictionary;                               //@synthesize batteryPackAnalyticsDictionary=_batteryPackAnalyticsDictionary - In the implementation block
@property (nonatomic,retain) NSNumber * batteryPackChargeAmperage;                                               //@synthesize batteryPackChargeAmperage=_batteryPackChargeAmperage - In the implementation block
@property (nonatomic,retain) NSDictionary * batteryPackDetails;                                                  //@synthesize batteryPackDetails=_batteryPackDetails - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)isRunning;
-(void)setIsRunning:(BOOL)arg1 ;
-(NSString *)pluginName;
-(void)initPlugin;
-(void)startPlugin;
-(void)stopPlugin;
-(void)setBatteryPackConnectionState:(int)arg1 ;
-(void)setBatteryPackCurrentCapacity:(NSNumber *)arg1 ;
-(void)setBatteryPackMaxCapacity:(NSNumber *)arg1 ;
-(void)setBatteryPackAccessoryName:(NSString *)arg1 ;
-(void)setBatteryPackAccessoryManufacturer:(NSString *)arg1 ;
-(void)setBatteryPackAccessoryModel:(NSString *)arg1 ;
-(void)setBatteryPackAccessoryHardwareVersion:(NSString *)arg1 ;
-(void)setBatteryPackAccessorySoftwareVersion:(NSString *)arg1 ;
-(void)setBatteryPackPowerSource:(NSString *)arg1 ;
-(void)setOldBatteryPackPowerSource:(NSString *)arg1 ;
-(void)setBatteryPackPowerSourceVoltage:(NSNumber *)arg1 ;
-(void)setOldBatteryPackPowerSourceVoltage:(NSNumber *)arg1 ;
-(void)setConnectedBatteryPackKey:(NSString *)arg1 ;
-(void)setBatteryPackConnectedTimestamp:(unsigned long long)arg1 ;
-(void)setBatteryPackChargeSourceConnectedTimestamp:(unsigned long long)arg1 ;
-(void)setWiredChargeTime:(unsigned long long)arg1 ;
-(void)setQiChargeTime:(unsigned long long)arg1 ;
-(void)setInductiveChargeTime:(unsigned long long)arg1 ;
-(void)setOnBatteryTime:(unsigned long long)arg1 ;
-(void)setBatteryPackPendingConnectionTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setBatteryPackIOService:(unsigned)arg1 ;
-(void)setDeviceBatteryCurrentCapacity:(NSNumber *)arg1 ;
-(void)setDeviceBatteryMaxCapacity:(NSNumber *)arg1 ;
-(void)setBatteryPackChargeAmperage:(NSNumber *)arg1 ;
-(void)setBatteryPackDetails:(NSDictionary *)arg1 ;
-(NSObject*<OS_dispatch_source>)batteryPackPendingConnectionTimerSource;
-(int)batteryPackConnectionState;
-(NSMutableDictionary *)batteryPackAnalyticsDictionary;
-(NSString *)connectedBatteryPackKey;
-(void)trimBatteryPackAnalyticsDictionary;
-(NSNumber *)batteryPackMaxCapacity;
-(NSNumber *)batteryPackCurrentCapacity;
-(int)chargePercentForCurrentCapacity:(id)arg1 andMaxCapacity:(id)arg2 updateZeroValue:(BOOL)arg3 ;
-(NSNumber *)deviceBatteryCurrentCapacity;
-(NSNumber *)deviceBatteryMaxCapacity;
-(unsigned)batteryPackIOService;
-(NSString *)batteryPackPowerSource;
-(NSNumber *)batteryPackPowerSourceVoltage;
-(unsigned long long)batteryPackConnectedTimestamp;
-(unsigned long long)batteryPackChargeSourceConnectedTimestamp;
-(void)commitPersistentBatteryPackAnalyticsDictionary;
-(void)initPersistentBatteryPackAnalyticsDictionary;
-(void)handlePowerSourceChange;
-(void)queue_handlePowerSourceChange;
-(void)queue_performUpdateWithPowerSourcesBlob:(void*)arg1 andPowerSourcesList:(CFArrayRef)arg2 ;
-(void)handleBatteryPackStateChange:(id)arg1 ;
-(BOOL)handleBatteryPackAttach;
-(BOOL)handleBatteryPackDetach;
-(NSString *)oldBatteryPackPowerSource;
-(NSDictionary *)batteryPackDetails;
-(NSNumber *)batteryPackChargeAmperage;
-(NSNumber *)oldBatteryPackPowerSourceVoltage;
-(void)handleBatteryPackPowerSourceChange;
-(unsigned long long)wiredChargeTime;
-(unsigned long long)qiChargeTime;
-(unsigned long long)inductiveChargeTime;
-(unsigned long long)onBatteryTime;
-(void)cleanBatteryPackAnalyticsInternals;
-(void)setBatteryPackAnalyticsDictionary:(NSMutableDictionary *)arg1 ;
-(void)startBatteryPackAnalytics;
-(void)stopBatteryPackAnalytics;
-(CFRunLoopSourceRef)powerSourcesChangedRunLoopSource;
-(void)setPowerSourcesChangedRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(CFRunLoopSourceRef)accessoriesChangedRunLoopSource;
-(void)setAccessoriesChangedRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(CFRunLoopSourceRef)accessoriesLimitedPowerRunLoopSource;
-(void)setAccessoriesLimitedPowerRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(NSString *)batteryPackAccessoryName;
-(NSString *)batteryPackAccessoryManufacturer;
-(NSString *)batteryPackAccessoryModel;
-(NSString *)batteryPackAccessoryHardwareVersion;
-(NSString *)batteryPackAccessorySoftwareVersion;
@end

