/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/


@protocol OS_dispatch_queue;
#import <HearingUtilities/HearingUtilities-Structs.h>
@class ACAccountStore, NSMutableSet, NSMutableDictionary, NSObject, NSDictionary, NSString, NSArray;

@interface AXHASettings : NSObject {

	ACAccountStore* _accountStore;
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
@property (assign,nonatomic) BOOL independentHearingAidSettings; 
@property (assign,nonatomic) BOOL allowHearingAidControlOnLockScreen; 
@property (assign,nonatomic) BOOL shouldStreamToLeftAid; 
@property (assign,nonatomic) BOOL shouldStreamToRightAid; 
@property (assign,nonatomic) long long callAudioRoute; 
@property (assign,nonatomic) long long mediaAudioRoute; 
@property (assign,nonatomic) BOOL multideviceSettingsEnabled; 
@property (assign,nonatomic) BOOL multideviceAudioEnabled; 
@property (assign,nonatomic) long long complicationPreferredDisplayMode; 
@property (assign,nonatomic) int availableInputEars; 
@property (assign,nonatomic) int preferredInputEar; 
@property (nonatomic,retain) NSString * availableHearingDeviceName; 
@property (assign,nonatomic) unsigned long long usedHearingFeatures; 
@property (assign,nonatomic) BOOL exportsLiveListenToFile; 
@property (assign,nonatomic) BOOL ultronSupportEnabled; 
@property (assign,nonatomic) BOOL ultronIsRunning; 
@property (nonatomic,retain) NSArray * detectableUltronTypes; 
+(void)initialize;
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSMutableSet *)synchronizePreferences;
-(void)registerUpdateBlock:(/*^block*/id)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3 ;
-(BOOL)allowHearingAidControlOnLockScreen;
-(BOOL)shouldStreamToLeftAid;
-(BOOL)shouldStreamToRightAid;
-(BOOL)independentHearingAidSettings;
-(void)_setValue:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)_notificationForPreferenceKey:(id)arg1 ;
-(id)_valueForPreferenceKey:(id)arg1 ;
-(void)_registerForNotification:(id)arg1 ;
-(NSMutableDictionary *)updateBlocks;
-(NSMutableSet *)registeredNotifications;
-(void)_handlePreferenceChanged:(id)arg1 ;
-(id)_preferenceKeyForSelector:(SEL)arg1 ;
-(void)setIndependentHearingAidSettings:(BOOL)arg1 ;
-(void)setAllowHearingAidControlOnLockScreen:(BOOL)arg1 ;
-(void)setShouldStreamToLeftAid:(BOOL)arg1 ;
-(void)setShouldStreamToRightAid:(BOOL)arg1 ;
-(void)setRegisteredNotifications:(NSMutableSet *)arg1 ;
-(void)setUpdateBlocks:(NSMutableDictionary *)arg1 ;
-(void)iCloudAccountDidChange:(id)arg1 ;
-(void)_synchronizeIfNecessary:(id)arg1 ;
-(void)setSynchronizePreferences:(NSMutableSet *)arg1 ;
-(void)setPairedHearingAids:(NSDictionary *)arg1 ;
-(NSDictionary *)pairedHearingAids;
-(int)availableInputEars;
-(void)setAvailableInputEars:(int)arg1 ;
-(BOOL)isiCloudPaired;
-(int)preferredInputEar;
-(BOOL)multideviceSettingsEnabled;
-(BOOL)multideviceAudioEnabled;
-(void)setAvailableHearingDeviceName:(NSString *)arg1 ;
-(void)setIcloudInitializationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)icloudInitializationQueue;
-(void)_initializeICloudSetup;
-(BOOL)shouldUseiCloud;
-(void)icloudHearingSettingsDidChange:(id)arg1 ;
-(void)pushLocalHearingAidsToiCloud;
-(BOOL)isPairedWithFakeHearingAids;
-(void)setLocalHearingAidsFromiCloud:(id)arg1 ;
-(id)convertPersistentRepresentation:(id)arg1 fromVersion:(float)arg2 toVersion:(float)arg3 ;
-(id)deviceIDForPairingInformation:(id)arg1 ;
-(BOOL)isDeviceIDOnCloudBlacklist:(id)arg1 ;
-(BOOL)shouldPushLocalAidsToiCloud;
-(long long)callAudioRoute;
-(long long)mediaAudioRoute;
-(BOOL)exportsLiveListenToFile;
-(long long)complicationPreferredDisplayMode;
-(NSString *)availableHearingDeviceName;
-(unsigned long long)usedHearingFeatures;
-(BOOL)ultronSupportEnabled;
-(BOOL)ultronIsRunning;
-(NSArray *)detectableUltronTypes;
-(CFStringRef)domainNameForPreferenceKey:(id)arg1 ;
-(void)_updateTripleClickOptionsForPairedAids:(id)arg1 ;
-(void)addDeviceIDToCloudBlacklist:(id)arg1 ;
-(void)removeDeviceIDFromCloudBlacklist:(id)arg1 ;
-(BOOL)isPairedWithRealHearingAids;
-(void)setCallAudioRoute:(long long)arg1 ;
-(void)setMediaAudioRoute:(long long)arg1 ;
-(void)setExportsLiveListenToFile:(BOOL)arg1 ;
-(void)setMultideviceSettingsEnabled:(BOOL)arg1 ;
-(void)setMultideviceAudioEnabled:(BOOL)arg1 ;
-(void)setComplicationPreferredDisplayMode:(long long)arg1 ;
-(void)setPreferredInputEar:(int)arg1 ;
-(void)setUsedHearingFeatures:(unsigned long long)arg1 ;
-(void)setUltronSupportEnabled:(BOOL)arg1 ;
-(void)setUltronIsRunning:(BOOL)arg1 ;
-(void)setDetectableUltronTypes:(NSArray *)arg1 ;
@end

