/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDAccessoryProfile.h>
#import <libobjc.A.dylib/HMDCharacteristicsAvailabilityListenerDelegate.h>

@protocol HMDLightProfileDataSource;
@class HMDNaturalLightingCurve, HMDService, HMDCharacteristicsAvailabilityListener, NSSet, HMDHAPAccessory, NSString, HMDNaturalLightingCurveWriter, NSDate, HMDCharacteristic, HMDNaturalLightingActiveTransitionContext, HMDNaturalLightingEnabledRetryContext, NSHashTable, HMLightProfileSettings;

@interface HMDLightProfile : HMDAccessoryProfile <HMDCharacteristicsAvailabilityListenerDelegate> {

	BOOL _didCharacteristicReadSucceed;
	unsigned char _activeTransitionsCount;
	BOOL _naturalLightingEnabled;
	HMDNaturalLightingCurve* _naturalLightingCurve;
	HMDService* _service;
	unsigned long long _supportedFeatures;
	HMDCharacteristicsAvailabilityListener* _characteristicsAvailabilityListener;
	NSSet* _notificationEnabledCharacteristics;
	HMDHAPAccessory* _hapAccessory;
	NSString* _clientIdentifier;
	HMDNaturalLightingCurveWriter* _naturalLightingCurveWriter;
	NSDate* _lastNaturalLightingEnabledDate;
	NSDate* _lastNaturalLightingUsedDate;
	id<HMDLightProfileDataSource> _dataSource;
	HMDCharacteristic* _brightnessCharacteristic;
	HMDCharacteristic* _colorTemperatureCharacteristic;
	NSDate* _lastNaturalLightingCurveUpdateDate;
	HMDNaturalLightingActiveTransitionContext* _naturalLightingActiveTransitionContext;
	HMDNaturalLightingEnabledRetryContext* _naturalLightingEnabledRetryContext;
	NSHashTable* _characteristicValueObservers;

}

