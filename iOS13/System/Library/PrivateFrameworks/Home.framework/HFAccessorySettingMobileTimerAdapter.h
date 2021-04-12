/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFAccessorySettingAdapter.h>

@class NAFuture, NSHashTable, NSMutableSet, HMAccessoryCollectionSetting, NSSet;

@interface HFAccessorySettingMobileTimerAdapter : HFAccessorySettingAdapter {

	NAFuture* _alarmManagerForSynchronizationFuture;
	NSHashTable* _observers;
	NAFuture* _setupAccessoryAdapterModeFuture;
	NSMutableSet* _internalAlarmsBeingAdded;
	NSMutableSet* _internalAlarmsBeingRemoved;
	NSMutableSet* _internalAlarmsBeingUpdated;

}

@property (nonatomic,retain) NAFuture * alarmManagerForSynchronizationFuture;                      //@synthesize alarmManagerForSynchronizationFuture=_alarmManagerForSynchronizationFuture - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NAFuture * setupAccessoryAdapterModeFuture;                         //@synthesize setupAccessoryAdapterModeFuture=_setupAccessoryAdapterModeFuture - In the implementation block
@property (nonatomic,copy,readonly) NSMutableSet * internalAlarmsBeingAdded;                       //@synthesize internalAlarmsBeingAdded=_internalAlarmsBeingAdded - In the implementation block
@property (nonatomic,copy,readonly) NSMutableSet * internalAlarmsBeingRemoved;                     //@synthesize internalAlarmsBeingRemoved=_internalAlarmsBeingRemoved - In the implementation block
@property (nonatomic,copy,readonly) NSMutableSet * internalAlarmsBeingUpdated;                     //@synthesize internalAlarmsBeingUpdated=_internalAlarmsBeingUpdated - In the implementation block
@property (nonatomic,readonly) BOOL isAdapterReady; 
@property (nonatomic,readonly) HMAccessoryCollectionSetting * alarmCollectionSetting; 
@property (nonatomic,copy,readonly) NSSet * alarmsWithPendingEdits; 
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(id)addAlarm:(id)arg1 ;
-(id)removeAlarm:(id)arg1 ;
-(id)allAlarms;
-(id)updateAlarm:(id)arg1 ;
-(id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(/*^block*/id)arg4 ;
-(id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2 ;
-(id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandler:(/*^block*/id)arg3 ;
-(void)homeKitSettingWasUpdated:(id)arg1 value:(id)arg2 ;
-(id)_beginMonitoringSettingsKeyPath:(id)arg1 ;
-(BOOL)isAdapterReady;
-(HMAccessoryCollectionSetting *)alarmCollectionSetting;
-(void)_setupDebugHandler;
-(NSSet *)alarmsWithPendingEdits;
-(NSMutableSet *)internalAlarmsBeingAdded;
-(NSMutableSet *)internalAlarmsBeingUpdated;
-(NSMutableSet *)internalAlarmsBeingRemoved;
-(void)_notifyObserversOfUpdates;
-(id)_synchronizeHomeKitToMobileTimer;
-(id)alarmSettingsCurrentItemsFuture;
-(NAFuture *)alarmManagerForSynchronizationFuture;
-(id)alarmCollectionSettingFuture;
-(id)alarmManagerAlarms;
-(id)allAlarmsFuture;
-(void)_alarmWasAdded:(id)arg1 ;
-(void)_alarmWasDeleted:(id)arg1 ;
-(void)_alarmWasUpdated:(id)arg1 ;
-(void)_respondToAlarmManagerUpdate;
-(id)_synchronizeMobileTimerToHomeKitWithChangeType:(unsigned long long)arg1 ;
-(void)setAlarmManagerForSynchronizationFuture:(NAFuture *)arg1 ;
-(NAFuture *)setupAccessoryAdapterModeFuture;
@end

