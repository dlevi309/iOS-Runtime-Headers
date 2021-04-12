/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setIsRunning:(BOOL)arg1 ;
-(void)setPowerSourcesChangedRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(void)setBatteryPackPendingConnectionTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setAccessoriesLimitedPowerRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(void)setDeviceBatteryMaxCapacity:(NSNumber *)arg1 ;
-(CFRunLoopSourceRef)powerSourcesChangedRunLoopSource;
-(void)setOnBatteryTime:(unsigned long long)arg1 ;
-(NSString *)pluginName;
-(unsigned long long)batteryPackConnectedTimestamp;
-(void)setDeviceBatteryCurrentCapacity:(NSNumber *)arg1 ;
-(void)setBatteryPackIOService:(unsigned)arg1 ;
-(unsigned)batteryPackIOService;
-(void)cleanBatteryPackAnalyticsInternals;
-(void)trimBatteryPackAnalyticsDictionary;
-(void)queue_performUpdateWithPowerSourcesBlob:(void*)arg1 andPowerSourcesList:(CFArrayRef)arg2 ;
-(void)commitPersistentBatteryPackAnalyticsDictionary;
-(NSString *)batteryPackAccessoryModel;
-(void)handleBatteryPackPowerSourceChange;
-(void)setBatteryPackDetails:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)batteryPackAnalyticsDictionary;
-(NSNumber *)batteryPackChargeAmperage;
-(int)chargePercentForCurrentCapacity:(id)arg1 andMaxCapacity:(id)arg2 updateZeroValue:(BOOL)arg3 ;
-(CFRunLoopSourceRef)accessoriesChangedRunLoopSource;
-(unsigned long long)inductiveChargeTime;
-(void)setWiredChargeTime:(unsigned long long)arg1 ;
-(NSDictionary *)batteryPackDetails;
-(NSString *)batteryPackAccessoryName;
-(void)setBatteryPackConnectionState:(int)arg1 ;
-(unsigned long long)qiChargeTime;
-(void)setBatteryPackAccessoryHardwareVersion:(NSString *)arg1 ;
-(void)setQiChargeTime:(unsigned long long)arg1 ;
-(void)setBatteryPackAccessoryModel:(NSString *)arg1 ;
-(NSString *)batteryPackAccessoryHardwareVersion;
-(BOOL)handleBatteryPackAttach;
-(NSNumber *)oldBatteryPackPowerSourceVoltage;
-(unsigned long long)batteryPackChargeSourceConnectedTimestamp;
-(void)setBatteryPackChargeSourceConnectedTimestamp:(unsigned long long)arg1 ;
-(void)setBatteryPackAnalyticsDictionary:(NSMutableDictionary *)arg1 ;
-(void)queue_handlePowerSourceChange;
-(void)setOldBatteryPackPowerSource:(NSString *)arg1 ;
-(NSNumber *)batteryPackCurrentCapacity;
-(void)setBatteryPackChargeAmperage:(NSNumber *)arg1 ;
-(void)initPersistentBatteryPackAnalyticsDictionary;
-(NSNumber *)batteryPackMaxCapacity;
-(void)setBatteryPackAccessoryManufacturer:(NSString *)arg1 ;
-(void)setBatteryPackAccessoryName:(NSString *)arg1 ;
-(void)setBatteryPackCurrentCapacity:(NSNumber *)arg1 ;
-(NSNumber *)deviceBatteryCurrentCapacity;
-(NSString *)oldBatteryPackPowerSource;
-(void)startBatteryPackAnalytics;
-(void)setConnectedBatteryPackKey:(NSString *)arg1 ;
-(NSString *)connectedBatteryPackKey;
-(BOOL)isRunning;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setBatteryPackAccessorySoftwareVersion:(NSString *)arg1 ;
-(void)stopPlugin;
-(void)setAccessoriesChangedRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(NSNumber *)batteryPackPowerSourceVoltage;
-(void)initPlugin;
-(void)handlePowerSourceChange;
-(void)setBatteryPackConnectedTimestamp:(unsigned long long)arg1 ;
-(NSNumber *)deviceBatteryMaxCapacity;
-(void)setOldBatteryPackPowerSourceVoltage:(NSNumber *)arg1 ;
-(void)setInductiveChargeTime:(unsigned long long)arg1 ;
-(void)stopBatteryPackAnalytics;
-(CFRunLoopSourceRef)accessoriesLimitedPowerRunLoopSource;
-(unsigned long long)onBatteryTime;
-(void)startPlugin;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)batteryPackAccessoryManufacturer;
-(void)handleBatteryPackStateChange:(id)arg1 ;
-(void)setBatteryPackPowerSource:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_source>)batteryPackPendingConnectionTimerSource;
-(int)batteryPackConnectionState;
-(NSString *)batteryPackPowerSource;
-(BOOL)handleBatteryPackDetach;
-(unsigned long long)wiredChargeTime;
-(void)setBatteryPackMaxCapacity:(NSNumber *)arg1 ;
-(NSString *)batteryPackAccessorySoftwareVersion;
-(void)setBatteryPackPowerSourceVoltage:(NSNumber *)arg1 ;
@end

