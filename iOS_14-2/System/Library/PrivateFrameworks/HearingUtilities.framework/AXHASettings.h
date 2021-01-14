/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/


@protocol OS_dispatch_queue;
#import <HearingUtilities/HearingUtilities-Structs.h>
@class ACAccountStore, NSMutableDictionary, NSMutableSet, NSObject, NSDictionary, NSString, NSArray;

@interface AXHASettings : NSObject {

	ACAccountStore* _accountStore;
	int _contentProtectionNotifyToken;
	BOOL _finishediCloudSetup;
	os_unfair_lock_s _syncLock;
	NSMutableDictionary* _soundDetectionSnoozeDictionary;
	NSMutableSet* _registeredNotifications;
	NSMutableSet* _synchronizePreferences;
	NSMutableDictionary* _updateBlocks;
	NSObject*<OS_dispatch_queue> _icloudInitializationQueue;

}

@property (nonatomic,retain) NSMutableSet * registeredNotifications;                              //@synthesize registeredNotifications=_registeredNotifications - In the implementation block
@property (nonatomic,retain) NSMutableSet * synchronizePreferences;                               //@synthesize synchronizePreferences=_synchronizePreferences - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updateBlocks;                                  //@synthesize updateBlocks=_updateBlocks - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> icloudInitializationQueue;              //@synthesize icloudInitializationQueue=_icloudInitializationQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * pairedHearingAids; 
@property (nonatomic,retain) NSDictionary * knownPeripheralUUIDs; 
@property (assign,nonatomic) BOOL independentHearingAidSettings; 
@property (assign,nonatomic) BOOL allowHearingAidControlOnLockScreen; 
@property (assign,nonatomic) BOOL shouldStreamToLeftAid; 
@property (assign,nonatomic) BOOL shouldStreamToRightAid; 
@property (assign,nonatomic) long long callAudioRoute; 
@property (assign,nonatomic) long long mediaAudioRoute; 
@property (assign,nonatomic) BOOL multideviceSettingsEnabled; 
@property (assign,nonatomic) BOOL multideviceAudioEnabled; 
@property (assign,nonatomic) BOOL shouldStreamSystemSounds; 
@property (assign,nonatomic) long long complicationPreferredDisplayMode; 
@property (assign,nonatomic) int availableInputEars; 
@property (assign,nonatomic) int earsSupportingWatch; 
@property (assign,nonatomic) int preferredInputEar; 
@property (nonatomic,retain) NSString * availableHearingDeviceName; 
@property (assign,nonatomic) unsigned long long usedHearingFeatures; 
@property (assign,nonatomic) BOOL exportsLiveListenToFile; 
@property (assign,nonatomic) BOOL ultronSupportEnabled; 
@property (assign,nonatomic) BOOL ultronIsRunning; 
@property (assign,nonatomic) int soundDetectionState; 
@property (nonatomic,readonly) BOOL soundDetectionEnabled; 
@property (nonatomic,retain) NSArray * enabledSoundDetectionTypes; 
@property (nonatomic,retain) NSMutableDictionary * soundDetectionSnoozeDictionary;                //@synthesize soundDetectionSnoozeDictionary=_soundDetectionSnoozeDictionary - In the implementation block
@property (nonatomic,readonly) NSArray * supportedSoundDetectionTypes; 
@property (assign,nonatomic) BOOL liveHeadphoneLevelEnabled; 
+(void)initialize;
+(id)sharedInstance;
+(id)stringForSoundDetectionState:(int)arg1 ;
-(CFStringRef)domainNameForPreferenceKey:(id)arg1 ;
-(void)setKnownPeripheralUUIDs:(NSDictionary *)arg1 ;
-(void)addSnoozeDateToSnoozeDictionary:(id)arg1 forKey:(id)arg2 ;
-(NSString *)availableHearingDeviceName;
-(BOOL)ultronSupportEnabled;
-(void)setShouldStreamToRightAid:(BOOL)arg1 ;
-(void)setExportsLiveListenToFile:(BOOL)arg1 ;
-(void)removeDeviceIDFromCloudBlacklist:(id)arg1 ;
-(BOOL)shouldUseiCloud;
-(void)addSoundDetectionType:(id)arg1 ;
-(id)_preferenceKeyForSelector:(SEL)arg1 ;
-(BOOL)multideviceSettingsEnabled;
-(void)registerUpdateBlock:(/*^block*/id)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3 ;
-(void)_registerForNotification:(id)arg1 ;
-(void)setRegisteredNotifications:(NSMutableSet *)arg1 ;
-(void)setEnabledSoundDetectionTypes:(NSArray *)arg1 ;
-(BOOL)shouldStreamSystemSounds;
-(void)setLiveHeadphoneLevelEnabled:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)icloudInitializationQueue;
-(unsigned long long)usedHearingFeatures;
-(NSDictionary *)pairedHearingAids;
-(long long)callAudioRoute;
-(BOOL)allowHearingAidControlOnLockScreen;
-(id)deviceIDForPairingInformation:(id)arg1 ;
-(void)_handlePreferenceChanged:(id)arg1 ;
-(void)setSupportedSoundDetectionTypes:(NSArray *)arg1 ;
-(BOOL)exportsLiveListenToFile;
-(void)setComplicationPreferredDisplayMode:(long long)arg1 ;
-(NSMutableDictionary *)soundDetectionSnoozeDictionary;
-(NSArray *)enabledSoundDetectionTypes;
-(void)setPairedHearingAids:(NSDictionary *)arg1 ;
-(void)iCloudAccountDidChange:(id)arg1 ;
-(void)setMediaAudioRoute:(long long)arg1 ;
-(BOOL)isDeviceIDOnCloudBlacklist:(id)arg1 ;
-(BOOL)isPairedWithFakeHearingAids;
-(void)addDeviceIDToCloudBlacklist:(id)arg1 ;
-(int)soundDetectionState;
-(BOOL)ultronIsRunning;
-(id)convertPersistentRepresentation:(id)arg1 fromVersion:(float)arg2 toVersion:(float)arg3 ;
-(void)setSoundDetectionState:(int)arg1 ;
-(int)availableInputEars;
-(void)_initializeICloudSetup;
-(void)setUsedHearingFeatures:(unsigned long long)arg1 ;
-(void)removeSoundDetectionType:(id)arg1 ;
-(void)setAvailableHearingDeviceName:(NSString *)arg1 ;
-(BOOL)shouldStreamToRightAid;
-(NSDictionary *)knownPeripheralUUIDs;
-(void)setMultideviceSettingsEnabled:(BOOL)arg1 ;
-(long long)complicationPreferredDisplayMode;
-(void)pushLocalHearingAidsToiCloud;
-(long long)mediaAudioRoute;
-(void)setIndependentHearingAidSettings:(BOOL)arg1 ;
-(BOOL)isPairedWithRealHearingAids;
-(int)earsSupportingWatch;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)_notificationForPreferenceKey:(id)arg1 ;
-(NSMutableSet *)synchronizePreferences;
-(NSMutableDictionary *)updateBlocks;
-(void)setIcloudInitializationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAvailableInputEars:(int)arg1 ;
-(BOOL)multideviceAudioEnabled;
-(void)setSoundDetectionSnoozeDictionary:(NSMutableDictionary *)arg1 ;
-(void)_synchronizeIfNecessary:(id)arg1 ;
-(void)setPreferredInputEar:(int)arg1 ;
-(void)setMultideviceAudioEnabled:(BOOL)arg1 ;
-(BOOL)isiCloudPaired;
-(void)setCallAudioRoute:(long long)arg1 ;
-(BOOL)soundDetectionEnabled;
-(BOOL)liveHeadphoneLevelEnabled;
-(void)setUpdateBlocks:(NSMutableDictionary *)arg1 ;
-(BOOL)shouldPushLocalAidsToiCloud;
-(void)setSynchronizePreferences:(NSMutableSet *)arg1 ;
-(NSArray *)supportedSoundDetectionTypes;
-(void)setAllowHearingAidControlOnLockScreen:(BOOL)arg1 ;
-(int)preferredInputEar;
-(void)setUltronSupportEnabled:(BOOL)arg1 ;
-(void)setEarsSupportingWatch:(int)arg1 ;
-(BOOL)shouldStreamToLeftAid;
-(BOOL)independentHearingAidSettings;
-(void)setShouldStreamSystemSounds:(BOOL)arg1 ;
-(void)setShouldStreamToLeftAid:(BOOL)arg1 ;
-(void)_updateTripleClickOptionsForPairedAids:(id)arg1 ;
-(id)_valueForPreferenceKey:(id)arg1 ;
-(void)setLocalHearingAidsFromiCloud:(id)arg1 ;
-(void)icloudHearingSettingsDidChange:(id)arg1 ;
-(void)removeAllSoundDetectionTypes;
-(NSMutableSet *)registeredNotifications;
-(void)setUltronIsRunning:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
@end

