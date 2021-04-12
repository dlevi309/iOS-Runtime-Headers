/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFHomeKitSettingsObserver.h>
#import <libobjc.A.dylib/HFMediaObjectObserver.h>

@protocol HFHomeKitSettingsVendor;
@class HFHomeKitSettingsValueManager, NSSet, HFHomeKitDispatcher, NSMutableDictionary, HMAccessory, HMSettings, HMHome, NSString;

@interface HFAccessorySettingAdapter : NSObject <HFHomeKitSettingsObserver, HFMediaObjectObserver> {

	HFHomeKitSettingsValueManager* _valueManager;
	unsigned long long _mode;
	id<HFHomeKitSettingsVendor> _homeKitSettingsVendor;
	NSSet* _keyPaths;
	/*^block*/id _updateHandler;
	HFHomeKitDispatcher* _dispatcher;
	NSMutableDictionary* _watchedSettings;
	NSMutableDictionary* _keyPathStringToFuture;
	HMAccessory* _accessory;
	HMSettings* _settings;

}

@property (nonatomic,retain) HFHomeKitDispatcher * dispatcher;                                 //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * watchedSettings;                            //@synthesize watchedSettings=_watchedSettings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * keyPathStringToFuture;                      //@synthesize keyPathStringToFuture=_keyPathStringToFuture - In the implementation block
@property (nonatomic,readonly) HMAccessory * accessory;                                        //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) HMHome * home; 
@property (nonatomic,readonly) HFHomeKitSettingsValueManager * valueManager;                   //@synthesize valueManager=_valueManager - In the implementation block
@property (nonatomic,readonly) HMSettings * settings;                                          //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                        //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;              //@synthesize homeKitSettingsVendor=_homeKitSettingsVendor - In the implementation block
@property (nonatomic,copy,readonly) NSSet * keyPaths;                                          //@synthesize keyPaths=_keyPaths - In the implementation block
@property (nonatomic,copy,readonly) id updateHandler;                                          //@synthesize updateHandler=_updateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createDefaultHomeSettingAdapterCollectionForProfile:(id)arg1 ;
-(id)init;
-(unsigned long long)mode;
-(HMHome *)home;
-(HMSettings *)settings;
-(id)updateHandler;
-(HMAccessory *)accessory;
-(void)mediaObject:(id)arg1 didUpdateSettings:(id)arg2 ;
-(NSSet *)keyPaths;
-(HFHomeKitDispatcher *)dispatcher;
-(void)setDispatcher:(HFHomeKitDispatcher *)arg1 ;
-(void)settingsDidUpdate:(id)arg1 ;
-(id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(/*^block*/id)arg4 ;
-(id<HFHomeKitSettingsVendor>)homeKitSettingsVendor;
-(id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandler:(/*^block*/id)arg3 ;
-(HFHomeKitSettingsValueManager *)valueManager;
-(id)updateSetting:(id)arg1 value:(id)arg2 ;
-(id)settingWatchFutureForKeyPath:(id)arg1 ;
-(void)homeKitSettingWasUpdated:(id)arg1 value:(id)arg2 ;
-(id)_beginMonitoringSettingsKeyPath:(id)arg1 ;
-(BOOL)_updateRootAccessorySettings;
-(NSMutableDictionary *)watchedSettings;
-(NSMutableDictionary *)keyPathStringToFuture;
-(BOOL)_updateRootAccessorySettingsIfNeeded;
-(void)_reportUpdatedValueForSetting:(id)arg1 ;
-(id)settingForKeyPath:(id)arg1 ;
-(void)_watchSetting:(id)arg1 ;
-(void)_teardownSetting:(id)arg1 ;
-(id)_missingKeyPaths;
-(void)_setupMissingKeyPaths;
-(void)_tearDownKeyPaths;
-(BOOL)_setupKeyPaths;
-(void)setWatchedSettings:(NSMutableDictionary *)arg1 ;
-(id)_endMonitoringSettingsKeyPath:(id)arg1 ;
-(void)settings:(id)arg1 didUpdateSetting:(id)arg2 ;
-(void)settings:(id)arg1 willWriteValueForSettings:(id)arg2 ;
-(void)settings:(id)arg1 didWriteValueForSettings:(id)arg2 failedSettings:(id)arg3 ;
-(id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandlerBlock:(/*^block*/id)arg3 ;
-(id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 ;
-(id)updateSettingWithKeyPath:(id)arg1 value:(id)arg2 ;
-(void)setKeyPathStringToFuture:(NSMutableDictionary *)arg1 ;
@end