@property (assign) unsigned long long supportedFeatures;                                                          //@synthesize supportedFeatures=_supportedFeatures - In the implementation block
@property (readonly) HMDCharacteristicsAvailabilityListener * characteristicsAvailabilityListener;                //@synthesize characteristicsAvailabilityListener=_characteristicsAvailabilityListener - In the implementation block
@property (copy) NSSet * notificationEnabledCharacteristics;                                                      //@synthesize notificationEnabledCharacteristics=_notificationEnabledCharacteristics - In the implementation block
@property (__weak) HMDHAPAccessory * hapAccessory;                                                                //@synthesize hapAccessory=_hapAccessory - In the implementation block
@property (readonly) NSString * clientIdentifier;                                                                 //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) HMDNaturalLightingCurveWriter * naturalLightingCurveWriter;                                  //@synthesize naturalLightingCurveWriter=_naturalLightingCurveWriter - In the implementation block
@property (copy) NSDate * lastNaturalLightingEnabledDate;                                                         //@synthesize lastNaturalLightingEnabledDate=_lastNaturalLightingEnabledDate - In the implementation block
@property (copy) NSDate * lastNaturalLightingUsedDate;                                                            //@synthesize lastNaturalLightingUsedDate=_lastNaturalLightingUsedDate - In the implementation block
@property (getter=isUsingNaturalLighting,readonly) BOOL usingNaturalLighting; 
@property (readonly) id<HMDLightProfileDataSource> dataSource;                                                    //@synthesize dataSource=_dataSource - In the implementation block
@property (retain) HMDCharacteristic * brightnessCharacteristic;                                                  //@synthesize brightnessCharacteristic=_brightnessCharacteristic - In the implementation block
@property (retain) HMDCharacteristic * colorTemperatureCharacteristic;                                            //@synthesize colorTemperatureCharacteristic=_colorTemperatureCharacteristic - In the implementation block
@property (copy) NSDate * lastNaturalLightingCurveUpdateDate;                                                     //@synthesize lastNaturalLightingCurveUpdateDate=_lastNaturalLightingCurveUpdateDate - In the implementation block
@property (copy) HMDNaturalLightingCurve * naturalLightingCurve;                                                  //@synthesize naturalLightingCurve=_naturalLightingCurve - In the implementation block
@property (copy) HMDNaturalLightingActiveTransitionContext * naturalLightingActiveTransitionContext;              //@synthesize naturalLightingActiveTransitionContext=_naturalLightingActiveTransitionContext - In the implementation block
@property (assign) BOOL didCharacteristicReadSucceed;                                                             //@synthesize didCharacteristicReadSucceed=_didCharacteristicReadSucceed - In the implementation block
@property (copy) HMDNaturalLightingEnabledRetryContext * naturalLightingEnabledRetryContext;                      //@synthesize naturalLightingEnabledRetryContext=_naturalLightingEnabledRetryContext - In the implementation block
@property (assign) unsigned char activeTransitionsCount;                                                          //@synthesize activeTransitionsCount=_activeTransitionsCount - In the implementation block
@property (retain) NSHashTable * characteristicValueObservers;                                                    //@synthesize characteristicValueObservers=_characteristicValueObservers - In the implementation block
@property (copy,readonly) NSSet * availableCharacteristics; 
@property (getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled;                                          //@synthesize naturalLightingEnabled=_naturalLightingEnabled - In the implementation block
@property (readonly) HMLightProfileSettings * settings; 
@property (copy,readonly) NSDate * mostRecentNaturalLightingEnabledDate; 
@property (copy,readonly) NSDate * mostRecentNaturalLightingUsedDate; 
@property (readonly) HMDService * service;                                                                        //@synthesize service=_service - In the implementation block
+(id)logCategory;
-(void)encodeWithCoder:(id)arg1 ;
-(id<HMDLightProfileDataSource>)dataSource;
-(unsigned long long)supportedFeatures;
-(HMLightProfileSettings *)settings;
-(void)registerForMessages;
-(void)setSupportedFeatures:(unsigned long long)arg1 ;
-(BOOL)isNaturalLightingEnabled;
-(void)setNaturalLightingEnabled:(BOOL)arg1 ;
-(NSString *)clientIdentifier;
-(void)setNaturalLightingEnabled:(BOOL)arg1 shouldRetryOnFailure:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(HMDService *)service;
-(void)dealloc;
-(HMDHAPAccessory *)hapAccessory;
-(NSDate *)mostRecentNaturalLightingEnabledDate;
-(NSDate *)mostRecentNaturalLightingUsedDate;
-(HMDNaturalLightingCurveWriter *)naturalLightingCurveWriter;
-(void)handleHomeDataLoadedNotification:(id)arg1 ;
-(void)handleFetchSettingsMessage:(id)arg1 ;
-(void)fetchNaturalLightingEnabledWithCompletion:(/*^block*/id)arg1 ;
-(void)handleAccessoryConnected:(id)arg1 ;
-(void)handleAccessoryDisconnected:(id)arg1 ;
-(void)setHapAccessory:(HMDHAPAccessory *)arg1 ;
-(HMDCharacteristicsAvailabilityListener *)characteristicsAvailabilityListener;
-(void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2 ;
-(NSSet *)availableCharacteristics;
-(id)initWithWorkQueue:(id)arg1 lightService:(id)arg2 accessory:(id)arg3 ;
-(id)initWithUUID:(id)arg1 workQueue:(id)arg2 lightService:(id)arg3 accessory:(id)arg4 characteristicsAvailabilityListener:(id)arg5 naturalLightingCurveWriter:(id)arg6 dataSource:(id)arg7 ;
-(void)handleSetNaturalLightingEnabledMessage:(id)arg1 ;
-(void)handleFetchNaturalLightColorTemperatureForBrightnessMessage:(id)arg1 ;
-(void)handleAccessoryCharacteristicsChanged:(id)arg1 ;
-(void)handleHomeNaturalLightingContextUpdated:(id)arg1 ;
-(void)handleHomeDidEnableCharacteristicNotification:(id)arg1 ;
-(void)handleHomeDidDisableCharacteristicNotification:(id)arg1 ;
-(void)enableNaturalLightingCharacteristicNotificationsForObserver:(id)arg1 ;
-(HMDNaturalLightingCurve *)naturalLightingCurve;
-(HMDNaturalLightingEnabledRetryContext *)naturalLightingEnabledRetryContext;
-(void)setNaturalLightingEnabledRetryContext:(HMDNaturalLightingEnabledRetryContext *)arg1 ;
-(void)notifyClientsOfUpdatedSettingsWithPreviousSettings:(id)arg1 ;
-(NSDate *)lastNaturalLightingEnabledDate;
-(void)setLastNaturalLightingEnabledDate:(NSDate *)arg1 ;
-(void)updateLastNaturalLightingUsedState;
-(void)synchronizeCurveToAccessory;
-(HMDCharacteristic *)colorTemperatureCharacteristic;
-(void)setNaturalLightingActiveTransitionContext:(HMDNaturalLightingActiveTransitionContext *)arg1 ;
-(HMDNaturalLightingActiveTransitionContext *)naturalLightingActiveTransitionContext;
-(id)availableCharacteristicWithType:(id)arg1 fromChangedObjects:(id)arg2 ;
-(void)updateSupportedFeaturesWithCharacteristics:(id)arg1 ;
-(void)updateNaturalLightingEnabledForCharacteristic:(id)arg1 ;
-(BOOL)updateActiveTransitionCountWithCharacteristic:(id)arg1 ;
-(void)readNaturalLightingCharacteristicsWithReason:(id)arg1 ;
-(HMDCharacteristic *)brightnessCharacteristic;
-(BOOL)isUsingNaturalLighting;
-(NSDate *)lastNaturalLightingUsedDate;
-(void)setLastNaturalLightingUsedDate:(NSDate *)arg1 ;
-(void)setNaturalLightingCurve:(HMDNaturalLightingCurve *)arg1 ;
-(void)readNaturalLightingCharacteristicsWithReason:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateSettingsWithCharacteristics:(id)arg1 ;
-(void)setDidCharacteristicReadSucceed:(BOOL)arg1 ;
-(unsigned char)activeTransitionsCount;
-(void)setActiveTransitionsCount:(unsigned char)arg1 ;
-(NSHashTable *)characteristicValueObservers;
-(NSSet *)notificationEnabledCharacteristics;
-(void)setNotificationEnabledCharacteristics:(NSSet *)arg1 ;
-(BOOL)didCharacteristicReadSucceed;
-(void)updateEnabledNaturalLightingCharacteristicsNotifications;
-(void)resetNaturalLightingEnabledRetryContext;
-(void)setNaturalLightingEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 retryContext:(id)arg3 ;
-(void)callSetNaturalLightingEnabledCompletion:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)handleSetNaturalLightingEnabled:(BOOL)arg1 ;
-(BOOL)shouldRetrySetNaturalLightingEnabledWithError:(id)arg1 ;
-(void)retrySetNaturalLightingEnabledWithContext:(id)arg1 error:(id)arg2 ;
-(void)setBrightnessCharacteristic:(HMDCharacteristic *)arg1 ;
-(void)setColorTemperatureCharacteristic:(HMDCharacteristic *)arg1 ;
-(BOOL)updateNaturalLightingCurve;
-(void)disableNaturalLightingCharacteristicNotificationsForObserver:(id)arg1 ;
-(void)_handleAccessoryCharacteristicsChanged:(id)arg1 ;
-(void)setNaturalLightingEnabled:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setNaturalLightingCharacteristicsNotificationEnabled:(BOOL)arg1 forObserver:(id)arg2 ;
-(NSDate *)lastNaturalLightingCurveUpdateDate;
-(void)setLastNaturalLightingCurveUpdateDate:(NSDate *)arg1 ;
-(void)setCharacteristicValueObservers:(NSHashTable *)arg1 ;
@end

